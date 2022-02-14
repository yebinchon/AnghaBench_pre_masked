
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* FUNC_0 (int) ;

void FUNC_1(float *VAR_0,float *VAR_1,int VAR_2,
                     float *VAR_3,long VAR_4){





  long VAR_5,VAR_6,VAR_7,VAR_8;
  float VAR_9;
  float *VAR_10=FUNC_0(sizeof(*VAR_10)*(VAR_2+VAR_4));

  if(!VAR_1)
    for(VAR_5=0;VAR_5<VAR_2;VAR_5++)
      VAR_10[VAR_5]=0.f;
  else
    for(VAR_5=0;VAR_5<VAR_2;VAR_5++)
      VAR_10[VAR_5]=VAR_1[VAR_5];

  for(VAR_5=0;VAR_5<VAR_4;VAR_5++){
    VAR_9=0;
    VAR_7=VAR_5;
    VAR_8=VAR_2;
    for(VAR_6=0;VAR_6<VAR_2;VAR_6++)
      VAR_9-=VAR_10[VAR_7++]*VAR_0[--VAR_8];

    VAR_3[VAR_5]=VAR_10[VAR_7]=VAR_9;
  }
}
