
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int streaming; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (struct usb_usbvision*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, enum v4l2_buf_type VAR_5)
{
 struct usb_usbvision *VAR_6 = FUNC_1(VAR_3);

 VAR_6->streaming = VAR_1;
 FUNC_0(VAR_6, VAR_2, VAR_0, 1);

 return 0;
}
