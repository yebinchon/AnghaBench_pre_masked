
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {int isDistributedTable; size_t shardIntervalArrayLength; int ** sortedShardIntervalArray; } ;
struct TYPE_4__ {size_t shardIndex; TYPE_2__* tableEntry; } ;
typedef int ShardInterval ;
typedef TYPE_1__ ShardCacheEntry ;
typedef TYPE_2__ DistTableCacheEntry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

ShardInterval *
FUNC_4(uint64 VAR_0)
{
 ShardInterval *VAR_1 = ((void*)0);
 ShardInterval *VAR_2 = ((void*)0);
 ShardCacheEntry *VAR_3 = ((void*)0);
 DistTableCacheEntry *VAR_4 = ((void*)0);

 VAR_3 = FUNC_2(VAR_0);

 VAR_4 = VAR_3->tableEntry;

 FUNC_0(VAR_4->isDistributedTable);


 FUNC_0(VAR_3->shardIndex < VAR_4->shardIntervalArrayLength);

 VAR_2 = VAR_4->sortedShardIntervalArray[VAR_3->shardIndex];


 VAR_1 = (ShardInterval *) FUNC_3(sizeof(ShardInterval));
 FUNC_1(VAR_2, VAR_1);

 return VAR_1;
}
