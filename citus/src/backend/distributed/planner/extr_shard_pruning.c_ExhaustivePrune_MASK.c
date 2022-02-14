
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shardIntervalArrayLength; int ** sortedShardIntervalArray; } ;
typedef int ShardInterval ;
typedef int PruningInstance ;
typedef int List ;
typedef TYPE_1__ DistTableCacheEntry ;
typedef int ClauseWalkerContext ;


 int FUNC_0 (int *,int *,int *) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;

__attribute__((used)) static List *
FUNC_2(DistTableCacheEntry *VAR_1, ClauseWalkerContext *VAR_2,
    PruningInstance *VAR_3)
{
 List *VAR_4 = VAR_0;
 int VAR_5 = VAR_1->shardIntervalArrayLength;
 ShardInterval **VAR_6 = VAR_1->sortedShardIntervalArray;
 int VAR_7 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
  ShardInterval *VAR_8 = VAR_6[VAR_7];

  if (!FUNC_0(VAR_8, VAR_2, VAR_3))
  {
   VAR_4 = FUNC_1(VAR_4, VAR_8);
  }
 }

 return VAR_4;
}
