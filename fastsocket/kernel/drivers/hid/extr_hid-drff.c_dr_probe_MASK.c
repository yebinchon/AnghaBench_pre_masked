
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,int) ;
 int FUNC_4 (struct hid_device*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_2, const struct hid_device_id *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2->dev, "DragonRise Inc. HID hardware probe...");

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4) {
  FUNC_1(&VAR_2->dev, "parse failed\n");
  goto err;
 }

 VAR_4 = FUNC_3(VAR_2, VAR_0 & ~VAR_1);
 if (VAR_4) {
  FUNC_1(&VAR_2->dev, "hw start failed\n");
  goto err;
 }

 FUNC_2(VAR_2);

 return 0;
err:
 return VAR_4;
}
