
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_6__ {int shardIntervalArrayLength; int* arrayOfPlacementArrayLengths; TYPE_1__** arrayOfPlacementArrays; } ;
struct TYPE_5__ {scalar_t__ groupId; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ GroupShardPlacement ;
typedef TYPE_2__ DistTableCacheEntry ;


 TYPE_2__* FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,TYPE_1__*) ;

List *
FUNC_2(Oid VAR_1, int32 VAR_2)
{
 DistTableCacheEntry *VAR_3 = FUNC_0(VAR_1);
 List *VAR_4 = VAR_0;

 int VAR_5 = 0;
 int VAR_6 = VAR_3->shardIntervalArrayLength;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
 {
  GroupShardPlacement *VAR_7 =
   VAR_3->arrayOfPlacementArrays[VAR_5];
  int VAR_8 =
   VAR_3->arrayOfPlacementArrayLengths[VAR_5];
  int VAR_9 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  {
   GroupShardPlacement *VAR_10 = &VAR_7[VAR_9];

   if (VAR_10->groupId == VAR_2)
   {
    VAR_4 = FUNC_1(VAR_4, VAR_10);
   }
  }
 }

 return VAR_4;
}
