
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int regmap; } ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (char,char) ;
 int FUNC_2 (char,char) ;
 int FUNC_3 (char,char) ;
 int FUNC_4 (char,char) ;
 char FUNC_5 (int ,int ) ;
 int* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

void FUNC_6(int VAR_3,struct regstat *VAR_4)
{
  signed char VAR_5,VAR_6;
  VAR_6=FUNC_5(VAR_4->regmap,VAR_2[VAR_3]);

  if(VAR_6>=0) {
    VAR_5=FUNC_5(VAR_4->regmap,VAR_1[VAR_3]);
    if(VAR_5>=0) {
      if(VAR_0[VAR_3]==12) FUNC_3(VAR_5,VAR_6);
      if(VAR_0[VAR_3]==13) FUNC_4(VAR_5,VAR_6);
      if(VAR_0[VAR_3]==14) FUNC_1(VAR_5,VAR_6);
      if(VAR_0[VAR_3]==15) FUNC_2(VAR_5,VAR_6);
    }
    else
    {
      FUNC_0(VAR_1[VAR_3],VAR_6);
      if(VAR_0[VAR_3]==12) FUNC_3(VAR_6,VAR_6);
      if(VAR_0[VAR_3]==13) FUNC_4(VAR_6,VAR_6);
      if(VAR_0[VAR_3]==14) FUNC_1(VAR_6,VAR_6);
      if(VAR_0[VAR_3]==15) FUNC_2(VAR_6,VAR_6);
    }
  }
}
