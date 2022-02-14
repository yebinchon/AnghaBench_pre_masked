
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {int current_input; int current_freq; int analog_tuner_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct v4l2_frequency*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_frequency *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct av7110 *VAR_6 = (struct av7110 *)VAR_5->ext_priv;

 FUNC_0(2, "VIDIOC_G_FREQ: freq:0x%08x.\n", VAR_4->frequency);

 if (!VAR_6->analog_tuner_flags || VAR_6->current_input != 1)
  return -VAR_0;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->type = VAR_1;
 VAR_4->frequency = VAR_6->current_freq;
 return 0;
}
