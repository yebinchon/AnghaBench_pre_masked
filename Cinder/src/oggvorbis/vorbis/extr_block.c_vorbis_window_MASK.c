
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_7__ {TYPE_3__* backend_state; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_8__ {int* window; } ;
typedef TYPE_3__ private_state ;
struct TYPE_9__ {int halfrate_flag; } ;
typedef TYPE_4__ codec_setup_info ;


 float const* FUNC_0 (int) ;

const float *FUNC_1(vorbis_dsp_state *VAR_0,int VAR_1){
  vorbis_info *VAR_2=VAR_0->vi;
  codec_setup_info *VAR_3=VAR_2->codec_setup;
  int VAR_4=VAR_3->halfrate_flag;
  private_state *VAR_5=VAR_0->backend_state;

  if(VAR_5->window[VAR_1]-1<0)return ((void*)0);
  return FUNC_0(VAR_5->window[VAR_1]-VAR_4);
}
