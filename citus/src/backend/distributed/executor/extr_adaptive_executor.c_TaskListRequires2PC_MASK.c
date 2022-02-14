
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_2__ {scalar_t__ replicationModel; scalar_t__ anchorShardId; scalar_t__ taskType; } ;
typedef TYPE_1__ Task ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool
FUNC_4(List *VAR_6)
{
 Task *VAR_7 = ((void*)0);
 bool VAR_8 = 0;
 uint64 VAR_9 = VAR_2;

 if (VAR_6 == VAR_4)
 {
  return 0;
 }

 VAR_7 = (Task *) FUNC_2(VAR_6);
 if (VAR_7->replicationModel == VAR_5)
 {
  return 1;
 }
 VAR_9 = VAR_7->anchorShardId;
 if (VAR_9 != VAR_2 && FUNC_1(VAR_9))
 {
  return 1;
 }

 VAR_8 = FUNC_3(VAR_6) > 1;
 if (!FUNC_0(VAR_7->taskType) &&
  VAR_8 && VAR_3 == VAR_0)
 {
  return 1;
 }

 if (VAR_7->taskType == VAR_1)
 {
  if (VAR_3 == VAR_0 ||
   VAR_7->replicationModel == VAR_5)
  {
   return 1;
  }
 }

 return 0;
}
