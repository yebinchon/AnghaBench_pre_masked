
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TableEntry ;
struct TYPE_5__ {int partitionMethod; int partitionColumn; } ;
typedef int List ;
typedef int JoinType ;
typedef TYPE_1__ JoinOrderNode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static JoinOrderNode *
FUNC_2(JoinOrderNode *VAR_1, TableEntry *VAR_2,
     List *VAR_3, JoinType VAR_4)
{
 if (FUNC_1(VAR_3) == 0)
 {

  return FUNC_0(VAR_2, VAR_0,
         VAR_1->partitionColumn,
         VAR_1->partitionMethod,
         ((void*)0));
 }

 return ((void*)0);
}
