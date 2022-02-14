
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_3__ {int shardIntervalArrayLength; char partitionMethod; int hasUniformHashDistribution; int * shardIntervalCompareFunction; int ** sortedShardIntervalArray; } ;
typedef int ShardInterval ;
typedef int FmgrInfo ;
typedef TYPE_1__ DistTableCacheEntry ;
typedef int Datum ;


 int FUNC_0 (int) ;
 char VAR_0 ;
 char VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int **,int,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

int
FUNC_7(Datum VAR_7, DistTableCacheEntry *VAR_8)
{
 ShardInterval **VAR_9 = VAR_8->sortedShardIntervalArray;
 int VAR_10 = VAR_8->shardIntervalArrayLength;
 char VAR_11 = VAR_8->partitionMethod;
 FmgrInfo *VAR_12 = VAR_8->shardIntervalCompareFunction;
 bool VAR_13 = (VAR_11 != VAR_0 ||
       !VAR_8->hasUniformHashDistribution);
 int VAR_14 = VAR_6;

 if (VAR_10 == 0)
 {
  return VAR_6;
 }

 if (VAR_11 == VAR_0)
 {
  if (VAR_13)
  {
   FUNC_0(VAR_12 != ((void*)0));

   VAR_14 = FUNC_2(VAR_7, VAR_9,
               VAR_10, VAR_12);


   if (VAR_14 == VAR_6)
   {
    FUNC_3(VAR_3, (FUNC_4(VAR_2),
        FUNC_6("cannot find shard interval"),
        FUNC_5("Hash of the partition column value "
            "does not fall into any shards.")));
   }
  }
  else
  {
   int VAR_15 = FUNC_1(VAR_7);
   uint64 VAR_16 = VAR_4 / VAR_10;

   VAR_14 = (uint32) (VAR_15 - VAR_5) / VAR_16;
   FUNC_0(VAR_14 <= VAR_10);






   if (VAR_14 == VAR_10)
   {
    VAR_14 = VAR_10 - 1;
   }
  }
 }
 else if (VAR_11 == VAR_1)
 {

  FUNC_0(VAR_10 == 1);

  VAR_14 = 0;
 }
 else
 {
  FUNC_0(VAR_12 != ((void*)0));

  VAR_14 = FUNC_2(VAR_7, VAR_9,
              VAR_10, VAR_12);
 }

 return VAR_14;
}
