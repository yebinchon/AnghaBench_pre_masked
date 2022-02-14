
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entries; int dim; } ;
typedef TYPE_1__ static_codebook ;


 int FUNC_0 (int) ;

long FUNC_1(const static_codebook *VAR_0){

  int VAR_1=FUNC_0(VAR_0->entries);
  int VAR_2=VAR_0->entries>>((VAR_1-1)*(VAR_0->dim-1)/VAR_0->dim);

  while(1){
    long VAR_3=1;
    long VAR_4=1;
    int VAR_5;
    for(VAR_5=0;VAR_5<VAR_0->dim;VAR_5++){
      VAR_3*=VAR_2;
      VAR_4*=VAR_2+1;
    }
    if(VAR_3<=VAR_0->entries && VAR_4>VAR_0->entries){
      return(VAR_2);
    }else{
      if(VAR_3>VAR_0->entries){
 VAR_2--;
      }else{
 VAR_2++;
      }
    }
  }
}
