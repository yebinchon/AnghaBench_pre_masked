
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ taskType; scalar_t__ rowValuesLists; } ;
typedef TYPE_1__ Task ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(List *VAR_5)
{
 Task *VAR_6 = ((void*)0);

 if (VAR_1 == VAR_3)
 {

  return;
 }

 if (FUNC_4(VAR_5) < 2)
 {

  return;
 }





 VAR_6 = FUNC_3(VAR_5);

 if (VAR_6->taskType == VAR_4)
 {
  FUNC_2(VAR_6);
 }
 else if (VAR_6->taskType == VAR_0)
 {
  if (VAR_6->rowValuesLists != VAR_2)
  {





  }
  else
  {




   FUNC_1(VAR_6);
   FUNC_2(VAR_6);
  }
 }
 else
 {
  FUNC_0(VAR_6);
 }
}
