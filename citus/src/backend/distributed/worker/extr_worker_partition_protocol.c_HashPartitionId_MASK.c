
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef scalar_t__ int32 ;
struct TYPE_2__ {int partitionCount; scalar_t__ hasUniformHashDistribution; int collation; int * comparisonFunction; int ** syntheticShardIntervalArray; int * hashFunction; } ;
typedef int ShardInterval ;
typedef TYPE_1__ HashPartitionContext ;
typedef int FmgrInfo ;
typedef scalar_t__ Datum ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,int **,int,int *) ;

__attribute__((used)) static uint32
FUNC_3(Datum VAR_2, const void *VAR_3)
{
 HashPartitionContext *VAR_4 = (HashPartitionContext *) VAR_3;
 FmgrInfo *VAR_5 = VAR_4->hashFunction;
 uint32 VAR_6 = VAR_4->partitionCount;
 ShardInterval **VAR_7 =
  VAR_4->syntheticShardIntervalArray;
 FmgrInfo *VAR_8 = VAR_4->comparisonFunction;
 Datum VAR_9 = FUNC_1(VAR_5, VAR_4->collation,
          VAR_2);
 int32 VAR_10 = 0;
 uint32 VAR_11 = 0;

 if (VAR_9 == 0)
 {
  return VAR_11;
 }

 if (VAR_4->hasUniformHashDistribution)
 {
  uint64 VAR_12 = VAR_0 / VAR_6;

  VAR_10 = FUNC_0(VAR_9);
  VAR_11 = (uint32) (VAR_10 - VAR_1) / VAR_12;
 }
 else
 {
  VAR_11 =
   FUNC_2(VAR_9, VAR_7,
           VAR_6, VAR_8);
 }


 return VAR_11;
}
