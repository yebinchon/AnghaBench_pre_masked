
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_19__ {int compareIntervalFunctionCall; } ;
struct TYPE_18__ {TYPE_5__* lessConsts; TYPE_4__* lessEqualConsts; TYPE_3__* greaterConsts; TYPE_2__* greaterEqualConsts; TYPE_1__* equalConsts; } ;
struct TYPE_17__ {int minValue; int maxValue; int maxValueExists; int minValueExists; } ;
struct TYPE_16__ {int constvalue; } ;
struct TYPE_15__ {int constvalue; } ;
struct TYPE_14__ {int constvalue; } ;
struct TYPE_13__ {int constvalue; } ;
struct TYPE_12__ {int constvalue; } ;
typedef TYPE_6__ ShardInterval ;
typedef TYPE_7__ PruningInstance ;
typedef int FunctionCallInfo ;
typedef int Datum ;
typedef TYPE_8__ ClauseWalkerContext ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(ShardInterval *VAR_0,
       ClauseWalkerContext *VAR_1,
       PruningInstance *VAR_2)
{
 FunctionCallInfo VAR_3 = (FunctionCallInfo) &
             VAR_1->compareIntervalFunctionCall;
 Datum VAR_4 = 0;


 if (!VAR_0->minValueExists || !VAR_0->maxValueExists)
 {
  return 0;
 }

 if (VAR_2->equalConsts)
 {
  VAR_4 = VAR_2->equalConsts->constvalue;

  if (FUNC_0(VAR_3,
        VAR_4,
        VAR_0->minValue) < 0)
  {
   return 1;
  }

  if (FUNC_0(VAR_3,
        VAR_4,
        VAR_0->maxValue) > 0)
  {
   return 1;
  }
 }
 if (VAR_2->greaterEqualConsts)
 {
  VAR_4 = VAR_2->greaterEqualConsts->constvalue;

  if (FUNC_0(VAR_3,
        VAR_0->maxValue,
        VAR_4) < 0)
  {
   return 1;
  }
 }
 if (VAR_2->greaterConsts)
 {
  VAR_4 = VAR_2->greaterConsts->constvalue;

  if (FUNC_0(VAR_3,
        VAR_0->maxValue,
        VAR_4) <= 0)
  {
   return 1;
  }
 }
 if (VAR_2->lessEqualConsts)
 {
  VAR_4 = VAR_2->lessEqualConsts->constvalue;

  if (FUNC_0(VAR_3,
        VAR_0->minValue,
        VAR_4) > 0)
  {
   return 1;
  }
 }
 if (VAR_2->lessConsts)
 {
  VAR_4 = VAR_2->lessConsts->constvalue;

  if (FUNC_0(VAR_3,
        VAR_0->minValue,
        VAR_4) >= 0)
  {
   return 1;
  }
 }

 return 0;
}
