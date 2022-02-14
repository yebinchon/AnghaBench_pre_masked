
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shardIntervalArrayLength; scalar_t__ isDistributedTable; } ;
typedef int Oid ;
typedef TYPE_1__ DistTableCacheEntry ;


 TYPE_1__* FUNC_0 (int ) ;

int
FUNC_1(Oid VAR_0)
{
 DistTableCacheEntry *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 if (VAR_1->isDistributedTable)
 {
  VAR_2 = VAR_1->shardIntervalArrayLength;
 }

 return VAR_2;
}
