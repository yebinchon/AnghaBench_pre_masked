
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytesperline; int width; int pixelformat; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;
struct saa7146_vv {void* video_fh; struct v4l2_framebuffer ov_fb; struct saa7146_format* ov_fmt; } ;
struct saa7146_format {int flags; int depth; int pixelformat; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 struct saa7146_format* FUNC_5 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_6, void *VAR_7, struct v4l2_framebuffer *VAR_8)
{
 struct saa7146_dev *VAR_9 = ((struct saa7146_fh *)VAR_7)->dev;
 struct saa7146_vv *VAR_10 = VAR_9->vv_data;
 struct saa7146_format *VAR_11;

 FUNC_1(("VIDIOC_S_FBUF\n"));

 if (!FUNC_4(VAR_0) && !FUNC_4(VAR_1))
  return -VAR_4;


 VAR_11 = FUNC_5(VAR_9, VAR_8->fmt.pixelformat);
 if (((void*)0) == VAR_11)
  return -VAR_3;


 if (VAR_11->flags & VAR_5)
  FUNC_2(("planar pixelformat '%4.4s' not allowed for overlay\n",
     (char *)&VAR_11->pixelformat));


 if (FUNC_3(VAR_7) != 0) {
  if (VAR_10->video_fh != VAR_7) {
   FUNC_0(("refusing to change framebuffer informations while overlay is active in another open.\n"));
   return -VAR_2;
  }
 }


 VAR_10->ov_fb = *VAR_8;
 VAR_10->ov_fmt = VAR_11;

 if (VAR_10->ov_fb.fmt.bytesperline < VAR_10->ov_fb.fmt.width) {
  VAR_10->ov_fb.fmt.bytesperline = VAR_10->ov_fb.fmt.width * VAR_11->depth / 8;
  FUNC_0(("setting bytesperline to %d\n", VAR_10->ov_fb.fmt.bytesperline));
 }
 return 0;
}
