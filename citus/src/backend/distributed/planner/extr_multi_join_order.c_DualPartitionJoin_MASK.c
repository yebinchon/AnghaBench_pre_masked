
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TableEntry ;
typedef int OpExpr ;
typedef int List ;
typedef int JoinType ;
typedef int JoinOrderNode ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static JoinOrderNode *
FUNC_2(JoinOrderNode *VAR_2, TableEntry *VAR_3,
      List *VAR_4, JoinType VAR_5)
{
 OpExpr *VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
 {

  return FUNC_1(VAR_3,
         VAR_0,
         ((void*)0),
         VAR_1,
         ((void*)0));
 }

 return ((void*)0);
}
