
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int integer_t ;
struct TYPE_6__ {int vtimers; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(
 task_t VAR_0,
 integer_t VAR_1)
{
 FUNC_0(VAR_0 == FUNC_1());

 FUNC_2(VAR_0);

 VAR_0->vtimers &= ~VAR_1;

 FUNC_3(VAR_0);
}
