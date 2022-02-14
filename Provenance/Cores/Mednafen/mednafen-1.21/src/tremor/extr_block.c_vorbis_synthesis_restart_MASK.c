
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
struct TYPE_7__ {int centerW; int pcm_current; int pcm_returned; int granulepos; int sequence; scalar_t__ backend_state; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_8__ {int sample_count; } ;
typedef TYPE_3__ private_state ;
struct TYPE_9__ {int* blocksizes; } ;
typedef TYPE_4__ codec_setup_info ;



int FUNC_0(vorbis_dsp_state *VAR_0){
  vorbis_info *VAR_1=VAR_0->vi;
  codec_setup_info *VAR_2;

  if(!VAR_0->backend_state)return -1;
  if(!VAR_1)return -1;
  VAR_2=VAR_1->codec_setup;
  if(!VAR_2)return -1;

  VAR_0->centerW=VAR_2->blocksizes[1]/2;
  VAR_0->pcm_current=VAR_0->centerW;

  VAR_0->pcm_returned=-1;
  VAR_0->granulepos=-1;
  VAR_0->sequence=-1;
  ((private_state *)(VAR_0->backend_state))->sample_count=-1;

  return(0);
}
