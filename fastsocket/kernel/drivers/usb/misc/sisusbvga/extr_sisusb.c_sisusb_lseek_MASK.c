
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int lock; int sisusb_dev; int ready; int present; } ;
struct file {int f_pos; scalar_t__ private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static loff_t
FUNC_2(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct sisusb_usb_data *VAR_5;
 loff_t VAR_6;

 if (!(VAR_5 = (struct sisusb_usb_data *)VAR_2->private_data))
  return -VAR_1;

 FUNC_0(&VAR_5->lock);


 if (!VAR_5->present || !VAR_5->ready || !VAR_5->sisusb_dev) {
  FUNC_1(&VAR_5->lock);
  return -VAR_1;
 }

 switch (VAR_4) {
  case 0:
   VAR_2->f_pos = VAR_3;
   VAR_6 = VAR_2->f_pos;

   break;
  case 1:
   VAR_2->f_pos += VAR_3;
   VAR_6 = VAR_2->f_pos;

   break;
  default:

   VAR_6 = -VAR_0;
 }

 FUNC_1(&VAR_5->lock);
 return VAR_6;
}
