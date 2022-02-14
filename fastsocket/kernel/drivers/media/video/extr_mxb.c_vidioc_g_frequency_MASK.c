
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {struct v4l2_frequency cur_freq; scalar_t__ cur_input; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, struct v4l2_frequency *VAR_3)
{
 struct saa7146_dev *VAR_4 = ((struct saa7146_fh *)VAR_2)->dev;
 struct mxb *VAR_5 = (struct mxb *)VAR_4->ext_priv;

 if (VAR_5->cur_input) {
  FUNC_0(("VIDIOC_G_FREQ: channel %d does not have a tuner!\n",
     VAR_5->cur_input));
  return -VAR_0;
 }

 *VAR_3 = VAR_5->cur_freq;

 FUNC_1(("VIDIOC_G_FREQ: freq:0x%08x.\n", VAR_5->cur_freq.frequency));
 return 0;
}
