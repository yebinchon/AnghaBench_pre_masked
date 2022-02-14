
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
typedef int ogg_int32_t ;
struct TYPE_4__ {scalar_t__ used_entries; int dim; int binarypoint; int* valuelist; } ;
typedef TYPE_1__ codebook ;


 scalar_t__ FUNC_0 (int) ;
 long FUNC_1 (TYPE_1__*,int *) ;

long FUNC_2(codebook *VAR_0,ogg_int32_t *VAR_1,
         oggpack_buffer *VAR_2,int VAR_3,int VAR_4){
  if(VAR_0->used_entries>0){
    int VAR_5=VAR_3/VAR_0->dim;
    long *VAR_6 = (long *)FUNC_0(sizeof(*VAR_6)*VAR_5);
    ogg_int32_t **VAR_7 = (ogg_int32_t **)FUNC_0(sizeof(*VAR_7)*VAR_5);
    int VAR_8,VAR_9,VAR_10;
    int VAR_11=VAR_4-VAR_0->binarypoint;

    if(VAR_11>=0){
      for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
 VAR_6[VAR_8]=FUNC_1(VAR_0,VAR_2);
 if(VAR_6[VAR_8]==-1)return(-1);
 VAR_7[VAR_8] = VAR_0->valuelist+VAR_6[VAR_8]*VAR_0->dim;
      }
      for(VAR_8=0,VAR_10=0;VAR_8<VAR_0->dim;VAR_8++,VAR_10+=VAR_5)
 for (VAR_9=0;VAR_10+VAR_9<VAR_3 && VAR_9<VAR_5;VAR_9++)
   VAR_1[VAR_10+VAR_9]+=VAR_7[VAR_9][VAR_8]>>VAR_11;
    }else{
      for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
 VAR_6[VAR_8]=FUNC_1(VAR_0,VAR_2);
 if(VAR_6[VAR_8]==-1)return(-1);
 VAR_7[VAR_8] = VAR_0->valuelist+VAR_6[VAR_8]*VAR_0->dim;
      }
      for(VAR_8=0,VAR_10=0;VAR_8<VAR_0->dim;VAR_8++,VAR_10+=VAR_5)
 for (VAR_9=0;VAR_10+VAR_9<VAR_3 && VAR_9<VAR_5;VAR_9++)
   VAR_1[VAR_10+VAR_9]+=VAR_7[VAR_9][VAR_8]<<-VAR_11;
    }
  }
  return(0);
}
