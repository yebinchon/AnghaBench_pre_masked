
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ partitionMethod; int ** sortedShardIntervalArray; TYPE_1__* partitionColumn; int hashFunction; } ;
struct TYPE_5__ {int varcollid; } ;
typedef int ShardInterval ;
typedef TYPE_2__ DistTableCacheEntry ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;

ShardInterval *
FUNC_2(Datum VAR_2, DistTableCacheEntry *VAR_3)
{
 Datum VAR_4 = VAR_2;
 int VAR_5 = VAR_1;

 if (VAR_3->partitionMethod == VAR_0)
 {
  VAR_4 = FUNC_1(VAR_3->hashFunction,
            VAR_3->partitionColumn->varcollid,
            VAR_2);
 }

 VAR_5 = FUNC_0(VAR_4, VAR_3);

 if (VAR_5 == VAR_1)
 {
  return ((void*)0);
 }

 return VAR_3->sortedShardIntervalArray[VAR_5];
}
