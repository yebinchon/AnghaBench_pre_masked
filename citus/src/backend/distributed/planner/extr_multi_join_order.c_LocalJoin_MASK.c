
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int Var ;
struct TYPE_9__ {int relationId; int rangeTableId; } ;
typedef TYPE_1__ TableEntry ;
struct TYPE_10__ {char partitionMethod; TYPE_1__* anchorTable; int * partitionColumn; } ;
typedef int Oid ;
typedef int List ;
typedef int JoinType ;
typedef TYPE_2__ JoinOrderNode ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ,int *,char,TYPE_1__*) ;
 int * FUNC_3 (int ,int ) ;
 char FUNC_4 (int ) ;

__attribute__((used)) static JoinOrderNode *
FUNC_5(JoinOrderNode *VAR_1, TableEntry *VAR_2,
    List *VAR_3, JoinType VAR_4)
{
 JoinOrderNode *VAR_5 = ((void*)0);
 Oid VAR_6 = VAR_2->relationId;
 uint32 VAR_7 = VAR_2->rangeTableId;
 Var *VAR_8 = FUNC_3(VAR_6, VAR_7);
 Var *VAR_9 = VAR_1->partitionColumn;
 char VAR_10 = FUNC_4(VAR_6);
 char VAR_11 = VAR_1->partitionMethod;
 TableEntry *VAR_12 = VAR_1->anchorTable;
 bool VAR_13 = 0;
 bool VAR_14 = 0;





 if (VAR_12 == ((void*)0))
 {
  return ((void*)0);
 }


 if (VAR_11 != VAR_10)
 {
  return ((void*)0);
 }

 VAR_13 = FUNC_1(VAR_9,
             VAR_8,
             VAR_3);
 if (!VAR_13)
 {
  return ((void*)0);
 }


 VAR_14 = FUNC_0(VAR_12->relationId, VAR_6);

 if (!VAR_14)
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_2(VAR_2, VAR_0,
          VAR_9,
          VAR_11,
          VAR_12);


 return VAR_5;
}
