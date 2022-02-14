
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct file {int dummy; } ;
struct cx231xx_fh {scalar_t__ radio; struct cx231xx* dev; } ;
struct cx231xx {int ctl_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_frequency*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
         struct v4l2_frequency *VAR_6)
{
 struct cx231xx_fh *VAR_7 = VAR_5;
 struct cx231xx *VAR_8 = VAR_7->dev;

 VAR_6->type = VAR_7->radio ? VAR_1 : VAR_0;
 VAR_6->frequency = VAR_8->ctl_freq;

 FUNC_0(VAR_8, VAR_3, VAR_2, VAR_6);

 return 0;
}
