
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_28__ {scalar_t__ partitionMethod; } ;
struct TYPE_27__ {int hasOverlappingShardInterval; TYPE_3__** sortedShardIntervalArray; } ;
struct TYPE_26__ {scalar_t__ lessEqualConsts; scalar_t__ lessConsts; scalar_t__ greaterEqualConsts; scalar_t__ greaterConsts; TYPE_2__* hashedEqualConsts; TYPE_1__* equalConsts; scalar_t__ evaluatesToFalse; } ;
struct TYPE_25__ {scalar_t__ shardId; } ;
struct TYPE_24__ {int constvalue; } ;
struct TYPE_23__ {int constvalue; } ;
typedef TYPE_3__ ShardInterval ;
typedef TYPE_4__ PruningInstance ;
typedef int List ;
typedef TYPE_5__ DistTableCacheEntry ;
typedef TYPE_6__ ClauseWalkerContext ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (TYPE_5__*,TYPE_6__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_6__*,TYPE_4__*) ;
 TYPE_3__* FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_5 (TYPE_5__*,TYPE_6__*,TYPE_4__*) ;
 int * FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static List *
FUNC_7(DistTableCacheEntry *VAR_3, ClauseWalkerContext *VAR_4,
   PruningInstance *VAR_5)
{
 ShardInterval *VAR_6 = ((void*)0);


 if (VAR_5->evaluatesToFalse)
 {
  return VAR_2;
 }







 if (VAR_5->equalConsts &&
  !VAR_3->hasOverlappingShardInterval)
 {
  VAR_6 = FUNC_3(VAR_5->equalConsts->constvalue, VAR_3);





  if (!VAR_6)
  {
   return VAR_2;
  }
 }






 if (VAR_5->hashedEqualConsts)
 {
  int VAR_7 = VAR_1;
  ShardInterval **VAR_8 = VAR_3->sortedShardIntervalArray;

  FUNC_0(VAR_4->partitionMethod == VAR_0);

  VAR_7 = FUNC_4(VAR_5->hashedEqualConsts->constvalue,
           VAR_3);

  if (VAR_7 == VAR_1)
  {
   return VAR_2;
  }
  else if (VAR_6 &&
     VAR_8[VAR_7]->shardId != VAR_6->shardId)
  {






   return VAR_2;
  }
  else
  {
   return FUNC_6(VAR_8[VAR_7]);
  }
 }
 if (VAR_6)
 {
  if (VAR_4->partitionMethod != VAR_0 &&
   FUNC_2(VAR_6, VAR_4, VAR_5))
  {
   return VAR_2;
  }
  else
  {

   return FUNC_6(VAR_6);
  }
 }





 FUNC_0(VAR_4->partitionMethod != VAR_0);
 if (!VAR_3->hasOverlappingShardInterval && (
   VAR_5->greaterConsts || VAR_5->greaterEqualConsts ||
   VAR_5->lessConsts || VAR_5->lessEqualConsts))
 {
  return FUNC_5(VAR_3, VAR_4, VAR_5);
 }




 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
