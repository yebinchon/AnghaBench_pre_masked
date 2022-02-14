
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_4__ {scalar_t__ used_entries; float* valuelist; int dim; } ;
typedef TYPE_1__ codebook ;


 int FUNC_0 (TYPE_1__*,int *) ;

long FUNC_1(codebook *VAR_0,float *VAR_1,oggpack_buffer *VAR_2,int VAR_3){
  if(VAR_0->used_entries>0){
    int VAR_4,VAR_5,VAR_6;
    float *VAR_7;

    for(VAR_4=0;VAR_4<VAR_3;){
      VAR_6 = FUNC_0(VAR_0,VAR_2);
      if(VAR_6==-1)return(-1);
      VAR_7 = VAR_0->valuelist+VAR_6*VAR_0->dim;
      for (VAR_5=0;VAR_4<VAR_3 && VAR_5<VAR_0->dim;){
        VAR_1[VAR_4++]=VAR_7[VAR_5++];
      }
    }
  }else{
    int VAR_8;

    for(VAR_8=0;VAR_8<VAR_3;){
      VAR_1[VAR_8++]=0.f;
    }
  }
  return(0);
}
