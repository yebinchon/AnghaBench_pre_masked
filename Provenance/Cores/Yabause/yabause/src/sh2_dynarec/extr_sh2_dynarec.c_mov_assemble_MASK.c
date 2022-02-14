
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int regmap; } ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (char,char) ;
 char FUNC_2 (int ,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;

void FUNC_3(int VAR_2,struct regstat *VAR_3)
{
  signed char VAR_4,VAR_5;
  VAR_5=FUNC_2(VAR_3->regmap,VAR_1[VAR_2]);

  if(VAR_5>=0) {
    VAR_4=FUNC_2(VAR_3->regmap,VAR_0[VAR_2]);
    if(VAR_4>=0) {if(VAR_4!=VAR_5) FUNC_1(VAR_4,VAR_5);}
    else FUNC_0(VAR_0[VAR_2],VAR_5);
  }
}
