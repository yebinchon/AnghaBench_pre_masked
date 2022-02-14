
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_3__ {scalar_t__ promotions; int sched_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(thread_t VAR_1)
{
 if (VAR_1->promotions > 0)
  FUNC_0((VAR_1->sched_flags & VAR_0) == VAR_0);

 if (VAR_1->promotions == 0)
  FUNC_0((VAR_1->sched_flags & VAR_0) != VAR_0);
}
