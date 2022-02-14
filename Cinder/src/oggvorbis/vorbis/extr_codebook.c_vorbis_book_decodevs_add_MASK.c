
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_4__ {scalar_t__ used_entries; int dim; float* valuelist; } ;
typedef TYPE_1__ codebook ;


 void* FUNC_0 (int) ;
 long FUNC_1 (TYPE_1__*,int *) ;

long FUNC_2(codebook *VAR_0,float *VAR_1,oggpack_buffer *VAR_2,int VAR_3){
  if(VAR_0->used_entries>0){
    int VAR_4=VAR_3/VAR_0->dim;
    long *VAR_5 = FUNC_0(sizeof(*VAR_5)*VAR_4);
    float **VAR_6 = FUNC_0(sizeof(*VAR_6)*VAR_4);
    int VAR_7,VAR_8,VAR_9;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
      VAR_5[VAR_7]=FUNC_1(VAR_0,VAR_2);
      if(VAR_5[VAR_7]==-1)return(-1);
      VAR_6[VAR_7] = VAR_0->valuelist+VAR_5[VAR_7]*VAR_0->dim;
    }
    for(VAR_7=0,VAR_9=0;VAR_7<VAR_0->dim;VAR_7++,VAR_9+=VAR_4)
      for (VAR_8=0;VAR_8<VAR_4;VAR_8++)
        VAR_1[VAR_9+VAR_8]+=VAR_6[VAR_8][VAR_7];
  }
  return(0);
}
