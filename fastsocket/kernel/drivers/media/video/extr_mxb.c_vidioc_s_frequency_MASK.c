
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ type; int frequency; scalar_t__ tuner; } ;
struct saa7146_vv {scalar_t__ vbi_fieldcount; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {int slock; struct saa7146_vv* vv_data; scalar_t__ ext_priv; } ;
struct mxb {struct v4l2_frequency cur_freq; scalar_t__ cur_input; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct mxb*,int ,int ,struct v4l2_frequency*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5, struct v4l2_frequency *VAR_6)
{
 struct saa7146_dev *VAR_7 = ((struct saa7146_fh *)VAR_5)->dev;
 struct mxb *VAR_8 = (struct mxb *)VAR_7->ext_priv;
 struct saa7146_vv *VAR_9 = VAR_7->vv_data;

 if (VAR_6->tuner)
  return -VAR_0;

 if (VAR_1 != VAR_6->type)
  return -VAR_0;

 if (VAR_8->cur_input) {
  FUNC_0(("VIDIOC_S_FREQ: channel %d does not have a tuner!\n", VAR_8->cur_input));
  return -VAR_0;
 }

 VAR_8->cur_freq = *VAR_6;
 FUNC_1(("VIDIOC_S_FREQUENCY: freq:0x%08x.\n", VAR_8->cur_freq.frequency));


 FUNC_4(VAR_8, VAR_3, VAR_2, &VAR_8->cur_freq);


 FUNC_2(&VAR_7->slock);
 VAR_9->vbi_fieldcount = 0;
 FUNC_3(&VAR_7->slock);

 return 0;
}
