
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {scalar_t__ index; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {size_t cur_input; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct v4l2_audio*,int *,int) ;
 int * VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_audio *VAR_6)
{
 struct saa7146_dev *VAR_7 = ((struct saa7146_fh *)VAR_5)->dev;
 struct mxb *VAR_8 = (struct mxb *)VAR_7->ext_priv;

 if (VAR_6->index > VAR_1) {
  FUNC_0(("VIDIOC_G_AUDIO %d out of range.\n", VAR_6->index));
  return -VAR_0;
 }

 FUNC_1(("VIDIOC_G_AUDIO %d.\n", VAR_6->index));
 FUNC_2(VAR_6, &VAR_2[VAR_3[VAR_8->cur_input]], sizeof(struct v4l2_audio));
 return 0;
}
