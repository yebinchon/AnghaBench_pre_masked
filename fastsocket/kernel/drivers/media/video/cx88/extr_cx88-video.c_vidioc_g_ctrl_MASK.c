
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int dummy; } ;
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct cx8800_fh {TYPE_1__* dev; } ;
struct TYPE_2__ {struct cx88_core* core; } ;


 int FUNC_0 (struct cx88_core*,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_1 (struct file *VAR_0, void *VAR_1,
    struct v4l2_control *VAR_2)
{
 struct cx88_core *VAR_3 = ((struct cx8800_fh *)VAR_1)->dev->core;
 return
  FUNC_0(VAR_3,VAR_2);
}
