
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* backend_state; } ;
typedef TYPE_1__ vorbis_dsp_state ;
struct TYPE_11__ {int * packetblob; } ;
typedef TYPE_2__ vorbis_block_internal ;
struct TYPE_12__ {int sequence; int granulepos; int eofflag; TYPE_2__* internal; } ;
typedef TYPE_3__ vorbis_block ;
struct TYPE_15__ {int choice; TYPE_3__* vb; } ;
struct TYPE_13__ {TYPE_6__ bms; } ;
typedef TYPE_4__ private_state ;
struct TYPE_14__ {int packetno; int granulepos; int e_o_s; scalar_t__ b_o_s; int bytes; int packet; } ;
typedef TYPE_5__ ogg_packet ;
typedef TYPE_6__ bitrate_manager_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

int FUNC_3(vorbis_dsp_state *VAR_1,ogg_packet *VAR_2){
  private_state *VAR_3=VAR_1->backend_state;
  bitrate_manager_state *VAR_4=&VAR_3->bms;
  vorbis_block *VAR_5=VAR_4->vb;
  int VAR_6=VAR_0/2;
  if(!VAR_5)return 0;

  if(VAR_2){
    vorbis_block_internal *VAR_7=VAR_5->internal;

    if(FUNC_2(VAR_5))
      VAR_6=VAR_4->choice;

    VAR_2->packet=FUNC_1(VAR_7->packetblob[VAR_6]);
    VAR_2->bytes=FUNC_0(VAR_7->packetblob[VAR_6]);
    VAR_2->b_o_s=0;
    VAR_2->e_o_s=VAR_5->eofflag;
    VAR_2->granulepos=VAR_5->granulepos;
    VAR_2->packetno=VAR_5->sequence;
  }

  VAR_4->vb=0;
  return(1);
}
