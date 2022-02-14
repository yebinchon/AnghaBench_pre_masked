
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int audmode; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ tuner_type; } ;
struct cx88_core {TYPE_2__ board; } ;
struct cx8802_fh {TYPE_1__* dev; } ;
struct TYPE_3__ {struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx88_core*,int ,int) ;

__attribute__((used)) static int FUNC_1 (struct file *VAR_2, void *VAR_3,
    struct v4l2_tuner *VAR_4)
{
 struct cx88_core *VAR_5 = ((struct cx8802_fh *)VAR_3)->dev->core;

 if (VAR_1 == VAR_5->board.tuner_type)
  return -VAR_0;
 if (0 != VAR_4->index)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_4->audmode, 1);
 return 0;
}
