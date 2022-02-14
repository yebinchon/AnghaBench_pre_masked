
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long entries; float dim; } ;
typedef TYPE_1__ static_codebook ;


 long FUNC_0 (int ) ;
 int FUNC_1 (float,float) ;

long FUNC_2(const static_codebook *VAR_0){
  long VAR_1=FUNC_0(FUNC_1((float)VAR_0->entries,1.f/VAR_0->dim));






  while(1){
    long VAR_2=1;
    long VAR_3=1;
    int VAR_4;
    for(VAR_4=0;VAR_4<VAR_0->dim;VAR_4++){
      VAR_2*=VAR_1;
      VAR_3*=VAR_1+1;
    }
    if(VAR_2<=VAR_0->entries && VAR_3>VAR_0->entries){
      return(VAR_1);
    }else{
      if(VAR_2>VAR_0->entries){
        VAR_1--;
      }else{
        VAR_1++;
      }
    }
  }
}
