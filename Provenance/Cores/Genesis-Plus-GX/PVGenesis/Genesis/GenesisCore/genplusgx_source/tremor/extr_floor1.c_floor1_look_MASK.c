
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; int posts; int* forward_index; int quant_q; int* loneighbor; int* hineighbor; TYPE_3__* vi; } ;
typedef TYPE_1__ vorbis_look_floor1 ;
typedef TYPE_1__ vorbis_look_floor ;
typedef int vorbis_info_mode ;
struct TYPE_6__ {int* postlist; int partitions; size_t* partitionclass; int mult; scalar_t__* class_dim; } ;
typedef TYPE_3__ vorbis_info_floor1 ;
typedef int vorbis_info_floor ;
typedef int vorbis_dsp_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int**,int,int,int ) ;

__attribute__((used)) static vorbis_look_floor *FUNC_2(vorbis_dsp_state *VAR_2,vorbis_info_mode *VAR_3,
                              vorbis_info_floor *VAR_4){

  int *VAR_5[VAR_0+2];
  vorbis_info_floor1 *VAR_6=(vorbis_info_floor1 *)VAR_4;
  vorbis_look_floor1 *VAR_7=(vorbis_look_floor1 *)FUNC_0(1,sizeof(*VAR_7));
  int VAR_8,VAR_9,VAR_10=0;

  VAR_7->vi=VAR_6;
  VAR_7->n=VAR_6->postlist[1];
  for(VAR_8=0;VAR_8<VAR_6->partitions;VAR_8++)VAR_10+=VAR_6->class_dim[VAR_6->partitionclass[VAR_8]];
  VAR_10+=2;
  VAR_7->posts=VAR_10;


  for(VAR_8=0;VAR_8<VAR_10;VAR_8++)VAR_5[VAR_8]=VAR_6->postlist+VAR_8;
  FUNC_1(VAR_5,VAR_10,sizeof(*VAR_5),VAR_1);


  for(VAR_8=0;VAR_8<VAR_10;VAR_8++)VAR_7->forward_index[VAR_8]=VAR_5[VAR_8]-VAR_6->postlist;


  switch(VAR_6->mult){
  case 1:
    VAR_7->quant_q=256;
    break;
  case 2:
    VAR_7->quant_q=128;
    break;
  case 3:
    VAR_7->quant_q=86;
    break;
  case 4:
    VAR_7->quant_q=64;
    break;
  }



  for(VAR_8=0;VAR_8<VAR_10-2;VAR_8++){
    int VAR_11=0;
    int VAR_12=1;
    int VAR_13=0;
    int VAR_14=VAR_7->n;
    int VAR_15=VAR_6->postlist[VAR_8+2];
    for(VAR_9=0;VAR_9<VAR_8+2;VAR_9++){
      int VAR_16=VAR_6->postlist[VAR_9];
      if(VAR_16>VAR_13 && VAR_16<VAR_15){
 VAR_11=VAR_9;
 VAR_13=VAR_16;
      }
      if(VAR_16<VAR_14 && VAR_16>VAR_15){
 VAR_12=VAR_9;
 VAR_14=VAR_16;
      }
    }
    VAR_7->loneighbor[VAR_8]=VAR_11;
    VAR_7->hineighbor[VAR_8]=VAR_12;
  }

  return(VAR_7);
}
