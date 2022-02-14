
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; int* trig; } ;
typedef TYPE_1__ mdct_lookup ;
typedef int DATA_TYPE ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,int*,int) ;

void FUNC_3(mdct_lookup *VAR_0, DATA_TYPE *VAR_1, DATA_TYPE *VAR_2){
  int VAR_3=VAR_0->n;
  int VAR_4=VAR_3>>1;
  int VAR_5=VAR_3>>2;



  DATA_TYPE *VAR_6 = VAR_1+VAR_4-7;
  DATA_TYPE *VAR_7 = VAR_2+VAR_4+VAR_5;
  DATA_TYPE *VAR_8 = VAR_0->trig+VAR_5;

  do{
    VAR_7 -= 4;
    VAR_7[0] = FUNC_0(-VAR_6[2] * VAR_8[3] - VAR_6[0] * VAR_8[2]);
    VAR_7[1] = FUNC_0 (VAR_6[0] * VAR_8[3] - VAR_6[2] * VAR_8[2]);
    VAR_7[2] = FUNC_0(-VAR_6[6] * VAR_8[1] - VAR_6[4] * VAR_8[0]);
    VAR_7[3] = FUNC_0 (VAR_6[4] * VAR_8[1] - VAR_6[6] * VAR_8[0]);
    VAR_6 -= 8;
    VAR_8 += 4;
  }while(VAR_6>=VAR_1);

  VAR_6 = VAR_1+VAR_4-8;
  VAR_7 = VAR_2+VAR_4+VAR_5;
  VAR_8 = VAR_0->trig+VAR_5;

  do{
    VAR_8 -= 4;
    VAR_7[0] = FUNC_0 (VAR_6[4] * VAR_8[3] + VAR_6[6] * VAR_8[2]);
    VAR_7[1] = FUNC_0 (VAR_6[4] * VAR_8[2] - VAR_6[6] * VAR_8[3]);
    VAR_7[2] = FUNC_0 (VAR_6[0] * VAR_8[1] + VAR_6[2] * VAR_8[0]);
    VAR_7[3] = FUNC_0 (VAR_6[0] * VAR_8[0] - VAR_6[2] * VAR_8[1]);
    VAR_6 -= 8;
    VAR_7 += 4;
  }while(VAR_6>=VAR_1);

  FUNC_2(VAR_0,VAR_2+VAR_4,VAR_4);
  FUNC_1(VAR_0,VAR_2);



  {
    DATA_TYPE *VAR_9=VAR_2+VAR_4+VAR_5;
    DATA_TYPE *VAR_10=VAR_2+VAR_4+VAR_5;
    DATA_TYPE *VAR_11 =VAR_2;
    VAR_8 =VAR_0->trig+VAR_4;

    do{
      VAR_9-=4;

      VAR_9[3] = FUNC_0 (VAR_11[0] * VAR_8[1] - VAR_11[1] * VAR_8[0]);
      VAR_10[0] = -FUNC_0 (VAR_11[0] * VAR_8[0] + VAR_11[1] * VAR_8[1]);

      VAR_9[2] = FUNC_0 (VAR_11[2] * VAR_8[3] - VAR_11[3] * VAR_8[2]);
      VAR_10[1] = -FUNC_0 (VAR_11[2] * VAR_8[2] + VAR_11[3] * VAR_8[3]);

      VAR_9[1] = FUNC_0 (VAR_11[4] * VAR_8[5] - VAR_11[5] * VAR_8[4]);
      VAR_10[2] = -FUNC_0 (VAR_11[4] * VAR_8[4] + VAR_11[5] * VAR_8[5]);

      VAR_9[0] = FUNC_0 (VAR_11[6] * VAR_8[7] - VAR_11[7] * VAR_8[6]);
      VAR_10[3] = -FUNC_0 (VAR_11[6] * VAR_8[6] + VAR_11[7] * VAR_8[7]);

      VAR_10+=4;
      VAR_11 += 8;
      VAR_8 += 8;
    }while(VAR_11<VAR_9);

    VAR_11=VAR_2+VAR_4+VAR_5;
    VAR_9=VAR_2+VAR_5;
    VAR_10=VAR_9;

    do{
      VAR_9-=4;
      VAR_11-=4;

      VAR_10[0] = -(VAR_9[3] = VAR_11[3]);
      VAR_10[1] = -(VAR_9[2] = VAR_11[2]);
      VAR_10[2] = -(VAR_9[1] = VAR_11[1]);
      VAR_10[3] = -(VAR_9[0] = VAR_11[0]);

      VAR_10+=4;
    }while(VAR_10<VAR_11);

    VAR_11=VAR_2+VAR_4+VAR_5;
    VAR_9=VAR_2+VAR_4+VAR_5;
    VAR_10=VAR_2+VAR_4;
    do{
      VAR_9-=4;
      VAR_9[0]= VAR_11[3];
      VAR_9[1]= VAR_11[2];
      VAR_9[2]= VAR_11[1];
      VAR_9[3]= VAR_11[0];
      VAR_11+=4;
    }while(VAR_9>VAR_10);
  }
}
