
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct cx8800_fh {TYPE_1__* dev; } ;
struct TYPE_2__ {struct cx88_core* core; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx88_core*,int ,int ,struct v4l2_tuner*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1 (struct file *VAR_3, void *VAR_4,
    struct v4l2_tuner *VAR_5)
{
 struct cx88_core *VAR_6 = ((struct cx8800_fh *)VAR_4)->dev->core;

 if (0 != VAR_5->index)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_2, VAR_1, VAR_5);

 return 0;
}
