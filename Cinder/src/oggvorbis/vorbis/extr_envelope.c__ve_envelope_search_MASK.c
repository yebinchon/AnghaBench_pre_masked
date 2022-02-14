
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vorbis_info_psy_global ;
struct TYPE_9__ {TYPE_5__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_10__ {int pcm_current; float** pcm; long centerW; size_t W; scalar_t__ backend_state; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_11__ {TYPE_4__* ve; } ;
typedef TYPE_3__ private_state ;
struct TYPE_12__ {int current; int searchstep; int storage; int* mark; int stretch; long ch; long cursor; long curmark; TYPE_8__* filter; int band; } ;
typedef TYPE_4__ envelope_lookup ;
struct TYPE_13__ {int* blocksizes; int psy_g_param; } ;
typedef TYPE_5__ codec_setup_info ;
struct TYPE_14__ {double* markers; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,float*,long,int ,int ,int) ;
 int* FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_4__*,int *,float*,int ,TYPE_8__*) ;
 float* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int,int) ;
 int FUNC_5 (float*,int ,int) ;
 int VAR_4 ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

long FUNC_7(vorbis_dsp_state *VAR_7){
  vorbis_info *VAR_8=VAR_7->vi;
  codec_setup_info *VAR_9=VAR_8->codec_setup;
  vorbis_info_psy_global *VAR_10=&VAR_9->psy_g_param;
  envelope_lookup *VAR_11=((private_state *)(VAR_7->backend_state))->ve;
  long VAR_12,VAR_13;

  int VAR_14=VAR_11->current/VAR_11->searchstep;
  int VAR_15=VAR_7->pcm_current/VAR_11->searchstep-VAR_3;
  if(VAR_14<0)VAR_14=0;


  if(VAR_15+VAR_3+VAR_2>VAR_11->storage){
    VAR_11->storage=VAR_15+VAR_3+VAR_2;
    VAR_11->mark=FUNC_1(VAR_11->mark,VAR_11->storage*sizeof(*VAR_11->mark));
  }

  for(VAR_13=VAR_14;VAR_13<VAR_15;VAR_13++){
    int VAR_16=0;

    VAR_11->stretch++;
    if(VAR_11->stretch>VAR_1*2)
      VAR_11->stretch=VAR_1*2;

    for(VAR_12=0;VAR_12<VAR_11->ch;VAR_12++){
      float *VAR_17=VAR_7->pcm[VAR_12]+VAR_11->searchstep*(VAR_13);
      VAR_16|=FUNC_2(VAR_11,VAR_10,VAR_17,VAR_11->band,VAR_11->filter+VAR_12*VAR_0);
    }

    VAR_11->mark[VAR_13+VAR_2]=0;
    if(VAR_16&1){
      VAR_11->mark[VAR_13]=1;
      VAR_11->mark[VAR_13+1]=1;
    }

    if(VAR_16&2){
      VAR_11->mark[VAR_13]=1;
      if(VAR_13>0)VAR_11->mark[VAR_13-1]=1;
    }

    if(VAR_16&4)VAR_11->stretch=-1;
  }

  VAR_11->current=VAR_15*VAR_11->searchstep;

  {
    long VAR_18=VAR_7->centerW;
    long VAR_19=
      VAR_18+
      VAR_9->blocksizes[VAR_7->W]/4+
      VAR_9->blocksizes[1]/2+
      VAR_9->blocksizes[0]/4;

    VAR_13=VAR_11->cursor;

    while(VAR_13<VAR_11->current-(VAR_11->searchstep)){

      if(VAR_13>=VAR_19)return(1);

      VAR_11->cursor=VAR_13;

      if(VAR_11->mark[VAR_13/VAR_11->searchstep]){
        if(VAR_13>VAR_18){
          VAR_11->curmark=VAR_13;
          if(VAR_13>=VAR_19)return(1);
          return(0);
        }
      }
      VAR_13+=VAR_11->searchstep;
    }
  }

  return(-1);
}
