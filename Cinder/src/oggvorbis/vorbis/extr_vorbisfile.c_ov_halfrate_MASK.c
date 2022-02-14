
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ogg_int64_t ;
struct TYPE_4__ {scalar_t__ ready_state; int pcm_offset; int links; int * vi; int vb; int vd; } ;
typedef TYPE_1__ OggVorbis_File ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;

int FUNC_4(OggVorbis_File *VAR_2,int VAR_3){
  int VAR_4;
  if(VAR_2->vi==((void*)0))return VAR_0;
  if(VAR_2->ready_state>VAR_1){


    FUNC_2(&VAR_2->vd);
    FUNC_1(&VAR_2->vb);
    VAR_2->ready_state=VAR_1;
    if(VAR_2->pcm_offset>=0){
      ogg_int64_t VAR_5=VAR_2->pcm_offset;
      VAR_2->pcm_offset=-1;
      FUNC_0(VAR_2,VAR_5);
    }
  }

  for(VAR_4=0;VAR_4<VAR_2->links;VAR_4++){
    if(FUNC_3(VAR_2->vi+VAR_4,VAR_3)){
      if(VAR_3) FUNC_4(VAR_2,0);
      return VAR_0;
    }
  }
  return 0;
}
