
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int posts; int* forward_index; TYPE_4__* vi; } ;
typedef TYPE_3__ vorbis_look_floor1 ;
typedef int vorbis_look_floor ;
struct TYPE_11__ {int mult; int* postlist; } ;
typedef TYPE_4__ vorbis_info_floor1 ;
struct TYPE_12__ {size_t W; TYPE_2__* vd; } ;
typedef TYPE_5__ vorbis_block ;
struct TYPE_13__ {int* blocksizes; } ;
typedef TYPE_6__ codec_setup_info ;
struct TYPE_9__ {TYPE_1__* vi; } ;
struct TYPE_8__ {TYPE_6__* codec_setup; } ;


 float* VAR_0 ;
 int FUNC_0 (float*,int ,int) ;
 int FUNC_1 (int,int,int,int,int,float*) ;

__attribute__((used)) static int FUNC_2(vorbis_block *VAR_1,vorbis_look_floor *VAR_2,void *VAR_3,
                          float *VAR_4){
  vorbis_look_floor1 *VAR_5=(vorbis_look_floor1 *)VAR_2;
  vorbis_info_floor1 *VAR_6=VAR_5->vi;

  codec_setup_info *VAR_7=VAR_1->vd->vi->codec_setup;
  int VAR_8=VAR_7->blocksizes[VAR_1->W]/2;
  int VAR_9;

  if(VAR_3){

    int *VAR_10=(int *)VAR_3;
    int VAR_11=0;
    int VAR_12=0;
    int VAR_13=VAR_10[0]*VAR_6->mult;

    VAR_13=(VAR_13<0?0:VAR_13>255?255:VAR_13);

    for(VAR_9=1;VAR_9<VAR_5->posts;VAR_9++){
      int VAR_14=VAR_5->forward_index[VAR_9];
      int VAR_15=VAR_10[VAR_14]&0x7fff;
      if(VAR_15==VAR_10[VAR_14]){

        VAR_11=VAR_6->postlist[VAR_14];
        VAR_15*=VAR_6->mult;

        VAR_15=(VAR_15<0?0:VAR_15>255?255:VAR_15);

        FUNC_1(VAR_8,VAR_12,VAR_11,VAR_13,VAR_15,VAR_4);

        VAR_12=VAR_11;
        VAR_13=VAR_15;
      }
    }
    for(VAR_9=VAR_11;VAR_9<VAR_8;VAR_9++)VAR_4[VAR_9]*=VAR_0[VAR_13];
    return(1);
  }
  FUNC_0(VAR_4,0,sizeof(*VAR_4)*VAR_8);
  return(0);
}
