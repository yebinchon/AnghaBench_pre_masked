
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minValue; int maxValue; scalar_t__ maxValueExists; scalar_t__ minValueExists; } ;
typedef TYPE_1__ ShardInterval ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(ShardInterval **VAR_0,
       int VAR_1,
       FmgrInfo *VAR_2)
{
 int VAR_3 = 0;
 ShardInterval *VAR_4 = ((void*)0);
 Datum VAR_5 = 0;
 int VAR_6 = 0;


 if (VAR_1 < 2)
 {
  return 0;
 }

 VAR_4 = VAR_0[0];
 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++)
 {
  ShardInterval *VAR_7 = VAR_0[VAR_3];


  FUNC_0(VAR_4->minValueExists && VAR_4->maxValueExists);
  FUNC_0(VAR_7->minValueExists && VAR_7->maxValueExists);

  VAR_5 = FUNC_1(VAR_2,
            VAR_4->maxValue,
            VAR_7->minValue);
  VAR_6 = FUNC_2(VAR_5);

  if (VAR_6 >= 0)
  {
   return 1;
  }

  VAR_4 = VAR_7;
 }

 return 0;
}
