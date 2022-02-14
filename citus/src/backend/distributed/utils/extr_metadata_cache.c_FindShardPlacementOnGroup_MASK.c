
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ int32 ;
struct TYPE_9__ {int* arrayOfPlacementArrayLengths; TYPE_2__** arrayOfPlacementArrays; } ;
struct TYPE_8__ {scalar_t__ groupId; } ;
struct TYPE_7__ {size_t shardIndex; TYPE_3__* tableEntry; } ;
typedef int ShardPlacement ;
typedef TYPE_1__ ShardCacheEntry ;
typedef TYPE_2__ GroupShardPlacement ;
typedef TYPE_3__ DistTableCacheEntry ;


 TYPE_1__* FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,TYPE_1__*) ;

ShardPlacement *
FUNC_2(int32 VAR_0, uint64 VAR_1)
{
 ShardCacheEntry *VAR_2 = ((void*)0);
 DistTableCacheEntry *VAR_3 = ((void*)0);
 GroupShardPlacement *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 ShardPlacement *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_2->tableEntry;
 VAR_4 = VAR_3->arrayOfPlacementArrays[VAR_2->shardIndex];
 VAR_5 = VAR_3->arrayOfPlacementArrayLengths[VAR_2->shardIndex];

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
  GroupShardPlacement *VAR_8 = &VAR_4[VAR_7];

  if (VAR_8->groupId == VAR_0)
  {
   VAR_6 = FUNC_1(VAR_8, VAR_2);
   break;
  }
 }

 return VAR_6;
}
