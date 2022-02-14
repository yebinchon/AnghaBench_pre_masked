
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_vv {int video_status; struct saa7146_fh* video_fh; } ;
struct saa7146_fh {int vbi_q; int video_q; struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct saa7146_fh*,struct file*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6, enum v4l2_buf_type VAR_7)
{
 struct saa7146_fh *VAR_8 = VAR_6;
 struct saa7146_dev *VAR_9 = VAR_8->dev;
 struct saa7146_vv *VAR_10 = VAR_9->vv_data;
 int VAR_11;

 FUNC_0(("VIDIOC_STREAMOFF, type:%d\n", VAR_7));




 if ((VAR_10->video_status & VAR_2) != VAR_2) {
  FUNC_1(("not capturing.\n"));
  return 0;
 }

 if (VAR_10->video_fh != VAR_8) {
  FUNC_1(("capturing, but in another open.\n"));
  return -VAR_0;
 }

 VAR_11 = -VAR_1;
 if (VAR_7 == VAR_4)
  VAR_11 = FUNC_3(&VAR_8->video_q);
 else if (VAR_7 == VAR_3)
  VAR_11 = FUNC_3(&VAR_8->vbi_q);
 if (0 != VAR_11) {
  FUNC_0(("warning: videobuf_streamoff() failed.\n"));
  FUNC_2(VAR_8, VAR_5);
 } else {
  VAR_11 = FUNC_2(VAR_8, VAR_5);
 }
 return VAR_11;
}
