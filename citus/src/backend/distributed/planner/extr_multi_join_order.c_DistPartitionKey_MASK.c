
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Var ;
struct TYPE_3__ {scalar_t__ partitionMethod; int partitionColumn; } ;
typedef int Oid ;
typedef TYPE_1__ DistTableCacheEntry ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;

Var *
FUNC_2(Oid VAR_1)
{
 DistTableCacheEntry *VAR_2 = FUNC_0(VAR_1);


 if (VAR_2->partitionMethod == VAR_0)
 {
  return ((void*)0);
 }

 return FUNC_1(VAR_2->partitionColumn);
}
