
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxValue; int minValue; } ;
typedef TYPE_1__ ShardInterval ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_3(Datum VAR_1, ShardInterval **VAR_2,
       int VAR_3, FunctionCallInfo VAR_4, bool VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = VAR_3;

 FUNC_0(VAR_3 != 0);


 FUNC_2(VAR_4, 0, VAR_1);

 while (VAR_6 < VAR_7)
 {
  int VAR_8 = VAR_6 + ((VAR_7 - VAR_6) / 2);
  int VAR_9 = 0;
  int VAR_10 = 0;


  FUNC_2(VAR_4, 1, VAR_2[VAR_8]->minValue);


  VAR_10 = FUNC_1(VAR_4);


  if ((VAR_10 == 0 && !VAR_5) ||
   VAR_10 < 0)
  {

   VAR_7 = VAR_8;
   continue;
  }


  FUNC_2(VAR_4, 1, VAR_2[VAR_8]->maxValue);


  VAR_9 = FUNC_1(VAR_4);

  if (VAR_9 > 0)
  {

   VAR_6 = VAR_8 + 1;
   continue;
  }


  return VAR_8;
 }

 FUNC_0(VAR_6 == VAR_7);







 if (VAR_7 == VAR_3)
 {

  return VAR_3 - 1;
 }
 else if (VAR_7 == 0)
 {

  return VAR_0;
 }


 return VAR_7 - 1;
}
