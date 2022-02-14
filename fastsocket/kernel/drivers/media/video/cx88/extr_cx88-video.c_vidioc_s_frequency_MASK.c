
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ type; } ;
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct cx8800_fh {int radio; TYPE_1__* dev; } ;
struct TYPE_2__ {struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cx88_core*,struct v4l2_frequency*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (struct file *VAR_3, void *VAR_4,
    struct v4l2_frequency *VAR_5)
{
 struct cx8800_fh *VAR_6 = VAR_4;
 struct cx88_core *VAR_7 = VAR_6->dev->core;

 if (FUNC_1(0 == VAR_6->radio && VAR_5->type != VAR_1))
  return -VAR_0;
 if (FUNC_1(1 == VAR_6->radio && VAR_5->type != VAR_2))
  return -VAR_0;

 return
  FUNC_0 (VAR_7,VAR_5);
}
