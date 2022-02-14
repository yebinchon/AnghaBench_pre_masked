
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float ampmax_att_per_sec; } ;
typedef TYPE_1__ vorbis_info_psy_global ;
struct TYPE_7__ {float rate; TYPE_4__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_8__ {size_t W; TYPE_2__* vi; } ;
typedef TYPE_3__ vorbis_dsp_state ;
struct TYPE_9__ {int* blocksizes; TYPE_1__ psy_g_param; } ;
typedef TYPE_4__ codec_setup_info ;



float FUNC_0(float VAR_0,vorbis_dsp_state *VAR_1){
  vorbis_info *VAR_2=VAR_1->vi;
  codec_setup_info *VAR_3=VAR_2->codec_setup;
  vorbis_info_psy_global *VAR_4=&VAR_3->psy_g_param;

  int VAR_5=VAR_3->blocksizes[VAR_1->W]/2;
  float VAR_6=(float)VAR_5/VAR_2->rate;

  VAR_0+=VAR_6*VAR_4->ampmax_att_per_sec;
  if(VAR_0<-9999)VAR_0=-9999;
  return(VAR_0);
}
