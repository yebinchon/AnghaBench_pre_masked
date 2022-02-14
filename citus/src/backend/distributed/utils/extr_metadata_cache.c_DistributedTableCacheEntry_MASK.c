
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ isDistributedTable; } ;
typedef int Oid ;
typedef TYPE_1__ DistTableCacheEntry ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int ) ;

DistTableCacheEntry *
FUNC_4(Oid VAR_1)
{
 DistTableCacheEntry *VAR_2 =
  FUNC_0(VAR_1);

 if (VAR_2 && VAR_2->isDistributedTable)
 {
  return VAR_2;
 }
 else
 {
  char *VAR_3 = FUNC_3(VAR_1);
  FUNC_1(VAR_0, (FUNC_2("relation %s is not distributed", VAR_3)));
 }
}
