
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_7__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_13__ {TYPE_2__* vi; TYPE_5__* backend_state; } ;
typedef TYPE_3__ vorbis_dsp_state ;
struct TYPE_14__ {int mode; int nW; int * pcm; scalar_t__ pcmend; int eofflag; int sequence; int granulepos; void* lW; scalar_t__ W; int opb; TYPE_3__* vd; } ;
typedef TYPE_4__ vorbis_block ;
struct TYPE_15__ {int modebits; } ;
typedef TYPE_5__ private_state ;
typedef int oggpack_buffer ;
struct TYPE_16__ {int e_o_s; int packetno; int granulepos; int bytes; int packet; } ;
typedef TYPE_6__ ogg_packet ;
struct TYPE_17__ {TYPE_1__** mode_param; } ;
typedef TYPE_7__ codec_setup_info ;
struct TYPE_11__ {scalar_t__ blockflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3(vorbis_block *VAR_2,ogg_packet *VAR_3){
  vorbis_dsp_state *VAR_4=VAR_2->vd;
  private_state *VAR_5=VAR_4->backend_state;
  vorbis_info *VAR_6=VAR_4->vi;
  codec_setup_info *VAR_7=VAR_6->codec_setup;
  oggpack_buffer *VAR_8=&VAR_2->opb;
  int VAR_9;


  FUNC_0(VAR_2);
  FUNC_2(VAR_8,VAR_3->packet,VAR_3->bytes);


  if(FUNC_1(VAR_8,1)!=0){

    return(VAR_1);
  }


  VAR_9=FUNC_1(VAR_8,VAR_5->modebits);
  if(VAR_9==-1)return(VAR_0);

  VAR_2->mode=VAR_9;
  if(!VAR_7->mode_param[VAR_9]){
    return(VAR_0);
  }

  VAR_2->W=VAR_7->mode_param[VAR_9]->blockflag;
  if(VAR_2->W){
    VAR_2->lW=FUNC_1(VAR_8,1);
    VAR_2->nW=FUNC_1(VAR_8,1);
    if(VAR_2->nW==-1) return(VAR_0);
  }else{
    VAR_2->lW=0;
    VAR_2->nW=0;
  }


  VAR_2->granulepos=VAR_3->granulepos;
  VAR_2->sequence=VAR_3->packetno;
  VAR_2->eofflag=VAR_3->e_o_s;


  VAR_2->pcmend=0;
  VAR_2->pcm=((void*)0);

  return(0);
}
