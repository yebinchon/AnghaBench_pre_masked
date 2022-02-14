
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_3__ {scalar_t__ shardIntervalArrayLength; scalar_t__ colocationId; scalar_t__ partitionMethod; int * shardIntervalCompareFunction; int ** sortedShardIntervalArray; } ;
typedef int ShardInterval ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef TYPE_1__ DistTableCacheEntry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int *,int *) ;

bool
FUNC_4(Oid VAR_2, Oid VAR_3)
{
 bool VAR_4 = 1;
 uint32 VAR_5 = 0;
 DistTableCacheEntry *VAR_6 = FUNC_2(VAR_2);
 DistTableCacheEntry *VAR_7 = FUNC_2(VAR_3);
 ShardInterval **VAR_8 = VAR_6->sortedShardIntervalArray;
 ShardInterval **VAR_9 =
  VAR_7->sortedShardIntervalArray;
 uint32 VAR_10 = VAR_6->shardIntervalArrayLength;
 uint32 VAR_11 = VAR_7->shardIntervalArrayLength;
 FmgrInfo *VAR_12 = VAR_6->shardIntervalCompareFunction;

 if (VAR_10 != VAR_11)
 {
  return 0;
 }


 if (VAR_10 == 0)
 {
  return 1;
 }

 FUNC_0(VAR_12 != ((void*)0));





 if (VAR_6->colocationId != VAR_1 &&
  VAR_6->colocationId == VAR_7->colocationId)
 {
  return 1;
 }
 if (VAR_6->partitionMethod == VAR_0 ||
  VAR_7->partitionMethod == VAR_0)
 {
  return 0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
 {
  ShardInterval *VAR_13 = VAR_8[VAR_5];
  ShardInterval *VAR_14 = VAR_9[VAR_5];

  bool VAR_15 = FUNC_3(VAR_12,
                VAR_13,
                VAR_14);
  if (!VAR_15 || !FUNC_1(VAR_13,
               VAR_14))
  {
   VAR_4 = 0;
   break;
  }
 }

 return VAR_4;
}
