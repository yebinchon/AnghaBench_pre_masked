
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ taskType; int * relationShardList; } ;
typedef TYPE_1__ Task ;
struct TYPE_7__ {int groupId; } ;
typedef scalar_t__ ShardPlacementAccessType ;
typedef int ShardPlacementAccess ;
typedef TYPE_2__ ShardPlacement ;
typedef int List ;


 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *) ;

List *
FUNC_5(Task *VAR_7, ShardPlacement *VAR_8)
{
 List *VAR_9 = VAR_2;
 List *VAR_10 = VAR_7->relationShardList;
 bool VAR_11 = 0;
 ShardPlacementAccessType VAR_12 = VAR_5;

 if (VAR_7->taskType == VAR_1)
 {

  VAR_11 = 1;
  VAR_12 = VAR_4;
 }
 else if (VAR_7->taskType == VAR_0 || VAR_7->taskType == VAR_6)
 {

  VAR_11 = 1;
  VAR_12 = VAR_3;
 }
 else if (VAR_10 == VAR_2)
 {

  VAR_11 = 1;
  VAR_12 = VAR_5;
 }

 if (VAR_11)
 {
  ShardPlacementAccess *VAR_13 =
   FUNC_2(VAR_8, VAR_12);

  VAR_9 = FUNC_3(VAR_9, VAR_13);
 }





 if (VAR_12 == VAR_3)
 {




  List *VAR_14 =
   FUNC_0(VAR_8->groupId, VAR_10);

  VAR_9 = FUNC_4(VAR_9, VAR_14);
 }
 else
 {
  List *VAR_15 =
   FUNC_1(VAR_8->groupId, VAR_10);

  VAR_9 = FUNC_4(VAR_9, VAR_15);
 }

 return VAR_9;
}
