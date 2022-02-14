
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int n; int posts; int* forward_index; int* reverse_index; int* sorted_index; int quant_q; int* loneighbor; int* hineighbor; TYPE_3__* vi; } ;
typedef TYPE_1__ vorbis_look_floor1 ;
typedef TYPE_1__ vorbis_look_floor ;
struct TYPE_7__ {int* postlist; int partitions; size_t* partitionclass; int mult; scalar_t__* class_dim; } ;
typedef TYPE_3__ vorbis_info_floor1 ;
typedef int vorbis_info_floor ;
typedef int vorbis_dsp_state ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int**,int,int,int ) ;

__attribute__((used)) static vorbis_look_floor *FUNC_2(vorbis_dsp_state *VAR_2,
                                      vorbis_info_floor *VAR_3){

  int *VAR_4[VAR_0+2];
  vorbis_info_floor1 *VAR_5=(vorbis_info_floor1 *)VAR_3;
  vorbis_look_floor1 *VAR_6=FUNC_0(1,sizeof(*VAR_6));
  int VAR_7,VAR_8,VAR_9=0;

  (void)VAR_2;

  VAR_6->vi=VAR_5;
  VAR_6->n=VAR_5->postlist[1];
  for(VAR_7=0;VAR_7<VAR_5->partitions;VAR_7++)VAR_9+=VAR_5->class_dim[VAR_5->partitionclass[VAR_7]];
  VAR_9+=2;
  VAR_6->posts=VAR_9;


  for(VAR_7=0;VAR_7<VAR_9;VAR_7++)VAR_4[VAR_7]=VAR_5->postlist+VAR_7;
  FUNC_1(VAR_4,VAR_9,sizeof(*VAR_4),VAR_1);


  for(VAR_7=0;VAR_7<VAR_9;VAR_7++)VAR_6->forward_index[VAR_7]=VAR_4[VAR_7]-VAR_5->postlist;

  for(VAR_7=0;VAR_7<VAR_9;VAR_7++)VAR_6->reverse_index[VAR_6->forward_index[VAR_7]]=VAR_7;

  for(VAR_7=0;VAR_7<VAR_9;VAR_7++)VAR_6->sorted_index[VAR_7]=VAR_5->postlist[VAR_6->forward_index[VAR_7]];


  switch(VAR_5->mult){
  case 1:
    VAR_6->quant_q=256;
    break;
  case 2:
    VAR_6->quant_q=128;
    break;
  case 3:
    VAR_6->quant_q=86;
    break;
  case 4:
    VAR_6->quant_q=64;
    break;
  }



  for(VAR_7=0;VAR_7<VAR_9-2;VAR_7++){
    int VAR_10=0;
    int VAR_11=1;
    int VAR_12=0;
    int VAR_13=VAR_6->n;
    int VAR_14=VAR_5->postlist[VAR_7+2];
    for(VAR_8=0;VAR_8<VAR_7+2;VAR_8++){
      int VAR_15=VAR_5->postlist[VAR_8];
      if(VAR_15>VAR_12 && VAR_15<VAR_14){
        VAR_10=VAR_8;
        VAR_12=VAR_15;
      }
      if(VAR_15<VAR_13 && VAR_15>VAR_14){
        VAR_11=VAR_8;
        VAR_13=VAR_15;
      }
    }
    VAR_6->loneighbor[VAR_7]=VAR_10;
    VAR_6->hineighbor[VAR_7]=VAR_11;
  }

  return(VAR_6);
}
