
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (long) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, int VAR_1, long VAR_2){
  long *VAR_3=FUNC_0(VAR_2*sizeof(*VAR_3));
  float *VAR_4=FUNC_0(VAR_2*sizeof(*VAR_4));
  long VAR_5=0;
  long VAR_6=0;
  long VAR_7;

  for(VAR_7=0;VAR_7<VAR_2;VAR_7++){
    if(VAR_5<2){
      VAR_3[VAR_5]=VAR_7;
      VAR_4[VAR_5++]=VAR_0[VAR_7];
    }else{
      while(1){
        if(VAR_0[VAR_7]<VAR_4[VAR_5-1]){
          VAR_3[VAR_5]=VAR_7;
          VAR_4[VAR_5++]=VAR_0[VAR_7];
          break;
        }else{
          if(VAR_7<VAR_3[VAR_5-1]+VAR_1){
            if(VAR_5>1 && VAR_4[VAR_5-1]<=VAR_4[VAR_5-2] &&
               VAR_7<VAR_3[VAR_5-2]+VAR_1){

              VAR_5--;
              continue;
            }
          }
          VAR_3[VAR_5]=VAR_7;
          VAR_4[VAR_5++]=VAR_0[VAR_7];
          break;

        }
      }
    }
  }




  for(VAR_7=0;VAR_7<VAR_5;VAR_7++){
    long VAR_8;
    if(VAR_7<VAR_5-1 && VAR_4[VAR_7+1]>VAR_4[VAR_7]){
      VAR_8=VAR_3[VAR_7+1];
    }else{
      VAR_8=VAR_3[VAR_7]+VAR_1+1;

    }
    if(VAR_8>VAR_2)VAR_8=VAR_2;
    for(;VAR_6<VAR_8;VAR_6++)
      VAR_0[VAR_6]=VAR_4[VAR_7];
  }




}
