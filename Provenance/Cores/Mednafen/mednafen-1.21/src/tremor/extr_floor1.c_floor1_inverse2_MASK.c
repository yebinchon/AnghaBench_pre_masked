
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
typedef int ogg_int32_t ;
struct TYPE_13__ {int* blocksizes; } ;
typedef TYPE_6__ codec_setup_info ;
struct TYPE_9__ {TYPE_1__* vi; } ;
struct TYPE_8__ {scalar_t__ codec_setup; } ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int,int,int,int,int,int*) ;

__attribute__((used)) static int FUNC_2(vorbis_block *VAR_0,vorbis_look_floor *VAR_1,void *VAR_2,
     ogg_int32_t *VAR_3){
  vorbis_look_floor1 *VAR_4=(vorbis_look_floor1 *)VAR_1;
  vorbis_info_floor1 *VAR_5=VAR_4->vi;

  codec_setup_info *VAR_6=(codec_setup_info *)VAR_0->vd->vi->codec_setup;
  int VAR_7=VAR_6->blocksizes[VAR_0->W]/2;
  int VAR_8;

  if(VAR_2){

    int *VAR_9=(int *)VAR_2;
    int VAR_10=0;
    int VAR_11=0;
    int VAR_12=VAR_9[0]*VAR_5->mult;

    VAR_12=(VAR_12<0?0:VAR_12>255?255:VAR_12);

    for(VAR_8=1;VAR_8<VAR_4->posts;VAR_8++){
      int VAR_13=VAR_4->forward_index[VAR_8];
      int VAR_14=VAR_9[VAR_13]&0x7fff;
      if(VAR_14==VAR_9[VAR_13]){

 VAR_10=VAR_5->postlist[VAR_13];
 VAR_14*=VAR_5->mult;

        VAR_14=(VAR_14<0?0:VAR_14>255?255:VAR_14);

 FUNC_1(VAR_7,VAR_11,VAR_10,VAR_12,VAR_14,VAR_3);

 VAR_11=VAR_10;
 VAR_12=VAR_14;
      }
    }
    for(VAR_8=VAR_10;VAR_8<VAR_7;VAR_8++)VAR_3[VAR_8]*=VAR_12;
    return(1);
  }
  FUNC_0(VAR_3,0,sizeof(*VAR_3)*VAR_7);
  return(0);
}
