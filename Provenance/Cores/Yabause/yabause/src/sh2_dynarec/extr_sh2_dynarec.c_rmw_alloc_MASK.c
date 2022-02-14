
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_0 (struct regstat*,int,int ) ;
 int FUNC_1 (struct regstat*,int,int) ;
 int FUNC_2 (struct regstat*,int ) ;
 int FUNC_3 (struct regstat*,int ) ;
 int FUNC_4 (struct regstat*,int ) ;
 int* VAR_7 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 scalar_t__* VAR_11 ;

void FUNC_6(struct regstat *VAR_12,int VAR_13)
{

  if(VAR_6[VAR_13]==VAR_1) {
    FUNC_0(VAR_12,VAR_13,VAR_0);
    FUNC_0(VAR_12,VAR_13,0);
    if(!FUNC_4(VAR_12,VAR_9[VAR_13])||!FUNC_4(VAR_12,VAR_10[VAR_13])) {

      FUNC_2(VAR_12,VAR_9[VAR_13]);
      FUNC_2(VAR_12,VAR_10[VAR_13]);
    }
  }
  if(VAR_6[VAR_13]==VAR_3&&FUNC_5(VAR_8[VAR_13],VAR_13)) FUNC_0(VAR_12,VAR_13,VAR_8[VAR_13]);
  if(VAR_11[VAR_13]==VAR_5) {
    FUNC_0(VAR_12,VAR_13,VAR_4);
    FUNC_3(VAR_12,VAR_4);
  }


  FUNC_0(VAR_12,VAR_13,VAR_2);


  FUNC_1(VAR_12,VAR_13,-1);


  VAR_7[VAR_13]=1;
}
