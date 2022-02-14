
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int t_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(task_t VAR_1, boolean_t VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_1(VAR_1);

 if (VAR_2) {
  VAR_1->t_flags |= VAR_0;
 } else {
  VAR_1->t_flags &= ~(VAR_0);
 }

 FUNC_2(VAR_1);
}
