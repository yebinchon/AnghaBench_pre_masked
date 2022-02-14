
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_8__ {long centerW; size_t W; size_t lW; size_t nW; TYPE_1__* vi; scalar_t__ backend_state; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_9__ {TYPE_4__* ve; } ;
typedef TYPE_3__ private_state ;
struct TYPE_10__ {long curmark; long searchstep; scalar_t__* mark; } ;
typedef TYPE_4__ envelope_lookup ;
struct TYPE_11__ {int* blocksizes; } ;
typedef TYPE_5__ codec_setup_info ;



int FUNC_0(vorbis_dsp_state *VAR_0){
  envelope_lookup *VAR_1=((private_state *)(VAR_0->backend_state))->ve;
  vorbis_info *VAR_2=VAR_0->vi;
  codec_setup_info *VAR_3=VAR_2->codec_setup;
  long VAR_4=VAR_0->centerW;
  long VAR_5=VAR_4-VAR_3->blocksizes[VAR_0->W]/4;
  long VAR_6=VAR_4+VAR_3->blocksizes[VAR_0->W]/4;
  if(VAR_0->W){
    VAR_5-=VAR_3->blocksizes[VAR_0->lW]/4;
    VAR_6+=VAR_3->blocksizes[VAR_0->nW]/4;
  }else{
    VAR_5-=VAR_3->blocksizes[0]/4;
    VAR_6+=VAR_3->blocksizes[0]/4;
  }

  if(VAR_1->curmark>=VAR_5 && VAR_1->curmark<VAR_6)return(1);
  {
    long VAR_7=VAR_5/VAR_1->searchstep;
    long VAR_8=VAR_6/VAR_1->searchstep;
    long VAR_9;
    for(VAR_9=VAR_7;VAR_9<VAR_8;VAR_9++)
      if(VAR_1->mark[VAR_9])return(1);
  }
  return(0);
}
