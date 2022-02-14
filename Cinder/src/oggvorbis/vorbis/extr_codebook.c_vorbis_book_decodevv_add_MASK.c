
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_4__ {scalar_t__ used_entries; float* valuelist; long dim; } ;
typedef TYPE_1__ codebook ;


 long FUNC_0 (TYPE_1__*,int *) ;

long FUNC_1(codebook *VAR_0,float **VAR_1,long VAR_2,int VAR_3,
                              oggpack_buffer *VAR_4,int VAR_5){

  long VAR_6,VAR_7,VAR_8;
  int VAR_9=0;
  if(VAR_0->used_entries>0){
    for(VAR_6=VAR_2/VAR_3;VAR_6<(VAR_2+VAR_5)/VAR_3;){
      VAR_8 = FUNC_0(VAR_0,VAR_4);
      if(VAR_8==-1)return(-1);
      {
        const float *VAR_10 = VAR_0->valuelist+VAR_8*VAR_0->dim;
        for (VAR_7=0;VAR_7<VAR_0->dim;VAR_7++){
          VAR_1[VAR_9++][VAR_6]+=VAR_10[VAR_7];
          if(VAR_9==VAR_3){
            VAR_9=0;
            VAR_6++;
          }
        }
      }
    }
  }
  return(0);
}
