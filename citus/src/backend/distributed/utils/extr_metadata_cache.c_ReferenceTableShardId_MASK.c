
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {scalar_t__ partitionMethod; } ;
struct TYPE_4__ {TYPE_2__* tableEntry; } ;
typedef TYPE_1__ ShardCacheEntry ;
typedef TYPE_2__ DistTableCacheEntry ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

bool
FUNC_1(uint64 VAR_1)
{
 ShardCacheEntry *VAR_2 = FUNC_0(VAR_1);
 DistTableCacheEntry *VAR_3 = VAR_2->tableEntry;

 return (VAR_3->partitionMethod == VAR_0);
}
