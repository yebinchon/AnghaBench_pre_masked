
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int** linearmap; float ln; int* n; } ;
typedef TYPE_1__ vorbis_look_floor0 ;
struct TYPE_10__ {float rate; } ;
typedef TYPE_2__ vorbis_info_floor0 ;
typedef int vorbis_info_floor ;
struct TYPE_11__ {TYPE_6__* codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
struct TYPE_12__ {TYPE_3__* vi; } ;
typedef TYPE_4__ vorbis_dsp_state ;
struct TYPE_13__ {size_t W; TYPE_4__* vd; } ;
typedef TYPE_5__ vorbis_block ;
struct TYPE_14__ {int* blocksizes; } ;
typedef TYPE_6__ codec_setup_info ;


 int* FUNC_0 (int) ;
 int FUNC_1 (float) ;
 float FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(vorbis_block *VAR_0,
                                 vorbis_info_floor *VAR_1,
                                 vorbis_look_floor0 *VAR_2){
  if(!VAR_2->linearmap[VAR_0->W]){
    vorbis_dsp_state *VAR_3=VAR_0->vd;
    vorbis_info *VAR_4=VAR_3->vi;
    codec_setup_info *VAR_5=VAR_4->codec_setup;
    vorbis_info_floor0 *VAR_6=(vorbis_info_floor0 *)VAR_1;
    int VAR_7=VAR_0->W;
    int VAR_8=VAR_5->blocksizes[VAR_7]/2,VAR_9;




    float VAR_10=VAR_2->ln/FUNC_2(VAR_6->rate/2.f);







    VAR_2->linearmap[VAR_7]=FUNC_0((VAR_8+1)*sizeof(**VAR_2->linearmap));
    for(VAR_9=0;VAR_9<VAR_8;VAR_9++){
      int VAR_11=FUNC_1( FUNC_2((VAR_6->rate/2.f)/VAR_8*VAR_9)
                     *VAR_10);
      if(VAR_11>=VAR_2->ln)VAR_11=VAR_2->ln-1;
      VAR_2->linearmap[VAR_7][VAR_9]=VAR_11;
    }
    VAR_2->linearmap[VAR_7][VAR_9]=-1;
    VAR_2->n[VAR_7]=VAR_8;
  }
}
