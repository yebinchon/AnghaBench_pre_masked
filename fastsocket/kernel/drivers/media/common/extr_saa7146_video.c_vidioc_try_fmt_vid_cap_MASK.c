
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int field; int height; int width; int bytesperline; int sizeimage; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct saa7146_vv {int last_field; TYPE_1__* standard; } ;
struct saa7146_format {int depth; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_4__ {int h_max_out; int v_max_out; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;



 struct saa7146_format* FUNC_2 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, struct v4l2_format *VAR_5)
{
 struct saa7146_dev *VAR_6 = ((struct saa7146_fh *)VAR_4)->dev;
 struct saa7146_vv *VAR_7 = VAR_6->vv_data;
 struct saa7146_format *VAR_8;
 enum v4l2_field VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 FUNC_1(("V4L2_BUF_TYPE_VIDEO_CAPTURE: dev:%p, fh:%p\n", VAR_6, VAR_4));

 VAR_8 = FUNC_2(VAR_6, VAR_5->fmt.pix.pixelformat);
 if (((void*)0) == VAR_8)
  return -VAR_0;

 VAR_9 = VAR_5->fmt.pix.field;
 VAR_10 = VAR_7->standard->h_max_out;
 VAR_11 = VAR_7->standard->v_max_out;

 if (VAR_2 == VAR_9) {
  VAR_9 = (VAR_5->fmt.pix.height > VAR_11 / 2)
   ? 129
   : 130;
 }
 switch (VAR_9) {
 case 131:
  VAR_7->last_field = 128;
  VAR_11 = VAR_11 / 2;
  break;
 case 128:
 case 130:
  VAR_7->last_field = 129;
  VAR_11 = VAR_11 / 2;
  break;
 case 129:
  VAR_7->last_field = 129;
  break;
 default:
  FUNC_0(("no known field mode '%d'.\n", VAR_9));
  return -VAR_0;
 }

 VAR_5->fmt.pix.field = VAR_9;
 if (VAR_5->fmt.pix.width > VAR_10)
  VAR_5->fmt.pix.width = VAR_10;
 if (VAR_5->fmt.pix.height > VAR_11)
  VAR_5->fmt.pix.height = VAR_11;

 VAR_12 = (VAR_5->fmt.pix.width * VAR_8->depth) / 8;

 if (VAR_5->fmt.pix.bytesperline < VAR_12)
  VAR_5->fmt.pix.bytesperline = VAR_12;

 if (VAR_5->fmt.pix.bytesperline > (2 * VAR_1 * VAR_8->depth) / 8)
  VAR_5->fmt.pix.bytesperline = VAR_12;

 VAR_5->fmt.pix.sizeimage = VAR_5->fmt.pix.bytesperline * VAR_5->fmt.pix.height;
 FUNC_0(("w:%d, h:%d, bytesperline:%d, sizeimage:%d\n", VAR_5->fmt.pix.width,
   VAR_5->fmt.pix.height, VAR_5->fmt.pix.bytesperline, VAR_5->fmt.pix.sizeimage));

 return 0;
}
