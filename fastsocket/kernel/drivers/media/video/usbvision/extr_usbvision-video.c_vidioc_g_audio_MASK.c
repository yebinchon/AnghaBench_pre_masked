
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {int name; } ;
struct usb_usbvision {scalar_t__ radio; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_audio *VAR_2)
{
 struct usb_usbvision *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->radio)
  FUNC_0(VAR_2->name, "Radio");
 else
  FUNC_0(VAR_2->name, "TV");

 return 0;
}
