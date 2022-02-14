
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ TaskType ;
struct TYPE_4__ {scalar_t__ taskType; int * dependedTaskList; } ;
typedef TYPE_1__ Task ;
typedef int List ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static List *
FUNC_3(List *VAR_3, Task *VAR_4)
{
 List *VAR_5 = VAR_1;
 Task *VAR_6 = ((void*)0);
 List *VAR_7 = VAR_1;

 TaskType VAR_8 = VAR_4->taskType;
 if (VAR_8 == VAR_2 || VAR_8 == VAR_0)
 {
  VAR_6 = VAR_4;
  VAR_7 = VAR_6->dependedTaskList;
 }
 FUNC_0(VAR_6 != ((void*)0));

 VAR_5 = FUNC_2(VAR_6);
 VAR_5 = FUNC_1(VAR_5, VAR_7);

 return VAR_5;
}
