
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_15__ {int* chmuxlist; size_t* floorsubmap; int coupling_steps; size_t* coupling_mag; size_t* coupling_ang; int submaps; size_t* residuesubmap; } ;
typedef TYPE_1__ vorbis_info_mapping0 ;
typedef int vorbis_info_mapping ;
struct TYPE_16__ {int channels; TYPE_6__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_17__ {TYPE_5__* backend_state; TYPE_2__* vi; } ;
typedef TYPE_3__ vorbis_dsp_state ;
struct TYPE_18__ {long pcmend; size_t W; float** pcm; TYPE_3__* vd; } ;
typedef TYPE_4__ vorbis_block ;
struct TYPE_19__ {int ** transform; int * flr; int * residue; } ;
typedef TYPE_5__ private_state ;
struct TYPE_20__ {long* blocksizes; size_t* floor_type; size_t* residue_type; } ;
typedef TYPE_6__ codec_setup_info ;
struct TYPE_14__ {int (* inverse2 ) (TYPE_4__*,int ,void*,float*) ;void* (* inverse1 ) (TYPE_4__*,int ) ;} ;
struct TYPE_13__ {int (* inverse ) (TYPE_4__*,int ,float**,int*,int) ;} ;


 TYPE_12__** VAR_0 ;
 TYPE_11__** VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,float*,float*) ;
 int FUNC_2 (float*,int ,int) ;
 void* FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ,float**,int*,int) ;
 int FUNC_5 (TYPE_4__*,int ,void*,float*) ;

__attribute__((used)) static int FUNC_6(vorbis_block *VAR_2,vorbis_info_mapping *VAR_3){
  vorbis_dsp_state *VAR_4=VAR_2->vd;
  vorbis_info *VAR_5=VAR_4->vi;
  codec_setup_info *VAR_6=VAR_5->codec_setup;
  private_state *VAR_7=VAR_4->backend_state;
  vorbis_info_mapping0 *VAR_8=(vorbis_info_mapping0 *)VAR_3;

  int VAR_9,VAR_10;
  long VAR_11=VAR_2->pcmend=VAR_6->blocksizes[VAR_2->W];

  float **VAR_12=FUNC_0(sizeof(*VAR_12)*VAR_5->channels);
  int *VAR_13=FUNC_0(sizeof(*VAR_13)*VAR_5->channels);

  int *VAR_14 =FUNC_0(sizeof(*VAR_14)*VAR_5->channels);
  void **VAR_15=FUNC_0(sizeof(*VAR_15)*VAR_5->channels);


  for(VAR_9=0;VAR_9<VAR_5->channels;VAR_9++){
    int VAR_16=VAR_8->chmuxlist[VAR_9];
    VAR_15[VAR_9]=VAR_0[VAR_6->floor_type[VAR_8->floorsubmap[VAR_16]]]->
      inverse1(VAR_2,VAR_7->flr[VAR_8->floorsubmap[VAR_16]]);
    if(VAR_15[VAR_9])
      VAR_14[VAR_9]=1;
    else
      VAR_14[VAR_9]=0;
    FUNC_2(VAR_2->pcm[VAR_9],0,sizeof(*VAR_2->pcm[VAR_9])*VAR_11/2);
  }


  for(VAR_9=0;VAR_9<VAR_8->coupling_steps;VAR_9++){
    if(VAR_14[VAR_8->coupling_mag[VAR_9]] ||
       VAR_14[VAR_8->coupling_ang[VAR_9]]){
      VAR_14[VAR_8->coupling_mag[VAR_9]]=1;
      VAR_14[VAR_8->coupling_ang[VAR_9]]=1;
    }
  }


  for(VAR_9=0;VAR_9<VAR_8->submaps;VAR_9++){
    int VAR_17=0;
    for(VAR_10=0;VAR_10<VAR_5->channels;VAR_10++){
      if(VAR_8->chmuxlist[VAR_10]==VAR_9){
        if(VAR_14[VAR_10])
          VAR_13[VAR_17]=1;
        else
          VAR_13[VAR_17]=0;
        VAR_12[VAR_17++]=VAR_2->pcm[VAR_10];
      }
    }

    VAR_1[VAR_6->residue_type[VAR_8->residuesubmap[VAR_9]]]->
      inverse(VAR_2,VAR_7->residue[VAR_8->residuesubmap[VAR_9]],
              VAR_12,VAR_13,VAR_17);
  }


  for(VAR_9=VAR_8->coupling_steps-1;VAR_9>=0;VAR_9--){
    float *VAR_18=VAR_2->pcm[VAR_8->coupling_mag[VAR_9]];
    float *VAR_19=VAR_2->pcm[VAR_8->coupling_ang[VAR_9]];

    for(VAR_10=0;VAR_10<VAR_11/2;VAR_10++){
      float VAR_20=VAR_18[VAR_10];
      float VAR_21=VAR_19[VAR_10];

      if(VAR_20>0)
        if(VAR_21>0){
          VAR_18[VAR_10]=VAR_20;
          VAR_19[VAR_10]=VAR_20-VAR_21;
        }else{
          VAR_19[VAR_10]=VAR_20;
          VAR_18[VAR_10]=VAR_20+VAR_21;
        }
      else
        if(VAR_21>0){
          VAR_18[VAR_10]=VAR_20;
          VAR_19[VAR_10]=VAR_20+VAR_21;
        }else{
          VAR_19[VAR_10]=VAR_20;
          VAR_18[VAR_10]=VAR_20-VAR_21;
        }
    }
  }


  for(VAR_9=0;VAR_9<VAR_5->channels;VAR_9++){
    float *VAR_22=VAR_2->pcm[VAR_9];
    int VAR_23=VAR_8->chmuxlist[VAR_9];
    VAR_0[VAR_6->floor_type[VAR_8->floorsubmap[VAR_23]]]->
      inverse2(VAR_2,VAR_7->flr[VAR_8->floorsubmap[VAR_23]],
               VAR_15[VAR_9],VAR_22);
  }



  for(VAR_9=0;VAR_9<VAR_5->channels;VAR_9++){
    float *VAR_24=VAR_2->pcm[VAR_9];
    FUNC_1(VAR_7->transform[VAR_2->W][0],VAR_24,VAR_24);
  }


  return(0);
}
