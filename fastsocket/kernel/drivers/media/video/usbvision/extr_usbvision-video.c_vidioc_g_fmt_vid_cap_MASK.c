
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int bytesperline; int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct TYPE_4__ {int bytes_per_pixel; int format; } ;
struct usb_usbvision {int curwidth; int curheight; TYPE_1__ palette; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_usbvision* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct usb_usbvision *VAR_5 = FUNC_0(VAR_2);
 VAR_4->fmt.pix.width = VAR_5->curwidth;
 VAR_4->fmt.pix.height = VAR_5->curheight;
 VAR_4->fmt.pix.pixelformat = VAR_5->palette.format;
 VAR_4->fmt.pix.bytesperline =
  VAR_5->curwidth * VAR_5->palette.bytes_per_pixel;
 VAR_4->fmt.pix.sizeimage = VAR_4->fmt.pix.bytesperline * VAR_5->curheight;
 VAR_4->fmt.pix.colorspace = VAR_0;
 VAR_4->fmt.pix.field = VAR_1;

 return 0;
}
