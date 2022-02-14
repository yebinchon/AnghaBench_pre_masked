
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int relationId; } ;
typedef TYPE_2__ TableEntry ;
struct TYPE_11__ {int anchorTable; int partitionMethod; int partitionColumn; TYPE_1__* tableEntry; } ;
struct TYPE_9__ {int relationId; } ;
typedef int List ;
typedef scalar_t__ JoinType ;
typedef TYPE_3__ JoinOrderNode ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 char FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static JoinOrderNode *
FUNC_3(JoinOrderNode *VAR_7, TableEntry *VAR_8,
     List *VAR_9, JoinType VAR_10)
{
 JoinOrderNode *VAR_11 = ((void*)0);
 int VAR_12 = FUNC_2(VAR_9);
 char VAR_13 = FUNC_1(VAR_8->relationId);
 char VAR_14 = FUNC_1(VAR_7->tableEntry->relationId);
 bool VAR_15 = 0;

 if (VAR_12 <= 0)
 {
  return ((void*)0);
 }
 if ((VAR_10 == VAR_3 || VAR_10 == VAR_4 || VAR_10 == VAR_1) &&
  VAR_13 == VAR_0)
 {
  VAR_15 = 1;
 }
 else if (VAR_10 == VAR_5 && VAR_14 == VAR_0)
 {
  VAR_15 = 1;
 }
 else if (VAR_10 == VAR_2 && VAR_14 == VAR_0 &&
    VAR_13 == VAR_0)
 {
  VAR_15 = 1;
 }

 if (VAR_15)
 {
  VAR_11 = FUNC_0(VAR_8, VAR_6,
           VAR_7->partitionColumn,
           VAR_7->partitionMethod,
           VAR_7->anchorTable);
 }

 return VAR_11;
}
