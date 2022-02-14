
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int field; unsigned int height; int width; int bytesperline; int sizeimage; int pixelformat; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct saa7134_format {int depth; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_5__ {int width; int height; } ;
struct saa7134_dev {TYPE_2__ crop_bounds; TYPE_1__ crop_current; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;



 struct saa7134_format* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 struct saa7134_fh *VAR_5 = VAR_3;
 struct saa7134_dev *VAR_6 = VAR_5->dev;
 struct saa7134_format *VAR_7;
 enum v4l2_field VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_4->fmt.pix.pixelformat);
 if (((void*)0) == VAR_7)
  return -VAR_0;

 VAR_8 = VAR_4->fmt.pix.field;
 VAR_9 = FUNC_1(VAR_6->crop_current.width*4, VAR_6->crop_bounds.width);
 VAR_10 = FUNC_1(VAR_6->crop_current.height*4, VAR_6->crop_bounds.height);

 if (VAR_1 == VAR_8) {
  VAR_8 = (VAR_4->fmt.pix.height > VAR_10/2)
   ? 129
   : 130;
 }
 switch (VAR_8) {
 case 128:
 case 130:
  VAR_10 = VAR_10 / 2;
  break;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_4->fmt.pix.field = VAR_8;
 if (VAR_4->fmt.pix.width < 48)
  VAR_4->fmt.pix.width = 48;
 if (VAR_4->fmt.pix.height < 32)
  VAR_4->fmt.pix.height = 32;
 if (VAR_4->fmt.pix.width > VAR_9)
  VAR_4->fmt.pix.width = VAR_9;
 if (VAR_4->fmt.pix.height > VAR_10)
  VAR_4->fmt.pix.height = VAR_10;
 VAR_4->fmt.pix.width &= ~0x03;
 VAR_4->fmt.pix.bytesperline =
  (VAR_4->fmt.pix.width * VAR_7->depth) >> 3;
 VAR_4->fmt.pix.sizeimage =
  VAR_4->fmt.pix.height * VAR_4->fmt.pix.bytesperline;

 return 0;
}
