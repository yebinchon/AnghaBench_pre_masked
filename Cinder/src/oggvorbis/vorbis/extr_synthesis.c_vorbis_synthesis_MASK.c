
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_16__ {int channels; TYPE_7__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_17__ {TYPE_2__* vi; TYPE_5__* backend_state; } ;
typedef TYPE_3__ vorbis_dsp_state ;
struct TYPE_18__ {int mode; int W; int nW; int pcmend; void** pcm; int eofflag; int sequence; int granulepos; void* lW; int opb; TYPE_3__* vd; } ;
typedef TYPE_4__ vorbis_block ;
struct TYPE_19__ {int modebits; } ;
typedef TYPE_5__ private_state ;
typedef int oggpack_buffer ;
struct TYPE_20__ {int e_o_s; int packetno; int granulepos; int bytes; int packet; } ;
typedef TYPE_6__ ogg_packet ;
struct TYPE_21__ {int* blocksizes; int* map_type; TYPE_1__** mode_param; int * map_param; } ;
typedef TYPE_7__ codec_setup_info ;
struct TYPE_15__ {int blockflag; size_t mapping; } ;
struct TYPE_14__ {int (* inverse ) (TYPE_4__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_13__** VAR_2 ;
 void* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;

int FUNC_5(vorbis_block *VAR_3,ogg_packet *VAR_4){
  vorbis_dsp_state *VAR_5= VAR_3 ? VAR_3->vd : 0;
  private_state *VAR_6= VAR_5 ? VAR_5->backend_state : 0;
  vorbis_info *VAR_7= VAR_5 ? VAR_5->vi : 0;
  codec_setup_info *VAR_8= VAR_7 ? VAR_7->codec_setup : 0;
  oggpack_buffer *VAR_9=VAR_3 ? &VAR_3->opb : 0;
  int VAR_10,VAR_11,VAR_12;

  if (!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8 || !VAR_9) {
    return VAR_0;
  }


  FUNC_1(VAR_3);
  FUNC_3(VAR_9,VAR_4->packet,VAR_4->bytes);


  if(FUNC_2(VAR_9,1)!=0){

    return(VAR_1);
  }


  VAR_11=FUNC_2(VAR_9,VAR_6->modebits);
  if(VAR_11==-1){
    return(VAR_0);
  }

  VAR_3->mode=VAR_11;
  if(!VAR_8->mode_param[VAR_11]){
    return(VAR_0);
  }

  VAR_3->W=VAR_8->mode_param[VAR_11]->blockflag;
  if(VAR_3->W){



    VAR_3->lW=FUNC_2(VAR_9,1);
    VAR_3->nW=FUNC_2(VAR_9,1);
    if(VAR_3->nW==-1){
      return(VAR_0);
    }
  }else{
    VAR_3->lW=0;
    VAR_3->nW=0;
  }


  VAR_3->granulepos=VAR_4->granulepos;
  VAR_3->sequence=VAR_4->packetno;
  VAR_3->eofflag=VAR_4->e_o_s;


  VAR_3->pcmend=VAR_8->blocksizes[VAR_3->W];
  VAR_3->pcm=FUNC_0(VAR_3,sizeof(*VAR_3->pcm)*VAR_7->channels);
  for(VAR_12=0;VAR_12<VAR_7->channels;VAR_12++)
    VAR_3->pcm[VAR_12]=FUNC_0(VAR_3,VAR_3->pcmend*sizeof(*VAR_3->pcm[VAR_12]));


  VAR_10=VAR_8->map_type[VAR_8->mode_param[VAR_11]->mapping];

  return(VAR_2[VAR_10]->inverse(VAR_3,VAR_8->map_param[VAR_8->mode_param[VAR_11]->
                                                   mapping]));
}
