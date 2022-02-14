
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct file {int dummy; } ;
struct em28xx_fh {scalar_t__ radio; struct em28xx* dev; } ;
struct em28xx {int ctl_freq; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
    struct v4l2_frequency *VAR_4)
{
 struct em28xx_fh *VAR_5 = VAR_3;
 struct em28xx *VAR_6 = VAR_5->dev;

 VAR_4->type = VAR_5->radio ? VAR_1 : VAR_0;
 VAR_4->frequency = VAR_6->ctl_freq;
 return 0;
}
