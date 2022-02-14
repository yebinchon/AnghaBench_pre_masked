
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pixelformat; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct saa7146_vv {int dummy; } ;
struct saa7146_fh {TYPE_2__ video_fmt; struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct saa7146_fh*) ;
 int FUNC_2 (struct file*,struct saa7146_fh*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct saa7146_fh *VAR_4 = VAR_2;
 struct saa7146_dev *VAR_5 = VAR_4->dev;
 struct saa7146_vv *VAR_6 = VAR_5->vv_data;
 int VAR_7;

 FUNC_0(("V4L2_BUF_TYPE_VIDEO_CAPTURE: dev:%p, fh:%p\n", VAR_5, VAR_4));
 if (FUNC_1(VAR_4) != 0) {
  FUNC_0(("streaming capture is active\n"));
  return -VAR_0;
 }
 VAR_7 = FUNC_2(VAR_1, VAR_4, VAR_3);
 if (0 != VAR_7)
  return VAR_7;
 VAR_4->video_fmt = VAR_3->fmt.pix;
 FUNC_0(("set to pixelformat '%4.4s'\n", (char *)&VAR_4->video_fmt.pixelformat));
 return 0;
}
