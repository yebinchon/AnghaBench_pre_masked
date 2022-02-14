
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; scalar_t__ index; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {int cur_mode; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct saa7146_dev*,int ,int ,struct v4l2_tuner*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_tuner *VAR_5)
{
 struct saa7146_dev *VAR_6 = ((struct saa7146_fh *)VAR_4)->dev;
 struct mxb *VAR_7 = (struct mxb *)VAR_6->ext_priv;

 if (VAR_5->index) {
  FUNC_0(("VIDIOC_S_TUNER: channel %d does not have a tuner attached.\n", VAR_5->index));
  return -VAR_0;
 }

 VAR_7->cur_mode = VAR_5->audmode;
 return FUNC_1(VAR_6, VAR_2, VAR_1, VAR_5);
}
