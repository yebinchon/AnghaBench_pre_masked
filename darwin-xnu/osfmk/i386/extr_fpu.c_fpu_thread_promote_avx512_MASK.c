
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef TYPE_1__* task_t ;
typedef int boolean_t ;
struct TYPE_3__ {int xstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;

boolean_t
FUNC_4(thread_t VAR_3)
{
 task_t VAR_4 = FUNC_0();

 if (VAR_3 != FUNC_1())
  return VAR_1;
 if (!FUNC_3())
  return VAR_1;

 FUNC_2(VAR_3);


 VAR_4->xstate = VAR_0;

 return VAR_2;
}
