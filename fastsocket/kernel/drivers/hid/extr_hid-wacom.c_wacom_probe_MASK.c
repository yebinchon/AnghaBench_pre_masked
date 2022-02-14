
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_data {int features; } ;
struct hid_device_id {int dummy; } ;
struct hid_device {int product; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct hid_device*,int ) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,struct wacom_data*) ;
 int FUNC_6 (struct wacom_data*) ;
 struct wacom_data* FUNC_7 (int,int ) ;
 int FUNC_8 (struct hid_device*,int) ;
 int FUNC_9 (struct hid_device*) ;

__attribute__((used)) static int FUNC_10(struct hid_device *VAR_4,
  const struct hid_device_id *VAR_5)
{
 struct wacom_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "can't alloc wacom descriptor\n");
  return -VAR_0;
 }

 FUNC_5(VAR_4, VAR_6);


 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev, "parse failed\n");
  goto err_free;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev, "hw start failed\n");
  goto err_free;
 }

 VAR_7 = FUNC_2(&VAR_4->dev, &VAR_3);
 if (VAR_7)
  FUNC_1(&VAR_4->dev,
   "can't create sysfs speed attribute err: %d\n", VAR_7);

 switch (VAR_4->product) {
 case 129:

  FUNC_8(VAR_4, 1);
  break;
 case 128:
  VAR_6->features = 0;
  FUNC_9(VAR_4);
  break;
 }

 return 0;
err_free:
 FUNC_6(VAR_6);
 return VAR_7;
}
