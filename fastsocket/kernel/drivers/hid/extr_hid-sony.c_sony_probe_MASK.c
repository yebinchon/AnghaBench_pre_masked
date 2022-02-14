
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {unsigned long quirks; } ;
struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hid_device*,int) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct sony_sc*) ;
 int FUNC_5 (struct sony_sc*) ;
 struct sony_sc* FUNC_6 (int,int ) ;
 int FUNC_7 (struct hid_device*) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_4, const struct hid_device_id *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7 = VAR_5->driver_data;
 struct sony_sc *VAR_8;

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "can't alloc apple descriptor\n");
  return -VAR_0;
 }

 VAR_8->quirks = VAR_7;
 FUNC_4(VAR_4, VAR_8);

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev, "parse failed\n");
  goto err_free;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_2 |
   VAR_3);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev, "hw start failed\n");
  goto err_free;
 }

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6 < 0)
  goto err_stop;

 return 0;
err_stop:
 FUNC_2(VAR_4);
err_free:
 FUNC_5(VAR_8);
 return VAR_6;
}
