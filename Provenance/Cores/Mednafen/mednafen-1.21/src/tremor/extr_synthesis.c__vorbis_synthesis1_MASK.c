
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


struct TYPE_16__ {int channels; scalar_t__ codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_17__ {TYPE_2__* vi; scalar_t__ backend_state; } ;
typedef TYPE_3__ vorbis_dsp_state ;
struct TYPE_18__ {int mode; int W; int nW; int pcmend; int ** pcm; int eofflag; int sequence; int granulepos; void* lW; int opb; TYPE_3__* vd; } ;
typedef TYPE_4__ vorbis_block ;
struct TYPE_19__ {int modebits; int * mode; } ;
typedef TYPE_5__ private_state ;
typedef int oggpack_buffer ;
struct TYPE_20__ {int e_o_s; int packetno; int granulepos; int bytes; int packet; } ;
typedef TYPE_6__ ogg_packet ;
typedef int ogg_int32_t ;
struct TYPE_21__ {int* blocksizes; int* map_type; TYPE_1__** mode_param; } ;
typedef TYPE_7__ codec_setup_info ;
struct TYPE_15__ {int blockflag; size_t mapping; } ;
struct TYPE_14__ {int (* inverse ) (TYPE_4__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_13__** VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_5(vorbis_block *VAR_3,ogg_packet *VAR_4,int VAR_5){
  vorbis_dsp_state *VAR_6= VAR_3 ? VAR_3->vd : 0;
  private_state *VAR_7= VAR_6 ? (private_state *)VAR_6->backend_state: 0;
  vorbis_info *VAR_8= VAR_6 ? VAR_6->vi : 0;
  codec_setup_info *VAR_9= VAR_8 ? (codec_setup_info *)VAR_8->codec_setup : 0;
  oggpack_buffer *VAR_10=VAR_3 ? &VAR_3->opb : 0;
  int VAR_11,VAR_12,VAR_13;

  if (!VAR_6 || !VAR_7 || !VAR_8 || !VAR_9 || !VAR_10) {
    return VAR_0;
  }


  FUNC_1(VAR_3);
  FUNC_3(VAR_10,VAR_4->packet,VAR_4->bytes);


  if(FUNC_2(VAR_10,1)!=0){

    return(VAR_1);
  }


  VAR_12=FUNC_2(VAR_10,VAR_7->modebits);
  if(VAR_12==-1)return(VAR_0);

  VAR_3->mode=VAR_12;
  if(!VAR_9->mode_param[VAR_12]){
    return(VAR_0);
  }

  VAR_3->W=VAR_9->mode_param[VAR_12]->blockflag;
  if(VAR_3->W){
    VAR_3->lW=FUNC_2(VAR_10,1);
    VAR_3->nW=FUNC_2(VAR_10,1);
    if(VAR_3->nW==-1) return(VAR_0);
  }else{
    VAR_3->lW=0;
    VAR_3->nW=0;
  }


  VAR_3->granulepos=VAR_4->granulepos;
  VAR_3->sequence=VAR_4->packetno;
  VAR_3->eofflag=VAR_4->e_o_s;

  if(VAR_5){

    VAR_3->pcmend=VAR_9->blocksizes[VAR_3->W];
    VAR_3->pcm=(ogg_int32_t **)FUNC_0(VAR_3,sizeof(*VAR_3->pcm)*VAR_8->channels);
    for(VAR_13=0;VAR_13<VAR_8->channels;VAR_13++)
      VAR_3->pcm[VAR_13]=(ogg_int32_t *)FUNC_0(VAR_3,VAR_3->pcmend*sizeof(*VAR_3->pcm[VAR_13]));


    VAR_11=VAR_9->map_type[VAR_9->mode_param[VAR_12]->mapping];

    return(VAR_2[VAR_11]->inverse(VAR_3,VAR_7->mode[VAR_12]));
  }else{

    VAR_3->pcmend=0;
    VAR_3->pcm=((void*)0);

    return(0);
  }
}
