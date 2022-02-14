
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_4__ {scalar_t__* coalition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,TYPE_1__*) ;

void
FUNC_2(task_t VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->coalition[VAR_3]) {
   FUNC_0(VAR_2->coalition[VAR_3]);
  } else if (VAR_3 == VAR_1) {
   FUNC_1("deallocating task %p was not a member of a resource coalition", VAR_2);
  }
 }
}
