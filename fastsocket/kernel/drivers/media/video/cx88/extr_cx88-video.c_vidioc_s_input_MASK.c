
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cx88_core {int lock; } ;
struct cx8800_fh {TYPE_1__* dev; } ;
struct TYPE_2__ {struct cx88_core* core; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx88_core*) ;
 int FUNC_1 (struct cx88_core*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (struct file *VAR_1, void *VAR_2, unsigned int VAR_3)
{
 struct cx88_core *VAR_4 = ((struct cx8800_fh *)VAR_2)->dev->core;

 if (VAR_3 >= 4)
  return -VAR_0;

 FUNC_2(&VAR_4->lock);
 FUNC_0(VAR_4);
 FUNC_1(VAR_4,VAR_3);
 FUNC_3(&VAR_4->lock);
 return 0;
}
