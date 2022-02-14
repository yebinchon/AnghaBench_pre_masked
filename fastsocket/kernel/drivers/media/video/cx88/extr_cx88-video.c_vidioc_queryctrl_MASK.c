
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {scalar_t__ id; } ;
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct cx8800_fh {TYPE_1__* dev; } ;
struct TYPE_2__ {struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx88_core*,struct v4l2_queryctrl*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3 (struct file *VAR_2, void *VAR_3,
    struct v4l2_queryctrl *VAR_4)
{
 struct cx88_core *VAR_5 = ((struct cx8800_fh *)VAR_3)->dev->core;

 VAR_4->id = FUNC_2(VAR_1, VAR_4->id);
 if (FUNC_1(VAR_4->id == 0))
  return -VAR_0;
 return FUNC_0(VAR_5, VAR_4);
}
