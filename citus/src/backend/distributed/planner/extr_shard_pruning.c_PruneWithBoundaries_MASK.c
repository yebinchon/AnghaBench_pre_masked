
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int compareIntervalFunctionCall; } ;
struct TYPE_16__ {int shardIntervalArrayLength; int ** sortedShardIntervalArray; } ;
struct TYPE_15__ {TYPE_4__* lessConsts; TYPE_3__* lessEqualConsts; TYPE_2__* greaterConsts; TYPE_1__* greaterEqualConsts; } ;
struct TYPE_14__ {int constvalue; } ;
struct TYPE_13__ {int constvalue; } ;
struct TYPE_12__ {int constvalue; } ;
struct TYPE_11__ {int constvalue; } ;
typedef int ShardInterval ;
typedef TYPE_5__ PruningInstance ;
typedef int List ;
typedef int FunctionCallInfo ;
typedef TYPE_6__ DistTableCacheEntry ;
typedef int Datum ;
typedef TYPE_7__ ClauseWalkerContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int **,int,int ,int) ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int **,int,int ,int) ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static List *
FUNC_5(DistTableCacheEntry *VAR_2, ClauseWalkerContext *VAR_3,
     PruningInstance *VAR_4)
{
 List *VAR_5 = VAR_1;
 int VAR_6 = VAR_2->shardIntervalArrayLength;
 ShardInterval **VAR_7 = VAR_2->sortedShardIntervalArray;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 Datum VAR_10 = 0;
 Datum VAR_11 = 0;
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 int VAR_14 = -1;
 int VAR_15 = -1;
 int VAR_16 = 0;
 FunctionCallInfo VAR_17 = (FunctionCallInfo) &
             VAR_3->compareIntervalFunctionCall;

 if (VAR_4->greaterEqualConsts)
 {
  VAR_10 = VAR_4->greaterEqualConsts->constvalue;
  VAR_12 = 1;
  VAR_8 = 1;
 }
 if (VAR_4->greaterConsts)
 {




  if (!VAR_8 ||
   FUNC_2(VAR_17,
        VAR_4->greaterConsts->constvalue,
        VAR_10) >= 0)
  {
   VAR_10 = VAR_4->greaterConsts->constvalue;
   VAR_12 = 0;
   VAR_8 = 1;
  }
 }
 if (VAR_4->lessEqualConsts)
 {
  VAR_11 = VAR_4->lessEqualConsts->constvalue;
  VAR_13 = 1;
  VAR_9 = 1;
 }
 if (VAR_4->lessConsts)
 {




  if (!VAR_9 ||
   FUNC_2(VAR_17,
        VAR_4->lessConsts->constvalue,
        VAR_11) <= 0)
  {
   VAR_11 = VAR_4->lessConsts->constvalue;
   VAR_13 = 0;
   VAR_9 = 1;
  }
 }

 FUNC_0(VAR_8 || VAR_9);


 if (VAR_8)
 {
  VAR_14 = FUNC_1(VAR_10, VAR_7,
             VAR_6, VAR_17,
             VAR_12);
 }
 else
 {
  VAR_14 = 0;
 }


 if (VAR_9)
 {
  VAR_15 = FUNC_3(VAR_11, VAR_7,
             VAR_6, VAR_17,
             VAR_13);
 }
 else
 {
  VAR_15 = VAR_6 - 1;
 }

 if (VAR_14 == VAR_0)
 {
  return VAR_1;
 }
 else if (VAR_15 == VAR_0)
 {
  return VAR_1;
 }




 for (VAR_16 = VAR_14; VAR_16 <= VAR_15; VAR_16++)
 {
  VAR_5 = FUNC_4(VAR_5,
          VAR_7[VAR_16]);
 }

 return VAR_5;
}
