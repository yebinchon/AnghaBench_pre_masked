
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (char,int,char) ;
 int FUNC_1 (char,int,char) ;
 char FUNC_2 (int ,int ) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;

void FUNC_3(int VAR_4,struct regstat *VAR_5)
{
  signed char VAR_6,VAR_7;
  VAR_6=FUNC_2(VAR_5->regmap,VAR_0);
  if(VAR_1[VAR_4]==8) {
    if(VAR_2[VAR_4]==0) FUNC_0(VAR_6,~1,VAR_6);
    if(VAR_2[VAR_4]==1) FUNC_1(VAR_6,1,VAR_6);
  }else
  if(VAR_1[VAR_4]==9) {
    VAR_7=FUNC_2(VAR_5->regmap,VAR_3[VAR_4]);
    if(VAR_7>=0)
      FUNC_0(VAR_6,1,VAR_7);
  }
}
