
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct usb_usbvision {scalar_t__ streaming; int * cur_frame; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_usbvision*) ;
 int FUNC_1 (struct usb_usbvision*) ;
 int FUNC_2 (struct usb_usbvision*,int ,int ) ;
 int FUNC_3 (struct usb_usbvision*) ;
 struct usb_usbvision* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, void *VAR_2,
          struct v4l2_format *VAR_3)
{
 struct usb_usbvision *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;


 if (VAR_4->streaming == VAR_0) {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5)
   return VAR_5;
 }
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);

 VAR_4->cur_frame = ((void*)0);


 FUNC_2(VAR_4, VAR_3->fmt.pix.width, VAR_3->fmt.pix.height);

 return 0;
}
