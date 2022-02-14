
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(int VAR_0, float VAR_1, float VAR_2, float *VAR_3,
                         float *VAR_4, int *VAR_5, int VAR_6, int VAR_7){
  int VAR_8;
  for(VAR_8=0;VAR_8<VAR_7;VAR_8++){
    float VAR_9 = VAR_8>=VAR_0-VAR_6 ? VAR_2 : VAR_1;
    float VAR_10 = FUNC_0(VAR_3[VAR_8])/VAR_4[VAR_8];
    if(VAR_10<VAR_9)
      VAR_5[VAR_8]=0;
    else
      VAR_5[VAR_8]=1;
  }
}
