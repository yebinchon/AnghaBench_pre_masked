
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_3__ {scalar_t__ anchorShardId; scalar_t__ replicationModel; int taskPlacementList; } ;
typedef TYPE_1__ Task ;
typedef int ShardInterval ;
typedef scalar_t__ RowModifyLevel ;
typedef scalar_t__ LOCKMODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(Task *VAR_8, RowModifyLevel VAR_9)
{
 LOCKMODE VAR_10 = VAR_3;
 int64 VAR_11 = VAR_8->anchorShardId;

 if (VAR_11 == VAR_2)
 {
  return;
 }

 if (VAR_9 <= VAR_6)
 {






  VAR_10 = VAR_3;
 }
 else if (FUNC_2(VAR_8->taskPlacementList) == 1)
 {
  if (VAR_8->replicationModel == VAR_4)
  {







   VAR_10 = VAR_7;
  }
  else
  {




   VAR_10 = VAR_3;
  }
 }
 else if (VAR_0)
 {
  VAR_10 = VAR_7;
 }
 else if (VAR_9 < VAR_5)
 {
  VAR_10 = VAR_7;
 }
 else
 {
  VAR_10 = VAR_1;
 }

 if (VAR_10 != VAR_3)
 {
  ShardInterval *VAR_12 = FUNC_0(VAR_11);

  FUNC_1(FUNC_3(VAR_12), VAR_10);
 }
}
