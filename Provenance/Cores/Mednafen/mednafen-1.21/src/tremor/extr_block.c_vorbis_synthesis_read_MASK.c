
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pcm_returned; scalar_t__ pcm_current; } ;
typedef TYPE_1__ vorbis_dsp_state ;


 int VAR_0 ;

int FUNC_0(vorbis_dsp_state *VAR_1,int VAR_2){
  if(VAR_2 && VAR_1->pcm_returned+VAR_2>VAR_1->pcm_current)return(VAR_0);
  VAR_1->pcm_returned+=VAR_2;
  return(0);
}
