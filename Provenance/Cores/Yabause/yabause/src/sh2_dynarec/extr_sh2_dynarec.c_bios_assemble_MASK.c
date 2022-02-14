
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int regmap; } ;
typedef int pointer ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;
 int FUNC_1 (char,int,char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 char FUNC_4 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_5(int VAR_9,struct regstat *VAR_10)
{
  signed char VAR_11=FUNC_4(VAR_10->regmap,VAR_0);
  FUNC_0(VAR_11==VAR_2);
  FUNC_0(!VAR_4);
  FUNC_3(VAR_8+VAR_9*2,0);

  FUNC_1(VAR_2,VAR_1*VAR_3[VAR_9],VAR_2);
  if(VAR_6)
    FUNC_2((pointer)VAR_7);
  else
    FUNC_2((pointer)VAR_5);
}
