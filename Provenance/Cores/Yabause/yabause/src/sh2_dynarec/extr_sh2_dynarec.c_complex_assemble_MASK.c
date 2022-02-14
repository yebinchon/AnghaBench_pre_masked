
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int regmap; int regmap_entry; } ;
typedef int pointer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;

void FUNC_5(int VAR_11,struct regstat *VAR_12)
{
  if(VAR_7[VAR_11]==3&&VAR_8[VAR_11]==4) {
    FUNC_2((pointer)VAR_4);
  }
  if(VAR_7[VAR_11]==0&&VAR_8[VAR_11]==15) {
    FUNC_4(VAR_12->regmap_entry,VAR_12->regmap,VAR_3,VAR_2,VAR_2);



    if(VAR_9[VAR_11]==VAR_10[VAR_11]) {FUNC_3(VAR_1,VAR_0);FUNC_1(VAR_1,4,VAR_1);}
    FUNC_2((pointer)VAR_5);
  }
  if(VAR_7[VAR_11]==4&&VAR_8[VAR_11]==15) {
    FUNC_4(VAR_12->regmap_entry,VAR_12->regmap,VAR_3,VAR_2,VAR_2);



    if(VAR_9[VAR_11]==VAR_10[VAR_11]) {FUNC_3(VAR_1,VAR_0);FUNC_1(VAR_1,2,VAR_1);}
    FUNC_2((pointer)VAR_6);
  }
}
