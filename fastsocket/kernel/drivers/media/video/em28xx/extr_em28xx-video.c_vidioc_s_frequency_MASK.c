
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct file {int dummy; } ;
struct em28xx_fh {int radio; struct em28xx* dev; } ;
struct em28xx {int v4l2_dev; int ctl_freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct em28xx*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ,struct v4l2_frequency*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
    struct v4l2_frequency *VAR_7)
{
 struct em28xx_fh *VAR_8 = VAR_6;
 struct em28xx *VAR_9 = VAR_8->dev;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (0 != VAR_7->tuner)
  return -VAR_0;

 if (FUNC_1(0 == VAR_8->radio && VAR_7->type != VAR_1))
  return -VAR_0;
 if (FUNC_1(1 == VAR_8->radio && VAR_7->type != VAR_2))
  return -VAR_0;

 VAR_9->ctl_freq = VAR_7->frequency;
 FUNC_2(&VAR_9->v4l2_dev, 0, VAR_4, VAR_3, VAR_7);

 return 0;
}
