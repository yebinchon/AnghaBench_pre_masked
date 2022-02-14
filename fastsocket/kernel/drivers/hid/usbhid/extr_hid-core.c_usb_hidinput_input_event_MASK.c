
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int lock; int ledcount; } ;
struct input_dev {int dev; } ;
struct hid_field {int report; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hid_field*,int,int) ;
 int FUNC_2 (struct hid_device*,unsigned int,unsigned int,struct hid_field**) ;
 int FUNC_3 (struct input_dev*,unsigned int,unsigned int,int) ;
 struct hid_device* FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct hid_device*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct input_dev *VAR_3, unsigned int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct hid_device *VAR_7 = FUNC_4(VAR_3);
 struct usbhid_device *VAR_8 = VAR_7->driver_data;
 struct hid_field *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_4 == VAR_0)
  return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_4 != VAR_1)
  return -1;

 if ((VAR_11 = FUNC_2(VAR_7, VAR_4, VAR_5, &VAR_9)) == -1) {
  FUNC_0(&VAR_3->dev, "event field not found\n");
  return -1;
 }

 FUNC_1(VAR_9, VAR_11, VAR_6);
 if (VAR_6) {
  FUNC_5(&VAR_8->lock, VAR_10);
  VAR_8->ledcount++;
  FUNC_6(&VAR_8->lock, VAR_10);
 } else {
  FUNC_5(&VAR_8->lock, VAR_10);
  VAR_8->ledcount--;
  FUNC_6(&VAR_8->lock, VAR_10);
 }
 FUNC_7(VAR_7, VAR_9->report, VAR_2);

 return 0;
}
