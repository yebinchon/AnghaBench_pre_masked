
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * shardIntervalCompareFunction; } ;
struct TYPE_6__ {scalar_t__ maxValueExists; scalar_t__ minValueExists; int maxValue; int minValue; int relationId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int FmgrInfo ;
typedef TYPE_2__ DistTableCacheEntry ;
typedef int Datum ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;

bool
FUNC_3(ShardInterval *VAR_0, ShardInterval *VAR_1)
{
 bool VAR_2 = 0;
 DistTableCacheEntry *VAR_3 =
  FUNC_2(VAR_0->relationId);
 FmgrInfo *VAR_4 = VAR_3->shardIntervalCompareFunction;

 Datum VAR_5 = 0;
 Datum VAR_6 = 0;
 Datum VAR_7 = 0;
 Datum VAR_8 = 0;


 VAR_5 = VAR_0->minValue;
 VAR_6 = VAR_0->maxValue;
 VAR_7 = VAR_1->minValue;
 VAR_8 = VAR_1->maxValue;







 if (VAR_0->minValueExists && VAR_0->maxValueExists &&
  VAR_1->minValueExists && VAR_1->maxValueExists)
 {
  Datum VAR_9 = FUNC_0(VAR_4, VAR_6, VAR_7);
  Datum VAR_10 = FUNC_0(VAR_4, VAR_8, VAR_5);
  int VAR_11 = FUNC_1(VAR_9);
  int VAR_12 = FUNC_1(VAR_10);

  if (VAR_11 < 0 || VAR_12 < 0)
  {
   VAR_2 = 1;
  }
 }

 return (!VAR_2);
}
