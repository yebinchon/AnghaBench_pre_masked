
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {int relationId; int isDistributedTable; } ;
struct TYPE_4__ {TYPE_2__* tableEntry; } ;
typedef TYPE_1__ ShardCacheEntry ;
typedef int Oid ;
typedef TYPE_2__ DistTableCacheEntry ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

Oid
FUNC_2(uint64 VAR_0)
{
 ShardCacheEntry *VAR_1 = ((void*)0);
 DistTableCacheEntry *VAR_2 = ((void*)0);

 VAR_1 = FUNC_1(VAR_0);

 VAR_2 = VAR_1->tableEntry;

 FUNC_0(VAR_2->isDistributedTable);

 return VAR_2->relationId;
}
