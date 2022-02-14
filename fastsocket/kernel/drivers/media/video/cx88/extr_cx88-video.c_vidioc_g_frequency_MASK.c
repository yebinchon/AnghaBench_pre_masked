
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_frequency {int frequency; int type; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ tuner_type; } ;
struct cx88_core {int freq; TYPE_2__ board; } ;
struct cx8800_fh {scalar_t__ radio; TYPE_1__* dev; } ;
struct TYPE_3__ {struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx88_core*,int ,int ,struct v4l2_frequency*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (struct file *VAR_6, void *VAR_7,
    struct v4l2_frequency *VAR_8)
{
 struct cx8800_fh *VAR_9 = VAR_7;
 struct cx88_core *VAR_10 = VAR_9->dev->core;

 if (FUNC_1(VAR_1 == VAR_10->board.tuner_type))
  return -VAR_0;


 VAR_8->type = VAR_9->radio ? VAR_3 : VAR_2;
 VAR_8->frequency = VAR_10->freq;

 FUNC_0(VAR_10, VAR_5, VAR_4, VAR_8);

 return 0;
}
