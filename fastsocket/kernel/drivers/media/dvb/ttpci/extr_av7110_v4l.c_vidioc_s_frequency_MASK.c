
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ type; int frequency; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {int analog_tuner_flags; int current_input; int current_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct av7110*,int ,int,int) ;
 int FUNC_2 (struct saa7146_dev*,int ) ;
 int FUNC_3 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6, struct v4l2_frequency *VAR_7)
{
 struct saa7146_dev *VAR_8 = ((struct saa7146_fh *)VAR_6)->dev;
 struct av7110 *VAR_9 = (struct av7110 *)VAR_8->ext_priv;

 FUNC_0(2, "VIDIOC_S_FREQUENCY: freq:0x%08x.\n", VAR_7->frequency);

 if (!VAR_9->analog_tuner_flags || VAR_9->current_input != 1)
  return -VAR_2;

 if (VAR_4 != VAR_7->type)
  return -VAR_2;

 FUNC_1(VAR_9, VAR_3, 0x0000, 0xffe0);
 FUNC_1(VAR_9, VAR_3, 0x0007, 0xffe0);


 if (VAR_9->analog_tuner_flags & VAR_1)
  FUNC_3(VAR_8, VAR_7->frequency);
 else if (VAR_9->analog_tuner_flags & VAR_0)
  FUNC_2(VAR_8, VAR_7->frequency);
 VAR_9->current_freq = VAR_7->frequency;

 FUNC_1(VAR_9, VAR_3, 0x0015, 0x003f);
 FUNC_1(VAR_9, VAR_3, 0x0015, 0x0000);
 FUNC_1(VAR_9, VAR_3, 0x0000, 0x4f00);
 FUNC_1(VAR_9, VAR_3, 0x0007, 0x4f00);
 return 0;
}
