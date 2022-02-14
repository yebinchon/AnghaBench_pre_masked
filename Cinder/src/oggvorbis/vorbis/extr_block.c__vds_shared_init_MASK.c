
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_16__ {int channels; int rate; TYPE_4__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_17__ {int analysisp; int pcm_storage; int centerW; int pcm_current; scalar_t__ W; scalar_t__ lW; void** pcm; void* pcmret; TYPE_1__* vi; TYPE_3__* backend_state; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_18__ {int * residue; int * flr; void* psy; int * fft_look; void** window; void*** transform; void* modebits; } ;
typedef TYPE_3__ private_state ;
typedef int mdct_lookup ;
struct TYPE_19__ {int halfrate_flag; int modes; int* blocksizes; int books; int psys; int floors; int residues; size_t* floor_type; size_t* residue_type; int ** book_param; int * residue_param; int * floor_param; void* fullbooks; TYPE_9__** psy_param; int psy_g_param; } ;
typedef TYPE_4__ codec_setup_info ;
struct TYPE_20__ {size_t blockflag; } ;
struct TYPE_15__ {int (* look ) (TYPE_2__*,int ) ;} ;
struct TYPE_14__ {int (* look ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 TYPE_13__** VAR_1 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int) ;
 TYPE_12__** VAR_2 ;
 int FUNC_2 (void*,TYPE_9__*,int *,int,int ) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (void*,int *) ;
 int FUNC_10 (void*,int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(vorbis_dsp_state *VAR_3,vorbis_info *VAR_4,int VAR_5){
  int VAR_6;
  codec_setup_info *VAR_7=VAR_4->codec_setup;
  private_state *VAR_8=((void*)0);
  int VAR_9;

  if(VAR_7==((void*)0)) return 1;
  VAR_9=VAR_7->halfrate_flag;

  FUNC_6(VAR_3,0,sizeof(*VAR_3));
  VAR_8=VAR_3->backend_state=FUNC_0(1,sizeof(*VAR_8));

  VAR_3->vi=VAR_4;
  VAR_8->modebits=FUNC_4(VAR_7->modes);

  VAR_8->transform[0]=FUNC_0(VAR_0,sizeof(*VAR_8->transform[0]));
  VAR_8->transform[1]=FUNC_0(VAR_0,sizeof(*VAR_8->transform[1]));



  VAR_8->transform[0][0]=FUNC_0(1,sizeof(mdct_lookup));
  VAR_8->transform[1][0]=FUNC_0(1,sizeof(mdct_lookup));
  FUNC_5(VAR_8->transform[0][0],VAR_7->blocksizes[0]>>VAR_9);
  FUNC_5(VAR_8->transform[1][0],VAR_7->blocksizes[1]>>VAR_9);


  VAR_8->window[0]=FUNC_4(VAR_7->blocksizes[0])-6;
  VAR_8->window[1]=FUNC_4(VAR_7->blocksizes[1])-6;

  if(VAR_5){


    FUNC_3(&VAR_8->fft_look[0],VAR_7->blocksizes[0]);
    FUNC_3(&VAR_8->fft_look[1],VAR_7->blocksizes[1]);


    if(!VAR_7->fullbooks){
      VAR_7->fullbooks=FUNC_0(VAR_7->books,sizeof(*VAR_7->fullbooks));
      for(VAR_6=0;VAR_6<VAR_7->books;VAR_6++)
        FUNC_10(VAR_7->fullbooks+VAR_6,VAR_7->book_param[VAR_6]);
    }

    VAR_8->psy=FUNC_0(VAR_7->psys,sizeof(*VAR_8->psy));
    for(VAR_6=0;VAR_6<VAR_7->psys;VAR_6++){
      FUNC_2(VAR_8->psy+VAR_6,
                   VAR_7->psy_param[VAR_6],
                   &VAR_7->psy_g_param,
                   VAR_7->blocksizes[VAR_7->psy_param[VAR_6]->blockflag]/2,
                   VAR_4->rate);
    }

    VAR_3->analysisp=1;
  }else{

    if(!VAR_7->fullbooks){
      VAR_7->fullbooks=FUNC_0(VAR_7->books,sizeof(*VAR_7->fullbooks));
      for(VAR_6=0;VAR_6<VAR_7->books;VAR_6++){
        if(VAR_7->book_param[VAR_6]==((void*)0))
          goto abort_books;
        if(FUNC_9(VAR_7->fullbooks+VAR_6,VAR_7->book_param[VAR_6]))
          goto abort_books;

        FUNC_12(VAR_7->book_param[VAR_6]);
        VAR_7->book_param[VAR_6]=((void*)0);
      }
    }
  }



  VAR_3->pcm_storage=VAR_7->blocksizes[1];
  VAR_3->pcm=FUNC_1(VAR_4->channels*sizeof(*VAR_3->pcm));
  VAR_3->pcmret=FUNC_1(VAR_4->channels*sizeof(*VAR_3->pcmret));
  {
    int VAR_10;
    for(VAR_10=0;VAR_10<VAR_4->channels;VAR_10++)
      VAR_3->pcm[VAR_10]=FUNC_0(VAR_3->pcm_storage,sizeof(*VAR_3->pcm[VAR_10]));
  }



  VAR_3->lW=0;
  VAR_3->W=0;


  VAR_3->centerW=VAR_7->blocksizes[1]/2;

  VAR_3->pcm_current=VAR_3->centerW;


  VAR_8->flr=FUNC_0(VAR_7->floors,sizeof(*VAR_8->flr));
  VAR_8->residue=FUNC_0(VAR_7->residues,sizeof(*VAR_8->residue));

  for(VAR_6=0;VAR_6<VAR_7->floors;VAR_6++)
    VAR_8->flr[VAR_6]=VAR_1[VAR_7->floor_type[VAR_6]]->
      look(VAR_3,VAR_7->floor_param[VAR_6]);

  for(VAR_6=0;VAR_6<VAR_7->residues;VAR_6++)
    VAR_8->residue[VAR_6]=VAR_2[VAR_7->residue_type[VAR_6]]->
      look(VAR_3,VAR_7->residue_param[VAR_6]);

  return 0;
 abort_books:
  for(VAR_6=0;VAR_6<VAR_7->books;VAR_6++){
    if(VAR_7->book_param[VAR_6]!=((void*)0)){
      FUNC_12(VAR_7->book_param[VAR_6]);
      VAR_7->book_param[VAR_6]=((void*)0);
    }
  }
  FUNC_11(VAR_3);
  return -1;
}
