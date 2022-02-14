
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int vorbis_look_mapping ;
struct TYPE_12__ {int channels; scalar_t__ codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_13__ {int pcm_storage; scalar_t__ W; scalar_t__ lW; int ** pcm; int ** pcmret; TYPE_1__* vi; scalar_t__ backend_state; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_14__ {int ** mode; void** window; int modebits; } ;
typedef TYPE_3__ private_state ;
typedef int ogg_int32_t ;
struct TYPE_15__ {int modes; int* blocksizes; int books; int* map_type; int * map_param; TYPE_6__** mode_param; int ** book_param; int * fullbooks; } ;
typedef TYPE_4__ codec_setup_info ;
typedef int codebook ;
struct TYPE_16__ {int mapping; } ;
struct TYPE_11__ {int * (* look ) (TYPE_2__*,TYPE_6__*,int ) ;} ;


 TYPE_10__** VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int * FUNC_5 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(vorbis_dsp_state *VAR_1,vorbis_info *VAR_2){
  int VAR_3;
  codec_setup_info *VAR_4=(codec_setup_info *)VAR_2->codec_setup;
  private_state *VAR_5=((void*)0);

  FUNC_4(VAR_1,0,sizeof(*VAR_1));
  VAR_5=(private_state *)(VAR_1->backend_state=FUNC_0(1,sizeof(*VAR_5)));

  VAR_1->vi=VAR_2;
  VAR_5->modebits=FUNC_3(VAR_4->modes);


  VAR_5->window[0]=FUNC_2(0,VAR_4->blocksizes[0]/2);
  VAR_5->window[1]=FUNC_2(0,VAR_4->blocksizes[1]/2);


  if(!VAR_4->fullbooks){
    VAR_4->fullbooks=(codebook *)FUNC_0(VAR_4->books,sizeof(*VAR_4->fullbooks));
    for(VAR_3=0;VAR_3<VAR_4->books;VAR_3++){
      FUNC_6(VAR_4->fullbooks+VAR_3,VAR_4->book_param[VAR_3]);

      FUNC_7(VAR_4->book_param[VAR_3]);
      VAR_4->book_param[VAR_3]=((void*)0);
    }
  }

  VAR_1->pcm_storage=VAR_4->blocksizes[1];
  VAR_1->pcm=(ogg_int32_t **)FUNC_1(VAR_2->channels*sizeof(*VAR_1->pcm));
  VAR_1->pcmret=(ogg_int32_t **)FUNC_1(VAR_2->channels*sizeof(*VAR_1->pcmret));
  for(VAR_3=0;VAR_3<VAR_2->channels;VAR_3++)
    VAR_1->pcm[VAR_3]=(ogg_int32_t *)FUNC_0(VAR_1->pcm_storage,sizeof(*VAR_1->pcm[VAR_3]));



  VAR_1->lW=0;
  VAR_1->W=0;


  VAR_5->mode=(vorbis_look_mapping **)FUNC_0(VAR_4->modes,sizeof(*VAR_5->mode));
  for(VAR_3=0;VAR_3<VAR_4->modes;VAR_3++){
    int VAR_6=VAR_4->mode_param[VAR_3]->mapping;
    int VAR_7=VAR_4->map_type[VAR_6];
    VAR_5->mode[VAR_3]=VAR_0[VAR_7]->look(VAR_1,VAR_4->mode_param[VAR_3],
      VAR_4->map_param[VAR_6]);
  }
  return(0);
}
