
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int Var ;
struct TYPE_9__ {int rangeTableId; int relationId; } ;
typedef TYPE_1__ TableEntry ;
struct TYPE_10__ {char partitionMethod; scalar_t__ joinRuleType; TYPE_1__* anchorTable; int * partitionColumn; } ;
typedef int OpExpr ;
typedef int Oid ;
typedef int List ;
typedef int JoinType ;
typedef scalar_t__ JoinRuleType ;
typedef TYPE_2__ JoinOrderNode ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int *,char,TYPE_1__*) ;
 int * FUNC_2 (int ,int ) ;
 char FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static JoinOrderNode *
FUNC_5(JoinOrderNode *VAR_7, TableEntry *VAR_8,
     List *VAR_9, JoinType VAR_10)
{
 Var *VAR_11 = VAR_7->partitionColumn;
 char VAR_12 = VAR_7->partitionMethod;
 TableEntry *VAR_13 = VAR_7->anchorTable;
 JoinRuleType VAR_14 = VAR_7->joinRuleType;

 OpExpr *VAR_15 = ((void*)0);

 Oid VAR_16 = VAR_8->relationId;
 uint32 VAR_17 = VAR_8->rangeTableId;
 Var *VAR_18 = FUNC_2(VAR_16, VAR_17);
 char VAR_19 = FUNC_3(VAR_16);


 if (FUNC_0(VAR_10))
 {
  return ((void*)0);
 }





 if (VAR_14 == VAR_3 ||
  VAR_14 == VAR_0)
 {
  return ((void*)0);
 }

 VAR_15 =
  FUNC_4(VAR_11, VAR_9);
 if (VAR_15 != ((void*)0))
 {
  if (VAR_12 == VAR_1)
  {




   if (!VAR_4)
   {
    return ((void*)0);
   }

   return FUNC_1(VAR_8, VAR_5,
          VAR_11,
          VAR_12,
          VAR_13);
  }
  else
  {
   return FUNC_1(VAR_8, VAR_6,
          VAR_11,
          VAR_12,
          VAR_13);
  }
 }


 if (VAR_19 != VAR_2)
 {
  VAR_15 = FUNC_4(VAR_18,
              VAR_9);
  if (VAR_15 != ((void*)0))
  {
   if (VAR_19 == VAR_1)
   {




    if (!VAR_4)
    {
     return ((void*)0);
    }

    return FUNC_1(VAR_8,
           VAR_5,
           VAR_18,
           VAR_19,
           VAR_8);
   }
   else
   {
    return FUNC_1(VAR_8,
           VAR_6,
           VAR_18,
           VAR_19,
           VAR_8);
   }
  }
 }

 return ((void*)0);
}
