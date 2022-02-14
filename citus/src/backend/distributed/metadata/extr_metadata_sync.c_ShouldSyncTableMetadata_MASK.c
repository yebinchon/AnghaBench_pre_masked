
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ partitionMethod; scalar_t__ replicationModel; } ;
typedef int Oid ;
typedef TYPE_1__ DistTableCacheEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

bool
FUNC_1(Oid VAR_3)
{
 DistTableCacheEntry *VAR_4 = FUNC_0(VAR_3);

 bool VAR_5 = (VAR_4->partitionMethod == VAR_0);
 bool VAR_6 =
  (VAR_4->replicationModel == VAR_2);

 bool VAR_7 = (VAR_6 && VAR_5);
 bool VAR_8 = (VAR_4->partitionMethod == VAR_1);

 if (VAR_7 || VAR_8)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
