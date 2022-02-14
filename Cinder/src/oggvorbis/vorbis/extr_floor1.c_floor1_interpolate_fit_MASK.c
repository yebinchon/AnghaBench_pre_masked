
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long posts; } ;
typedef TYPE_1__ vorbis_look_floor1 ;
typedef int vorbis_block ;


 int* FUNC_0 (int *,int) ;

int *FUNC_1(vorbis_block *VAR_0,vorbis_look_floor1 *VAR_1,
                          int *VAR_2,int *VAR_3,
                          int VAR_4){

  long VAR_5;
  long VAR_6=VAR_1->posts;
  int *VAR_7=((void*)0);

  if(VAR_2 && VAR_3){
    VAR_7=FUNC_0(VAR_0,sizeof(*VAR_7)*VAR_6);


    for(VAR_5=0;VAR_5<VAR_6;VAR_5++){
      VAR_7[VAR_5]=((65536-VAR_4)*(VAR_2[VAR_5]&0x7fff)+VAR_4*(VAR_3[VAR_5]&0x7fff)+32768)>>16;
      if(VAR_2[VAR_5]&0x8000 && VAR_3[VAR_5]&0x8000)VAR_7[VAR_5]|=0x8000;
    }
  }

  return(VAR_7);
}
