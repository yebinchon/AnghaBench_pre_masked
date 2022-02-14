
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int minValue; int maxValueExists; int minValueExists; } ;
typedef TYPE_1__ ShardInterval ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (void const*,void const*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(const void *VAR_0, const void *VAR_1,
       FmgrInfo *VAR_2)
{
 ShardInterval *VAR_3 = *((ShardInterval **) VAR_0);
 ShardInterval *VAR_4 = *((ShardInterval **) VAR_1);
 int VAR_5 = 0;
 bool VAR_6 = (!VAR_3->minValueExists ||
      !VAR_3->maxValueExists);
 bool VAR_7 = (!VAR_4->minValueExists ||
       !VAR_4->maxValueExists);

 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_6 && VAR_7)
 {
  VAR_5 = 0;
 }
 else if (VAR_6)
 {
  VAR_5 = 1;
 }
 else if (VAR_7)
 {
  VAR_5 = -1;
 }
 else
 {

  Datum VAR_8 = VAR_3->minValue;
  Datum VAR_9 = VAR_4->minValue;
  Datum VAR_10 = FUNC_1(VAR_2, VAR_8, VAR_9);
  VAR_5 = FUNC_3(VAR_10);
 }


 if (VAR_5 == 0)
 {
  return FUNC_2(VAR_0, VAR_1);
 }

 return VAR_5;
}
