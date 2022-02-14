
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_4__ {scalar_t__ used_entries; int dim; float* valuelist; } ;
typedef TYPE_1__ codebook ;


 int FUNC_0 (TYPE_1__*,int *) ;

long FUNC_1(codebook *VAR_0,float *VAR_1,oggpack_buffer *VAR_2,int VAR_3){
  if(VAR_0->used_entries>0){
    int VAR_4,VAR_5,VAR_6;
    float *VAR_7;

    if(VAR_0->dim>8){
      for(VAR_4=0;VAR_4<VAR_3;){
        VAR_6 = FUNC_0(VAR_0,VAR_2);
        if(VAR_6==-1)return(-1);
        VAR_7 = VAR_0->valuelist+VAR_6*VAR_0->dim;
        for (VAR_5=0;VAR_5<VAR_0->dim;)
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
      }
    }else{
      for(VAR_4=0;VAR_4<VAR_3;){
        VAR_6 = FUNC_0(VAR_0,VAR_2);
        if(VAR_6==-1)return(-1);
        VAR_7 = VAR_0->valuelist+VAR_6*VAR_0->dim;
        VAR_5=0;
        switch((int)VAR_0->dim){
        case 8:
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
        case 7:
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
        case 6:
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
        case 5:
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
        case 4:
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
        case 3:
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
        case 2:
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
        case 1:
          VAR_1[VAR_4++]+=VAR_7[VAR_5++];
        case 0:
          break;
        }
      }
    }
  }
  return(0);
}
