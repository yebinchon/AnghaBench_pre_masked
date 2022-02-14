
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Var ;
typedef int TableEntry ;
struct TYPE_4__ {char partitionMethod; int * anchorTable; int joinClauseList; int * partitionColumn; int joinType; int joinRuleType; int * tableEntry; } ;
typedef int JoinRuleType ;
typedef TYPE_1__ JoinOrderNode ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

JoinOrderNode *
FUNC_1(TableEntry *VAR_2, JoinRuleType VAR_3,
      Var *VAR_4, char VAR_5, TableEntry *VAR_6)
{
 JoinOrderNode *VAR_7 = FUNC_0(sizeof(JoinOrderNode));
 VAR_7->tableEntry = VAR_2;
 VAR_7->joinRuleType = VAR_3;
 VAR_7->joinType = VAR_0;
 VAR_7->partitionColumn = VAR_4;
 VAR_7->partitionMethod = VAR_5;
 VAR_7->joinClauseList = VAR_1;
 VAR_7->anchorTable = VAR_6;

 return VAR_7;
}
