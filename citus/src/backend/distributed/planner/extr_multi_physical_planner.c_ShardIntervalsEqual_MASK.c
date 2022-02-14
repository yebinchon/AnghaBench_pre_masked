
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ maxValueExists; scalar_t__ minValueExists; int maxValue; int minValue; } ;
typedef TYPE_1__ ShardInterval ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(FmgrInfo *VAR_0, ShardInterval *VAR_1,
     ShardInterval *VAR_2)
{
 bool VAR_3 = 0;
 Datum VAR_4 = 0;
 Datum VAR_5 = 0;
 Datum VAR_6 = 0;
 Datum VAR_7 = 0;

 VAR_4 = VAR_1->minValue;
 VAR_5 = VAR_1->maxValue;
 VAR_6 = VAR_2->minValue;
 VAR_7 = VAR_2->maxValue;

 if (VAR_1->minValueExists && VAR_1->maxValueExists &&
  VAR_2->minValueExists && VAR_2->maxValueExists)
 {
  Datum VAR_8 = FUNC_0(VAR_0, VAR_4, VAR_6);
  Datum VAR_9 = FUNC_0(VAR_0, VAR_5, VAR_7);
  int VAR_10 = FUNC_1(VAR_8);
  int VAR_11 = FUNC_1(VAR_9);

  if (VAR_10 == 0 && VAR_11 == 0)
  {
   VAR_3 = 1;
  }
 }

 return VAR_3;
}
