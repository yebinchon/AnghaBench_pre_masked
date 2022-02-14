
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_data {unsigned char features; } ;
struct input_dev {int dummy; } ;
struct hid_device {int dev; } ;


 int FUNC_0 (int *,char*,unsigned char,unsigned char) ;
 int FUNC_1 (struct wacom_data*,struct input_dev*,unsigned char*) ;
 int FUNC_2 (struct wacom_data*,struct input_dev*,unsigned char*) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_0,
   struct wacom_data *VAR_1,
   struct input_dev *VAR_2, unsigned char *VAR_3)
{
 switch (VAR_3[0]) {
 case 0x00:
  break;
 case 0x02:
  FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 case 0x03:
  VAR_1->features = VAR_3[2];
  break;
 case 0x0C:
  FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_0(&(VAR_0)->dev, "Unknown report: %d,%d\n", VAR_3[0], VAR_3[1]);
  break;
 }
}
