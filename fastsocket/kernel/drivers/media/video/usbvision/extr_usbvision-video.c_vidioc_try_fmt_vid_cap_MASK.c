
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pixelformat; int width; int height; int bytesperline; int sizeimage; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_6__ {scalar_t__ format; int bytes_per_pixel; } ;
struct usb_usbvision {TYPE_3__ palette; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_7, void *VAR_8,
          struct v4l2_format *VAR_9)
{
 struct usb_usbvision *VAR_10 = FUNC_1(VAR_7);
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  if (VAR_9->fmt.pix.pixelformat ==
     VAR_6[VAR_11].format) {
   VAR_10->palette = VAR_6[VAR_11];
   break;
  }
 }

 if (VAR_11 == VAR_5)
  return -VAR_0;
 FUNC_0(VAR_9->fmt.pix.width, VAR_4, VAR_2);
 FUNC_0(VAR_9->fmt.pix.height, VAR_3, VAR_1);

 VAR_9->fmt.pix.bytesperline = VAR_9->fmt.pix.width*
  VAR_10->palette.bytes_per_pixel;
 VAR_9->fmt.pix.sizeimage = VAR_9->fmt.pix.bytesperline*VAR_9->fmt.pix.height;

 return 0;
}
