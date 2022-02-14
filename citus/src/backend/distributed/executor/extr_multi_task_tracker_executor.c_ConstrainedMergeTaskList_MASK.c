
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ TaskType ;
struct TYPE_4__ {scalar_t__ taskType; int dependedTaskList; } ;
typedef TYPE_1__ Task ;
typedef int List ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int ) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static List *
FUNC_4(List *VAR_5, Task *VAR_6)
{
 List *VAR_7 = VAR_3;
 TaskType VAR_8 = VAR_6->taskType;






 if (VAR_8 == VAR_4 || VAR_8 == VAR_1)
 {
  VAR_7 = FUNC_1(VAR_6->dependedTaskList);
 }
 else if (VAR_8 == VAR_0)
 {
  List *VAR_9 = FUNC_2(VAR_5, VAR_6);
  Task *VAR_10 = (Task *) FUNC_3(VAR_9);





  List *VAR_11 = FUNC_2(VAR_5, VAR_10);
  Task *VAR_12 = (Task *) FUNC_3(VAR_11);

  VAR_7 = FUNC_1(VAR_12->dependedTaskList);
 }
 else if (VAR_8 == VAR_2)
 {
  Task *VAR_13 = ((void*)0);
  List *VAR_14 = FUNC_2(VAR_5, VAR_6);






  FUNC_0(VAR_14 != VAR_3);
  VAR_13 = (Task *) FUNC_3(VAR_14);

  VAR_7 = FUNC_1(VAR_13->dependedTaskList);
 }

 return VAR_7;
}
