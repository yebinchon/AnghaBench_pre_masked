
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxValue; int minValue; } ;
typedef TYPE_1__ ShardInterval ;
typedef int FmgrInfo ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int VAR_1 ;

int
FUNC_2(Datum VAR_2, ShardInterval **VAR_3,
        int VAR_4, FmgrInfo *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = VAR_4;

 while (VAR_6 < VAR_7)
 {
  int VAR_8 = (VAR_6 + VAR_7) / 2;
  int VAR_9 = 0;
  int VAR_10 = 0;

  VAR_10 = FUNC_1(VAR_5,
              VAR_0,
              VAR_2,
              VAR_3[VAR_8]->minValue);

  if (FUNC_0(VAR_10) < 0)
  {
   VAR_7 = VAR_8;
   continue;
  }

  VAR_9 = FUNC_1(VAR_5,
              VAR_0,
              VAR_2,
              VAR_3[VAR_8]->maxValue);

  if (FUNC_0(VAR_9) <= 0)
  {
   return VAR_8;
  }

  VAR_6 = VAR_8 + 1;
 }

 return VAR_1;
}
