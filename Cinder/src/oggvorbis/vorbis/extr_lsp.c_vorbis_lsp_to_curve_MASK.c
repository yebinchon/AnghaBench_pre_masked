
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

void FUNC_3(float *VAR_1,int *VAR_2,int VAR_3,int VAR_4,float *VAR_5,int VAR_6,
                            float VAR_7,float VAR_8){
  int VAR_9;
  float VAR_10=VAR_0/VAR_4;
  for(VAR_9=0;VAR_9<VAR_6;VAR_9++)VAR_5[VAR_9]=2.f*FUNC_0(VAR_5[VAR_9]);

  VAR_9=0;
  while(VAR_9<VAR_3){
    int VAR_11,VAR_12=VAR_2[VAR_9];
    float VAR_13=.5f;
    float VAR_14=.5f;
    float VAR_15=2.f*FUNC_0(VAR_10*VAR_12);
    for(VAR_11=1;VAR_11<VAR_6;VAR_11+=2){
      VAR_14 *= VAR_15-VAR_5[VAR_11-1];
      VAR_13 *= VAR_15-VAR_5[VAR_11];
    }
    if(VAR_11==VAR_6){


      VAR_14*=VAR_15-VAR_5[VAR_11-1];
      VAR_13*=VAR_13*(4.f-VAR_15*VAR_15);
      VAR_14*=VAR_14;
    }else{

      VAR_13*=VAR_13*(2.f-VAR_15);
      VAR_14*=VAR_14*(2.f+VAR_15);
    }

    VAR_14=FUNC_1(VAR_7/FUNC_2(VAR_13+VAR_14)-VAR_8);

    VAR_1[VAR_9]*=VAR_14;
    while(VAR_2[++VAR_9]==VAR_12)VAR_1[VAR_9]*=VAR_14;
  }
}
