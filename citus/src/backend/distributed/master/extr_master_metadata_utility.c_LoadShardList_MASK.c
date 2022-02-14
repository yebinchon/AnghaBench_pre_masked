
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {int shardIntervalArrayLength; TYPE_1__** sortedShardIntervalArray; } ;
struct TYPE_4__ {int shardId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef int List ;
typedef TYPE_2__ DistTableCacheEntry ;


 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *,int *) ;

List *
FUNC_3(Oid VAR_1)
{
 DistTableCacheEntry *VAR_2 = FUNC_1(VAR_1);
 List *VAR_3 = VAR_0;
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->shardIntervalArrayLength; VAR_4++)
 {
  ShardInterval *VAR_5 = VAR_2->sortedShardIntervalArray[VAR_4];
  uint64 *VAR_6 = FUNC_0(VAR_5->shardId);

  VAR_3 = FUNC_2(VAR_3, VAR_6);
 }

 return VAR_3;
}
