
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* backend_state; } ;
typedef TYPE_1__ vorbis_dsp_state ;
struct TYPE_7__ {TYPE_1__* vd; } ;
typedef TYPE_2__ vorbis_block ;
struct TYPE_9__ {scalar_t__ managed; } ;
struct TYPE_8__ {TYPE_4__ bms; } ;
typedef TYPE_3__ private_state ;
typedef TYPE_4__ bitrate_manager_state ;



int FUNC_0(vorbis_block *VAR_0){
  vorbis_dsp_state *VAR_1=VAR_0->vd;
  private_state *VAR_2=VAR_1->backend_state;
  bitrate_manager_state *VAR_3=&VAR_2->bms;

  if(VAR_3 && VAR_3->managed)return(1);
  return(0);
}
