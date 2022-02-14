
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ groupId; } ;
typedef TYPE_1__ WorkerNode ;
typedef int List ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int * FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static bool
FUNC_5()
{
 List *VAR_2 = FUNC_0(VAR_1);
 WorkerNode *VAR_3 = ((void*)0);

 VAR_2 = FUNC_2(VAR_2, VAR_0);

 if (FUNC_4(VAR_2) == 0)
 {
  return 0;
 }

 VAR_3 = (WorkerNode *) FUNC_3(VAR_2);

 if (VAR_3->groupId == FUNC_1())
 {
  return 1;
 }

 return 0;
}
