
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int dummy; } ;
struct usb_usbvision {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct usb_usbvision*,int ,int ,struct v4l2_control*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_control *VAR_4)
{
 struct usb_usbvision *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_5, VAR_0, VAR_1, VAR_4);
 return 0;
}
