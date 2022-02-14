
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device_id {int dummy; } ;
struct ssb_device {int dummy; } ;
struct b43legacy_wl {int firmware_load; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ssb_device*,struct b43legacy_wl*) ;
 int VAR_0 ;
 int FUNC_3 (struct ssb_device*,struct b43legacy_wl*) ;
 int FUNC_4 (struct ssb_device*) ;
 int FUNC_5 (int *) ;
 struct b43legacy_wl* FUNC_6 (struct ssb_device*) ;

__attribute__((used)) static int FUNC_7(struct ssb_device *VAR_1,
    const struct ssb_device_id *VAR_2)
{
 struct b43legacy_wl *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_6(VAR_1);
 if (!VAR_3) {

  VAR_5 = 1;
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4)
   goto out;
  VAR_3 = FUNC_6(VAR_1);
  FUNC_0(!VAR_3);
 }
 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (VAR_4)
  goto err_wireless_exit;


 FUNC_1(&VAR_3->firmware_load, VAR_0);
 FUNC_5(&VAR_3->firmware_load);

out:
 return VAR_4;

err_wireless_exit:
 if (VAR_5)
  FUNC_3(VAR_1, VAR_3);
 return VAR_4;
}
