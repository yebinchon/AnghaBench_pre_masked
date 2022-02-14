
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int boolean_t ;
struct TYPE_3__ {int state; scalar_t__ runq; int kernel_stack; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline boolean_t
FUNC_0(thread_t VAR_4)
{

 if (!(VAR_4->state & VAR_2))
  return (VAR_0);



 if (VAR_4->runq != VAR_1)
  return (VAR_0);





 if (!VAR_4->kernel_stack)
  return (VAR_0);
 return (VAR_3);
}
