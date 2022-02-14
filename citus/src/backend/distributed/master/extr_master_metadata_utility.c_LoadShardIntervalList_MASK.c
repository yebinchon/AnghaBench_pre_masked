
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shardIntervalArrayLength; int * sortedShardIntervalArray; } ;
typedef int ShardInterval ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ DistTableCacheEntry ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int) ;

List *
FUNC_4(Oid VAR_1)
{
 DistTableCacheEntry *VAR_2 = FUNC_1(VAR_1);
 List *VAR_3 = VAR_0;
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->shardIntervalArrayLength; VAR_4++)
 {
  ShardInterval *VAR_5 = ((void*)0);
  VAR_5 = (ShardInterval *) FUNC_3(sizeof(ShardInterval));

  FUNC_0(VAR_2->sortedShardIntervalArray[VAR_4], VAR_5);

  VAR_3 = FUNC_2(VAR_3, VAR_5);
 }

 return VAR_3;
}
