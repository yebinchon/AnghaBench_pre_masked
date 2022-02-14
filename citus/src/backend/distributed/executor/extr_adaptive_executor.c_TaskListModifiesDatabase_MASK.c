
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int taskType; } ;
typedef TYPE_1__ Task ;
typedef scalar_t__ RowModifyLevel ;
typedef int List ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(RowModifyLevel VAR_1, List *VAR_2)
{
 Task *VAR_3 = ((void*)0);

 if (VAR_1 > VAR_0)
 {
  return 1;
 }





 if (FUNC_2(VAR_2) < 1)
 {

  return 0;
 }

 VAR_3 = (Task *) FUNC_1(VAR_2);

 return !FUNC_0(VAR_3->taskType);
}
