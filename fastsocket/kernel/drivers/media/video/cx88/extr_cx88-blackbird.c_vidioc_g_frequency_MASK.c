
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
struct cx8802_fh {TYPE_1__* dev; } ;
struct TYPE_3__ {struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx88_core*,int ,int ,struct v4l2_frequency*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (struct file *VAR_5, void *VAR_6,
    struct v4l2_frequency *VAR_7)
{
 struct cx8802_fh *VAR_8 = VAR_6;
 struct cx88_core *VAR_9 = VAR_8->dev->core;

 if (FUNC_1(VAR_1 == VAR_9->board.tuner_type))
  return -VAR_0;

 VAR_7->type = VAR_2;
 VAR_7->frequency = VAR_9->freq;
 FUNC_0(VAR_9, VAR_4, VAR_3, VAR_7);

 return 0;
}
