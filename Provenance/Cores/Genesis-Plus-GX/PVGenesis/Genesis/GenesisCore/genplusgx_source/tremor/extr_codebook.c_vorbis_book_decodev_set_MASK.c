
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
typedef int ogg_int32_t ;
struct TYPE_4__ {scalar_t__ used_entries; int binarypoint; int* valuelist; int dim; } ;
typedef TYPE_1__ codebook ;


 int FUNC_0 (TYPE_1__*,int *) ;

long FUNC_1(codebook *VAR_0,ogg_int32_t *VAR_1,
        oggpack_buffer *VAR_2,int VAR_3,int VAR_4){
  if(VAR_0->used_entries>0){
    int VAR_5,VAR_6,VAR_7;
    ogg_int32_t *VAR_8;
    int VAR_9=VAR_4-VAR_0->binarypoint;

    if(VAR_9>=0){

      for(VAR_5=0;VAR_5<VAR_3;){
 VAR_7 = FUNC_0(VAR_0,VAR_2);
 if(VAR_7==-1)return(-1);
 VAR_8 = VAR_0->valuelist+VAR_7*VAR_0->dim;
 for (VAR_6=0;VAR_6<VAR_0->dim;){
   VAR_1[VAR_5++]=VAR_8[VAR_6++]>>VAR_9;
 }
      }
    }else{

      for(VAR_5=0;VAR_5<VAR_3;){
 VAR_7 = FUNC_0(VAR_0,VAR_2);
 if(VAR_7==-1)return(-1);
 VAR_8 = VAR_0->valuelist+VAR_7*VAR_0->dim;
 for (VAR_6=0;VAR_6<VAR_0->dim;){
   VAR_1[VAR_5++]=VAR_8[VAR_6++]<<-VAR_9;
 }
      }
    }
  }else{

    int VAR_10,VAR_11;
    for(VAR_10=0;VAR_10<VAR_3;){
      for (VAR_11=0;VAR_11<VAR_0->dim;){
 VAR_1[VAR_10++]=0;
      }
    }
  }
  return(0);
}
