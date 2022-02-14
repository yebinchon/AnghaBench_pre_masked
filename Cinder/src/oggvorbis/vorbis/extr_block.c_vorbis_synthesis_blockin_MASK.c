
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int channels; TYPE_5__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_9__ {int pcm_current; int pcm_returned; size_t lW; size_t W; int nW; int sequence; int granulepos; int centerW; float** pcm; int eofflag; int res_bits; int floor_bits; int time_bits; int glue_bits; TYPE_4__* backend_state; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_10__ {size_t W; int sequence; float** pcm; int granulepos; scalar_t__ eofflag; scalar_t__ res_bits; scalar_t__ floor_bits; scalar_t__ time_bits; scalar_t__ glue_bits; } ;
typedef TYPE_3__ vorbis_block ;
struct TYPE_11__ {int sample_count; scalar_t__* window; } ;
typedef TYPE_4__ private_state ;
struct TYPE_12__ {int halfrate_flag; int* blocksizes; } ;
typedef TYPE_5__ codec_setup_info ;


 int VAR_0 ;
 float* FUNC_0 (scalar_t__) ;

int FUNC_1(vorbis_dsp_state *VAR_1,vorbis_block *VAR_2){
  vorbis_info *VAR_3=VAR_1->vi;
  codec_setup_info *VAR_4=VAR_3->codec_setup;
  private_state *VAR_5=VAR_1->backend_state;
  int VAR_6=VAR_4->halfrate_flag;
  int VAR_7,VAR_8;

  if(!VAR_2)return(VAR_0);
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

    int VAR_9=VAR_4->blocksizes[VAR_1->W]>>(VAR_6+1);
    int VAR_10=VAR_4->blocksizes[0]>>(VAR_6+1);
    int VAR_11=VAR_4->blocksizes[1]>>(VAR_6+1);

    int VAR_12;
    int VAR_13;

    VAR_1->glue_bits+=VAR_2->glue_bits;
    VAR_1->time_bits+=VAR_2->time_bits;
    VAR_1->floor_bits+=VAR_2->floor_bits;
    VAR_1->res_bits+=VAR_2->res_bits;

    if(VAR_1->centerW){
      VAR_12=VAR_11;
      VAR_13=0;
    }else{
      VAR_12=0;
      VAR_13=VAR_11;
    }





    for(VAR_8=0;VAR_8<VAR_3->channels;VAR_8++){

      if(VAR_1->lW){
        if(VAR_1->W){

          const float *VAR_14=FUNC_0(VAR_5->window[1]-VAR_6);
          float *VAR_15=VAR_1->pcm[VAR_8]+VAR_13;
          float *VAR_16=VAR_2->pcm[VAR_8];
          for(VAR_7=0;VAR_7<VAR_11;VAR_7++)
            VAR_15[VAR_7]=VAR_15[VAR_7]*VAR_14[VAR_11-VAR_7-1] + VAR_16[VAR_7]*VAR_14[VAR_7];
        }else{

          const float *VAR_17=FUNC_0(VAR_5->window[0]-VAR_6);
          float *VAR_18=VAR_1->pcm[VAR_8]+VAR_13+VAR_11/2-VAR_10/2;
          float *VAR_19=VAR_2->pcm[VAR_8];
          for(VAR_7=0;VAR_7<VAR_10;VAR_7++)
            VAR_18[VAR_7]=VAR_18[VAR_7]*VAR_17[VAR_10-VAR_7-1] +VAR_19[VAR_7]*VAR_17[VAR_7];
        }
      }else{
        if(VAR_1->W){

          const float *VAR_20=FUNC_0(VAR_5->window[0]-VAR_6);
          float *VAR_21=VAR_1->pcm[VAR_8]+VAR_13;
          float *VAR_22=VAR_2->pcm[VAR_8]+VAR_11/2-VAR_10/2;
          for(VAR_7=0;VAR_7<VAR_10;VAR_7++)
            VAR_21[VAR_7]=VAR_21[VAR_7]*VAR_20[VAR_10-VAR_7-1] +VAR_22[VAR_7]*VAR_20[VAR_7];
          for(;VAR_7<VAR_11/2+VAR_10/2;VAR_7++)
            VAR_21[VAR_7]=VAR_22[VAR_7];
        }else{

          const float *VAR_23=FUNC_0(VAR_5->window[0]-VAR_6);
          float *VAR_24=VAR_1->pcm[VAR_8]+VAR_13;
          float *VAR_25=VAR_2->pcm[VAR_8];
          for(VAR_7=0;VAR_7<VAR_10;VAR_7++)
            VAR_24[VAR_7]=VAR_24[VAR_7]*VAR_23[VAR_10-VAR_7-1] +VAR_25[VAR_7]*VAR_23[VAR_7];
        }
      }


      {
        float *VAR_26=VAR_1->pcm[VAR_8]+VAR_12;
        float *VAR_27=VAR_2->pcm[VAR_8]+VAR_9;
        for(VAR_7=0;VAR_7<VAR_9;VAR_7++)
          VAR_26[VAR_7]=VAR_27[VAR_7];
      }
    }

    if(VAR_1->centerW)
      VAR_1->centerW=0;
    else
      VAR_1->centerW=VAR_11;





    if(VAR_1->pcm_returned==-1){
      VAR_1->pcm_returned=VAR_12;
      VAR_1->pcm_current=VAR_12;
    }else{
      VAR_1->pcm_returned=VAR_13;
      VAR_1->pcm_current=VAR_13+
        ((VAR_4->blocksizes[VAR_1->lW]/4+
        VAR_4->blocksizes[VAR_1->W]/4)>>VAR_6);
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


       long VAR_28=VAR_5->sample_count-VAR_2->granulepos;





        if(VAR_28<0)
          VAR_28=0;

        if(VAR_2->eofflag){
          if(VAR_28 > (VAR_1->pcm_current - VAR_1->pcm_returned)<<VAR_6)
            VAR_28 = (VAR_1->pcm_current - VAR_1->pcm_returned)<<VAR_6;

          VAR_1->pcm_current-=VAR_28>>VAR_6;
        }else{

          VAR_1->pcm_returned+=VAR_28>>VAR_6;
          if(VAR_1->pcm_returned>VAR_1->pcm_current)
            VAR_1->pcm_returned=VAR_1->pcm_current;
        }

      }

    }
  }else{
    VAR_1->granulepos+=VAR_4->blocksizes[VAR_1->lW]/4+VAR_4->blocksizes[VAR_1->W]/4;
    if(VAR_2->granulepos!=-1 && VAR_1->granulepos!=VAR_2->granulepos){

      if(VAR_1->granulepos>VAR_2->granulepos){
        long VAR_29=VAR_1->granulepos-VAR_2->granulepos;

        if(VAR_29)
          if(VAR_2->eofflag){





            if(VAR_29 > (VAR_1->pcm_current - VAR_1->pcm_returned)<<VAR_6)
              VAR_29 = (VAR_1->pcm_current - VAR_1->pcm_returned)<<VAR_6;





            if(VAR_29<0)
              VAR_29=0;

            VAR_1->pcm_current-=VAR_29>>VAR_6;
          }

      }

      VAR_1->granulepos=VAR_2->granulepos;
    }
  }



  if(VAR_2->eofflag)VAR_1->eofflag=1;
  return(0);

}
