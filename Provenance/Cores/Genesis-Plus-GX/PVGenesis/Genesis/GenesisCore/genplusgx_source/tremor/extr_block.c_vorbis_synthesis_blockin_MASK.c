
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int channels; scalar_t__ codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_9__ {int pcm_current; int pcm_returned; size_t lW; size_t W; int nW; int sequence; int granulepos; int centerW; int eofflag; scalar_t__** pcm; TYPE_4__* backend_state; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_10__ {size_t W; int sequence; int granulepos; scalar_t__ eofflag; scalar_t__** pcm; } ;
typedef TYPE_3__ vorbis_block ;
struct TYPE_11__ {int sample_count; } ;
typedef TYPE_4__ private_state ;
typedef scalar_t__ ogg_int32_t ;
struct TYPE_12__ {int* blocksizes; } ;
typedef TYPE_5__ codec_setup_info ;


 int VAR_0 ;

int FUNC_0(vorbis_dsp_state *VAR_1,vorbis_block *VAR_2){
  vorbis_info *VAR_3=VAR_1->vi;
  codec_setup_info *VAR_4=(codec_setup_info *)VAR_3->codec_setup;
  private_state *VAR_5=VAR_1->backend_state;
  int VAR_6,VAR_7;

  if(VAR_1->pcm_current>VAR_1->pcm_returned && VAR_1->pcm_returned!=-1)return(VAR_0);

  VAR_1->lW=VAR_1->W;
  VAR_1->W=VAR_2->W;
  VAR_1->nW=-1;

  if((VAR_1->sequence==-1)||
     (VAR_1->sequence+1 != VAR_2->sequence)){
    VAR_1->granulepos=-1;
    VAR_5->sample_count=-1;
  }

  VAR_1->sequence=VAR_2->sequence;

  if(VAR_2->pcm){

    int VAR_8=VAR_4->blocksizes[VAR_1->W]/2;
    int VAR_9=VAR_4->blocksizes[0]/2;
    int VAR_10=VAR_4->blocksizes[1]/2;

    int VAR_11;
    int VAR_12;

    if(VAR_1->centerW){
      VAR_11=VAR_10;
      VAR_12=0;
    }else{
      VAR_11=0;
      VAR_12=VAR_10;
    }







    for(VAR_7=0;VAR_7<VAR_3->channels;VAR_7++){

      if(VAR_1->lW){
 if(VAR_1->W){

   ogg_int32_t *VAR_13=VAR_1->pcm[VAR_7]+VAR_12;
   ogg_int32_t *VAR_14=VAR_2->pcm[VAR_7];
   for(VAR_6=0;VAR_6<VAR_10;VAR_6++)
     VAR_13[VAR_6]+=VAR_14[VAR_6];
 }else{

   ogg_int32_t *VAR_15=VAR_1->pcm[VAR_7]+VAR_12+VAR_10/2-VAR_9/2;
   ogg_int32_t *VAR_16=VAR_2->pcm[VAR_7];
   for(VAR_6=0;VAR_6<VAR_9;VAR_6++)
     VAR_15[VAR_6]+=VAR_16[VAR_6];
 }
      }else{
 if(VAR_1->W){

   ogg_int32_t *VAR_17=VAR_1->pcm[VAR_7]+VAR_12;
   ogg_int32_t *VAR_18=VAR_2->pcm[VAR_7]+VAR_10/2-VAR_9/2;
   for(VAR_6=0;VAR_6<VAR_9;VAR_6++)
     VAR_17[VAR_6]+=VAR_18[VAR_6];
   for(;VAR_6<VAR_10/2+VAR_9/2;VAR_6++)
     VAR_17[VAR_6]=VAR_18[VAR_6];
 }else{

   ogg_int32_t *VAR_19=VAR_1->pcm[VAR_7]+VAR_12;
   ogg_int32_t *VAR_20=VAR_2->pcm[VAR_7];
   for(VAR_6=0;VAR_6<VAR_9;VAR_6++)
     VAR_19[VAR_6]+=VAR_20[VAR_6];
 }
      }


      {
 ogg_int32_t *VAR_21=VAR_1->pcm[VAR_7]+VAR_11;
 ogg_int32_t *VAR_22=VAR_2->pcm[VAR_7]+VAR_8;
 for(VAR_6=0;VAR_6<VAR_8;VAR_6++)
   VAR_21[VAR_6]=VAR_22[VAR_6];
      }
    }

    if(VAR_1->centerW)
      VAR_1->centerW=0;
    else
      VAR_1->centerW=VAR_10;





    if(VAR_1->pcm_returned==-1){
      VAR_1->pcm_returned=VAR_11;
      VAR_1->pcm_current=VAR_11;
    }else{
      VAR_1->pcm_returned=VAR_12;
      VAR_1->pcm_current=VAR_12+
 VAR_4->blocksizes[VAR_1->lW]/4+
 VAR_4->blocksizes[VAR_1->W]/4;
    }

  }
  if(VAR_5->sample_count==-1){
    VAR_5->sample_count=0;
  }else{
    VAR_5->sample_count+=VAR_4->blocksizes[VAR_1->lW]/4+VAR_4->blocksizes[VAR_1->W]/4;
  }

  if(VAR_1->granulepos==-1){
    if(VAR_2->granulepos!=-1){

      VAR_1->granulepos=VAR_2->granulepos;


      if(VAR_5->sample_count>VAR_1->granulepos){


 if(VAR_2->eofflag){






   VAR_1->pcm_current-=(VAR_5->sample_count-VAR_1->granulepos);
 }else{

   VAR_1->pcm_returned+=(VAR_5->sample_count-VAR_1->granulepos);
   if(VAR_1->pcm_returned>VAR_1->pcm_current)
     VAR_1->pcm_returned=VAR_1->pcm_current;
 }

      }

    }
  }else{
    VAR_1->granulepos+=VAR_4->blocksizes[VAR_1->lW]/4+VAR_4->blocksizes[VAR_1->W]/4;
    if(VAR_2->granulepos!=-1 && VAR_1->granulepos!=VAR_2->granulepos){

      if(VAR_1->granulepos>VAR_2->granulepos){
 long VAR_23=VAR_1->granulepos-VAR_2->granulepos;

 if(VAR_23)
   if(VAR_2->eofflag){

     VAR_1->pcm_current-=VAR_23;
   }

      }

      VAR_1->granulepos=VAR_2->granulepos;
    }
  }



  if(VAR_2->eofflag)VAR_1->eofflag=1;
  return(0);
}
