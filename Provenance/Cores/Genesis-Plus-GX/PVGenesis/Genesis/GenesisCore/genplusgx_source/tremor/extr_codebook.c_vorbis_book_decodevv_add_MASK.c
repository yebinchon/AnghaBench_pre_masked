
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int oggpack_buffer ;
typedef int ogg_int32_t ;
struct TYPE_4__ {scalar_t__ used_entries; int binarypoint; int* valuelist; long dim; } ;
typedef TYPE_1__ codebook ;


 long FUNC_0 (TYPE_1__*,int *) ;

long FUNC_1(codebook *VAR_0,ogg_int32_t **VAR_1, long VAR_2,int VAR_3,

         oggpack_buffer *VAR_4,int VAR_5,int VAR_6){
  if(VAR_0->used_entries>0){
    long VAR_7,VAR_8,VAR_9;
    int VAR_10=0;
    int VAR_11=VAR_6-VAR_0->binarypoint;

    if(VAR_11>=0){

      for(VAR_7=VAR_2;VAR_7<VAR_2+VAR_5;){
 VAR_9 = FUNC_0(VAR_0,VAR_4);
 if(VAR_9==-1)return(-1);
 {
   const ogg_int32_t *VAR_12 = VAR_0->valuelist+VAR_9*VAR_0->dim;
   for (VAR_8=0;VAR_8<VAR_0->dim;VAR_8++){
     VAR_1[VAR_10++][VAR_7]+=VAR_12[VAR_8]>>VAR_11;
     if(VAR_10==VAR_3){
       VAR_10=0;
       VAR_7++;
     }
   }
 }
      }
    }else{

      for(VAR_7=VAR_2;VAR_7<VAR_2+VAR_5;){
 VAR_9 = FUNC_0(VAR_0,VAR_4);
 if(VAR_9==-1)return(-1);
 {
   const ogg_int32_t *VAR_13 = VAR_0->valuelist+VAR_9*VAR_0->dim;
   for (VAR_8=0;VAR_8<VAR_0->dim;VAR_8++){
     VAR_1[VAR_10++][VAR_7]+=VAR_13[VAR_8]<<-VAR_11;
     if(VAR_10==VAR_3){
       VAR_10=0;
       VAR_7++;
     }
   }
 }
      }
    }
  }
  return(0);
}
