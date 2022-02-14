
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int* regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (struct regstat*,int,int) ;
 int FUNC_1 (struct regstat*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct regstat*,int) ;
 int FUNC_4 (struct regstat*,int) ;
 int FUNC_5 (struct regstat*,int) ;
 int FUNC_6 (int*,int) ;
 scalar_t__ FUNC_7 (struct regstat*,int) ;
 int* VAR_4 ;
 scalar_t__ FUNC_8 (int,int) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_9 (struct regstat*,int,int) ;

void FUNC_10(struct regstat *VAR_11,int VAR_12)
{
  int VAR_13;

  if(VAR_3[VAR_12]==VAR_0) {
    FUNC_0(VAR_11,VAR_12,VAR_8[VAR_12]);
    FUNC_0(VAR_11,VAR_12,0);
    if(!FUNC_7(VAR_11,VAR_8[VAR_12])||!FUNC_7(VAR_11,VAR_9[VAR_12])) {

      FUNC_3(VAR_11,VAR_8[VAR_12]);
      FUNC_3(VAR_11,VAR_9[VAR_12]);
    }
  }
  if(VAR_3[VAR_12]==VAR_2) {
    if(FUNC_7(VAR_11,VAR_10[VAR_12])) {
      int VAR_14=FUNC_5(VAR_11,VAR_10[VAR_12]);
      FUNC_9(VAR_11,VAR_10[VAR_12],VAR_14-(1<<((VAR_5[VAR_12]==4)?2:(VAR_6[VAR_12]&3))));
    }
    else {
      FUNC_0(VAR_11,VAR_12,VAR_10[VAR_12]);
      FUNC_4(VAR_11,VAR_10[VAR_12]);
    }
  }
  if(FUNC_8(VAR_8[VAR_12],VAR_12)) FUNC_0(VAR_11,VAR_12,VAR_8[VAR_12]);
  FUNC_3(VAR_11,VAR_7[VAR_12]);
  FUNC_0(VAR_11,VAR_12,VAR_7[VAR_12]);

  FUNC_0(VAR_11,VAR_12,VAR_1);


  FUNC_1(VAR_11,VAR_12,-1);
  VAR_4[VAR_12]=1;


  VAR_13=FUNC_6(VAR_11->regmap,VAR_1);
  FUNC_2(VAR_13>=0);
  FUNC_2(VAR_11->regmap[VAR_13]==VAR_1);
  VAR_11->regmap[VAR_13]=-1;
  VAR_4[VAR_12]++;
}
