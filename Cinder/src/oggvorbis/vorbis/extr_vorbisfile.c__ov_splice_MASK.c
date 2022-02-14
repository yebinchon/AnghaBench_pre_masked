
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float **VAR_0,float **VAR_1,
                       int VAR_2, int VAR_3,
                       int VAR_4, int VAR_5,
                       const float *VAR_6, const float *VAR_7){
  int VAR_8,VAR_9;
  const float *VAR_10=VAR_6;
  int VAR_11=VAR_2;

  if(VAR_2>VAR_3){
    VAR_11=VAR_3;
    VAR_10=VAR_7;
  }


  for(VAR_9=0;VAR_9<VAR_4 && VAR_9<VAR_5;VAR_9++){
    float *VAR_12=VAR_1[VAR_9];
    float *VAR_13=VAR_0[VAR_9];

    for(VAR_8=0;VAR_8<VAR_11;VAR_8++){
      float VAR_14=VAR_10[VAR_8]*VAR_10[VAR_8];
      float VAR_15=1.-VAR_14;
      VAR_13[VAR_8]=VAR_13[VAR_8]*VAR_14 + VAR_12[VAR_8]*VAR_15;
    }
  }

  for(;VAR_9<VAR_5;VAR_9++){
    float *VAR_16=VAR_0[VAR_9];
    for(VAR_8=0;VAR_8<VAR_11;VAR_8++){
      float VAR_17=VAR_10[VAR_8]*VAR_10[VAR_8];
      VAR_16[VAR_8]=VAR_16[VAR_8]*VAR_17;
    }
  }

}
