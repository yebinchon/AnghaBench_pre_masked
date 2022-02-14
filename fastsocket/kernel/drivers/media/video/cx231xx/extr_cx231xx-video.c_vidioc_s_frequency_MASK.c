
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_frequency {int frequency; scalar_t__ type; scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct cx231xx_fh {int radio; struct cx231xx* dev; } ;
struct cx231xx {int ctl_freq; scalar_t__ tuner_type; int norm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_frequency*) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct cx231xx*,int,int,int) ;
 int FUNC_4 (struct cx231xx*) ;
 int FUNC_5 (struct cx231xx*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct cx231xx*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_15, void *VAR_16,
         struct v4l2_frequency *VAR_17)
{
 struct cx231xx_fh *VAR_18 = VAR_16;
 struct cx231xx *VAR_19 = VAR_18->dev;
 int VAR_20;
 u32 VAR_21 = 5400000;

 FUNC_2("Enter vidioc_s_frequency()f->frequency=%d;f->type=%d\n",
   VAR_17->frequency, VAR_17->type);


 VAR_20 = FUNC_1(VAR_19);
 if (VAR_20 < 0)
  return VAR_20;

 if (0 != VAR_17->tuner)
  return -VAR_0;

 if (FUNC_6(0 == VAR_18->radio && VAR_17->type != VAR_11))
  return -VAR_0;
 if (FUNC_6(1 == VAR_18->radio && VAR_17->type != VAR_12))
  return -VAR_0;


 VAR_20 = FUNC_5(VAR_19);

 VAR_19->ctl_freq = VAR_17->frequency;
 FUNC_0(VAR_19, VAR_14, VAR_13, VAR_17);


 VAR_20 = FUNC_4(VAR_19);

 if (VAR_19->tuner_type == VAR_1) {
  if (VAR_19->norm & (VAR_4 | VAR_5))
   VAR_21 = 5400000;
  else if (VAR_19->norm & VAR_2)
   VAR_21 = 6000000;
  else if (VAR_19->norm & (VAR_6 | VAR_8))
   VAR_21 = 6900000;
  else if (VAR_19->norm & VAR_3)
   VAR_21 = 7100000;
  else if (VAR_19->norm & VAR_7)
   VAR_21 = 7250000;
  else if (VAR_19->norm & VAR_9)
   VAR_21 = 6900000;
  else if (VAR_19->norm & VAR_10)
   VAR_21 = 1250000;

  FUNC_2("if_frequency is set to %d\n", VAR_21);
  FUNC_3(VAR_19, VAR_21, 1, 1);

  FUNC_7(VAR_19);
 }

 FUNC_2("Set New FREQUENCY to %d\n", VAR_17->frequency);

 return VAR_20;
}
