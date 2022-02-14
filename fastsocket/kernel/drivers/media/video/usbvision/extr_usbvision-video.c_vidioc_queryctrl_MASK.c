
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int type; } ;
struct usb_usbvision {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_usbvision*,int ,int ,struct v4l2_queryctrl*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
       struct v4l2_queryctrl *VAR_5)
{
 struct usb_usbvision *VAR_6 = FUNC_1(VAR_3);

 FUNC_0(VAR_6, VAR_1, VAR_2, VAR_5);

 if (!VAR_5->type)
  return -VAR_0;

 return 0;
}
