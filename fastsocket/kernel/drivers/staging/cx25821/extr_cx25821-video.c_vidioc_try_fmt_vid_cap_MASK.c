
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; unsigned int height; int width; int bytesperline; int sizeimage; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx25821_fmt {int depth; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;



 struct cx25821_fmt* FUNC_0 (int ) ;

int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct cx25821_fmt *VAR_5;
 enum v4l2_field VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_4->fmt.pix.pixelformat);
 if (((void*)0) == VAR_5)
  return -VAR_0;

 VAR_6 = VAR_4->fmt.pix.field;
 VAR_7 = 720;
 VAR_8 = 576;

 if (VAR_1 == VAR_6) {
  VAR_6 = (VAR_4->fmt.pix.height > VAR_8 / 2)
      ? 129 : 128;
 }

 switch (VAR_6) {
 case 128:
 case 130:
  VAR_8 = VAR_8 / 2;
  break;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_4->fmt.pix.field = VAR_6;
 if (VAR_4->fmt.pix.height < 32)
  VAR_4->fmt.pix.height = 32;
 if (VAR_4->fmt.pix.height > VAR_8)
  VAR_4->fmt.pix.height = VAR_8;
 if (VAR_4->fmt.pix.width < 48)
  VAR_4->fmt.pix.width = 48;
 if (VAR_4->fmt.pix.width > VAR_7)
  VAR_4->fmt.pix.width = VAR_7;
 VAR_4->fmt.pix.width &= ~0x03;
 VAR_4->fmt.pix.bytesperline = (VAR_4->fmt.pix.width * VAR_5->depth) >> 3;
 VAR_4->fmt.pix.sizeimage = VAR_4->fmt.pix.height * VAR_4->fmt.pix.bytesperline;

 return 0;
}
