
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; int* trig; int scale; } ;
typedef TYPE_1__ mdct_lookup ;
typedef int REG_TYPE ;
typedef int DATA_TYPE ;


 int FUNC_0 (int) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;

void FUNC_4(mdct_lookup *VAR_0, DATA_TYPE *VAR_1, DATA_TYPE *VAR_2){
  int VAR_3=VAR_0->n;
  int VAR_4=VAR_3>>1;
  int VAR_5=VAR_3>>2;
  int VAR_6=VAR_3>>3;
  DATA_TYPE *VAR_7=FUNC_1(VAR_3*sizeof(*VAR_7));
  DATA_TYPE *VAR_8=VAR_7+VAR_4;





  REG_TYPE VAR_9;
  REG_TYPE VAR_10;
  DATA_TYPE *VAR_11=VAR_1+VAR_4+VAR_5;
  DATA_TYPE *VAR_12=VAR_11+1;
  DATA_TYPE *VAR_13=VAR_0->trig+VAR_4;

  int VAR_14=0;

  for(VAR_14=0;VAR_14<VAR_6;VAR_14+=2){
    VAR_11 -=4;
    VAR_13-=2;
    VAR_9= VAR_11[2] + VAR_12[0];
    VAR_10= VAR_11[0] + VAR_12[2];
    VAR_8[VAR_14]= FUNC_0(VAR_10*VAR_13[1] + VAR_9*VAR_13[0]);
    VAR_8[VAR_14+1]= FUNC_0(VAR_10*VAR_13[0] - VAR_9*VAR_13[1]);
    VAR_12 +=4;
  }

  VAR_12=VAR_1+1;

  for(;VAR_14<VAR_4-VAR_6;VAR_14+=2){
    VAR_13-=2;
    VAR_11 -=4;
    VAR_9= VAR_11[2] - VAR_12[0];
    VAR_10= VAR_11[0] - VAR_12[2];
    VAR_8[VAR_14]= FUNC_0(VAR_10*VAR_13[1] + VAR_9*VAR_13[0]);
    VAR_8[VAR_14+1]= FUNC_0(VAR_10*VAR_13[0] - VAR_9*VAR_13[1]);
    VAR_12 +=4;
  }

  VAR_11=VAR_1+VAR_3;

  for(;VAR_14<VAR_4;VAR_14+=2){
    VAR_13-=2;
    VAR_11 -=4;
    VAR_9= -VAR_11[2] - VAR_12[0];
    VAR_10= -VAR_11[0] - VAR_12[2];
    VAR_8[VAR_14]= FUNC_0(VAR_10*VAR_13[1] + VAR_9*VAR_13[0]);
    VAR_8[VAR_14+1]= FUNC_0(VAR_10*VAR_13[0] - VAR_9*VAR_13[1]);
    VAR_12 +=4;
  }


  FUNC_3(VAR_0,VAR_7+VAR_4,VAR_4);
  FUNC_2(VAR_0,VAR_7);



  VAR_13=VAR_0->trig+VAR_4;
  VAR_11=VAR_2+VAR_4;

  for(VAR_14=0;VAR_14<VAR_5;VAR_14++){
    VAR_11--;
    VAR_2[VAR_14] =FUNC_0((VAR_7[0]*VAR_13[0]+VAR_7[1]*VAR_13[1])*VAR_0->scale);
    VAR_11[0] =FUNC_0((VAR_7[0]*VAR_13[1]-VAR_7[1]*VAR_13[0])*VAR_0->scale);
    VAR_7+=2;
    VAR_13+=2;
  }
}
