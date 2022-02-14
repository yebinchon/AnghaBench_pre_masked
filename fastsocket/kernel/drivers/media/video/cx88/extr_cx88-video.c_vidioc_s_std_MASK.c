
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct cx88_core {int lock; } ;
struct cx8800_fh {TYPE_1__* dev; } ;
struct TYPE_2__ {struct cx88_core* core; } ;


 int FUNC_0 (struct cx88_core*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct cx88_core *VAR_3 = ((struct cx8800_fh *)VAR_1)->dev->core;

 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_3,*VAR_2);
 FUNC_2(&VAR_3->lock);

 return 0;
}
