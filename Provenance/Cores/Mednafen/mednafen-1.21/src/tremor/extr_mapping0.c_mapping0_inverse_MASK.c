
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int * floor_look; TYPE_1__** floor_func; int * residue_look; TYPE_2__** residue_func; TYPE_4__* map; } ;
typedef TYPE_3__ vorbis_look_mapping0 ;
typedef int vorbis_look_mapping ;
struct TYPE_17__ {int* chmuxlist; int coupling_steps; size_t* coupling_mag; size_t* coupling_ang; int submaps; } ;
typedef TYPE_4__ vorbis_info_mapping0 ;
struct TYPE_18__ {int channels; scalar_t__ codec_setup; } ;
typedef TYPE_5__ vorbis_info ;
struct TYPE_19__ {scalar_t__ backend_state; TYPE_5__* vi; } ;
typedef TYPE_6__ vorbis_dsp_state ;
struct TYPE_20__ {long pcmend; size_t W; int nW; int lW; scalar_t__** pcm; TYPE_6__* vd; } ;
typedef TYPE_7__ vorbis_block ;
struct TYPE_21__ {int window; } ;
typedef TYPE_8__ private_state ;
typedef scalar_t__ ogg_int32_t ;
struct TYPE_22__ {long* blocksizes; } ;
typedef TYPE_9__ codec_setup_info ;
struct TYPE_15__ {int (* inverse ) (TYPE_7__*,int ,scalar_t__**,int*,int) ;} ;
struct TYPE_14__ {int (* inverse2 ) (TYPE_7__*,int ,void*,scalar_t__*) ;void* (* inverse1 ) (TYPE_7__*,int ) ;} ;


 int FUNC_0 (scalar_t__*,int ,long*,int ,size_t,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (long,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int VAR_0 ;
 void* FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_7__*,int ,scalar_t__**,int*,int) ;
 int FUNC_6 (TYPE_7__*,int ,void*,scalar_t__*) ;

__attribute__((used)) static int FUNC_7(vorbis_block *VAR_1,vorbis_look_mapping *VAR_2){
  vorbis_dsp_state *VAR_3=VAR_1->vd;
  vorbis_info *VAR_4=VAR_3->vi;
  codec_setup_info *VAR_5=(codec_setup_info *)VAR_4->codec_setup;
  private_state *VAR_6=(private_state *)VAR_3->backend_state;
  vorbis_look_mapping0 *VAR_7=(vorbis_look_mapping0 *)VAR_2;
  vorbis_info_mapping0 *VAR_8=VAR_7->map;

  int VAR_9,VAR_10;
  long VAR_11=VAR_1->pcmend=VAR_5->blocksizes[VAR_1->W];

  ogg_int32_t **VAR_12=(ogg_int32_t **)FUNC_1(sizeof(*VAR_12)*VAR_4->channels);
  int *VAR_13=(int *)FUNC_1(sizeof(*VAR_13)*VAR_4->channels);

  int *VAR_14 =(int *)FUNC_1(sizeof(*VAR_14)*VAR_4->channels);
  void **VAR_15=(void **)FUNC_1(sizeof(*VAR_15)*VAR_4->channels);







  for(VAR_9=0;VAR_9<VAR_4->channels;VAR_9++){
    int VAR_16=VAR_8->chmuxlist[VAR_9];
    VAR_15[VAR_9]=VAR_7->floor_func[VAR_16]->
      inverse1(VAR_1,VAR_7->floor_look[VAR_16]);
    if(VAR_15[VAR_9])
      VAR_14[VAR_9]=1;
    else
      VAR_14[VAR_9]=0;
    FUNC_3(VAR_1->pcm[VAR_9],0,sizeof(*VAR_1->pcm[VAR_9])*VAR_11/2);
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
    for(VAR_10=0;VAR_10<VAR_4->channels;VAR_10++){
      if(VAR_8->chmuxlist[VAR_10]==VAR_9){
 if(VAR_14[VAR_10])
   VAR_13[VAR_17]=1;
 else
   VAR_13[VAR_17]=0;
 VAR_12[VAR_17++]=VAR_1->pcm[VAR_10];
      }
    }

    VAR_7->residue_func[VAR_9]->inverse(VAR_1,VAR_7->residue_look[VAR_9],
       VAR_12,VAR_13,VAR_17);
  }






  for(VAR_9=VAR_8->coupling_steps-1;VAR_9>=0;VAR_9--){
    ogg_int32_t *VAR_18=VAR_1->pcm[VAR_8->coupling_mag[VAR_9]];
    ogg_int32_t *VAR_19=VAR_1->pcm[VAR_8->coupling_ang[VAR_9]];

    for(VAR_10=0;VAR_10<VAR_11/2;VAR_10++){
      ogg_int32_t VAR_20=VAR_18[VAR_10];
      ogg_int32_t VAR_21=VAR_19[VAR_10];

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





  for(VAR_9=0;VAR_9<VAR_4->channels;VAR_9++){
    ogg_int32_t *VAR_22=VAR_1->pcm[VAR_9];
    int VAR_23=VAR_8->chmuxlist[VAR_9];
    VAR_7->floor_func[VAR_23]->
      inverse2(VAR_1,VAR_7->floor_look[VAR_23],VAR_15[VAR_9],VAR_22);
  }






  for(VAR_9=0;VAR_9<VAR_4->channels;VAR_9++){
    ogg_int32_t *VAR_24=VAR_1->pcm[VAR_9];
    FUNC_2(VAR_11,VAR_24,VAR_24);
  }





  for(VAR_9=0;VAR_9<VAR_4->channels;VAR_9++){
    ogg_int32_t *VAR_25=VAR_1->pcm[VAR_9];
    if(VAR_14[VAR_9])
      FUNC_0(VAR_25,VAR_6->window,VAR_5->blocksizes,VAR_1->lW,VAR_1->W,VAR_1->nW);
    else
      for(VAR_10=0;VAR_10<VAR_11;VAR_10++)
 VAR_25[VAR_10]=0;

  }




  VAR_0+=VAR_4->channels;

  return(0);
}
