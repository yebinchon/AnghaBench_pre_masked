
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int capability; int audmode; int type; int name; scalar_t__ index; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {int cur_mode; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct saa7146_dev*,int ,int ,struct v4l2_tuner*) ;
 int VAR_7 ;
 int FUNC_3 (struct v4l2_tuner*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_9, void *VAR_10, struct v4l2_tuner *VAR_11)
{
 struct saa7146_dev *VAR_12 = ((struct saa7146_fh *)VAR_10)->dev;
 struct mxb *VAR_13 = (struct mxb *)VAR_12->ext_priv;

 if (VAR_11->index) {
  FUNC_0(("VIDIOC_G_TUNER: channel %d does not have a tuner attached.\n", VAR_11->index));
  return -VAR_0;
 }

 FUNC_1(("VIDIOC_G_TUNER: %d\n", VAR_11->index));

 FUNC_3(VAR_11, 0, sizeof(*VAR_11));
 FUNC_4(VAR_11->name, "TV Tuner", sizeof(VAR_11->name));
 VAR_11->type = VAR_1;
 VAR_11->capability = VAR_4 | VAR_6 |
   VAR_2 | VAR_3 | VAR_5;
 VAR_11->audmode = VAR_13->cur_mode;
 return FUNC_2(VAR_12, VAR_8, VAR_7, VAR_11);
}
