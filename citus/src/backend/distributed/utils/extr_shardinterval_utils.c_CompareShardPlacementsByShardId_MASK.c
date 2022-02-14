
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_2__ {scalar_t__ shardId; } ;
typedef TYPE_1__ GroupShardPlacement ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 GroupShardPlacement *VAR_2 = *((GroupShardPlacement **) VAR_0);
 GroupShardPlacement *VAR_3 = *((GroupShardPlacement **) VAR_1);
 int64 VAR_4 = VAR_2->shardId;
 int64 VAR_5 = VAR_3->shardId;


 if (VAR_4 > VAR_5)
 {
  return 1;
 }
 else if (VAR_4 < VAR_5)
 {
  return -1;
 }
 else
 {
  return 0;
 }
}
