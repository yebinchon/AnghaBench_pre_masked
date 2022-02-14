
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int channels; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_6__ {int pcm_current; int pcm_storage; float** pcm; float** pcmret; TYPE_3__* backend_state; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_7__ {int * header2; int * header1; int * header; } ;
typedef TYPE_3__ private_state ;


 int FUNC_0 (int *) ;
 float* FUNC_1 (float*,int) ;

float **FUNC_2(vorbis_dsp_state *VAR_0, int VAR_1){
  int VAR_2;
  vorbis_info *VAR_3=VAR_0->vi;
  private_state *VAR_4=VAR_0->backend_state;


  if(VAR_4->header)FUNC_0(VAR_4->header);VAR_4->header=((void*)0);
  if(VAR_4->header1)FUNC_0(VAR_4->header1);VAR_4->header1=((void*)0);
  if(VAR_4->header2)FUNC_0(VAR_4->header2);VAR_4->header2=((void*)0);




  if(VAR_0->pcm_current+VAR_1>=VAR_0->pcm_storage){
    VAR_0->pcm_storage=VAR_0->pcm_current+VAR_1*2;

    for(VAR_2=0;VAR_2<VAR_3->channels;VAR_2++){
      VAR_0->pcm[VAR_2]=FUNC_1(VAR_0->pcm[VAR_2],VAR_0->pcm_storage*sizeof(*VAR_0->pcm[VAR_2]));
    }
  }

  for(VAR_2=0;VAR_2<VAR_3->channels;VAR_2++)
    VAR_0->pcmret[VAR_2]=VAR_0->pcm[VAR_2]+VAR_0->pcm_current;

  return(VAR_0->pcmret);
}
