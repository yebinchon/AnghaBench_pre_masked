
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ready_state; long pcm_offset; int current_link; int vd; int vi; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int,int) ;
 int FUNC_1 (int ) ;
 long FUNC_2 (int *,float***) ;
 int FUNC_3 (int *,long) ;

long FUNC_4(OggVorbis_File *VAR_4,float ***VAR_5,int VAR_6,
                   int *VAR_7){

  if(VAR_4->ready_state<VAR_1)return(VAR_2);

  while(1){
    if(VAR_4->ready_state==VAR_0){
      float **VAR_8;
      long VAR_9=FUNC_2(&VAR_4->vd,&VAR_8);
      if(VAR_9){
        int VAR_10=FUNC_1(VAR_4->vi);
        if(VAR_5)*VAR_5=VAR_8;
        if(VAR_9>VAR_6)VAR_9=VAR_6;
        FUNC_3(&VAR_4->vd,VAR_9);
        VAR_4->pcm_offset+=VAR_9<<VAR_10;
        if(VAR_7)*VAR_7=VAR_4->current_link;
        return VAR_9;

      }
    }


    {
      int VAR_11=FUNC_0(VAR_4,((void*)0),1,1);
      if(VAR_11==VAR_3)return(0);
      if(VAR_11<=0)return(VAR_11);
    }

  }
}
