
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ogg_int32_t ;
struct TYPE_7__ {long channels; } ;
struct TYPE_6__ {scalar_t__ ready_state; long pcm_offset; int current_link; int vd; } ;
typedef TYPE_1__ OggVorbis_File ;


 short FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int) ;
 long FUNC_3 (int *,int***) ;
 int FUNC_4 (int *,long) ;

long FUNC_5(OggVorbis_File *VAR_4,char *VAR_5,int VAR_6,int *VAR_7){
  int VAR_8,VAR_9;

  ogg_int32_t **VAR_10;
  long VAR_11;

  if(VAR_4->ready_state<VAR_1)return(VAR_2);

  while(1){
    if(VAR_4->ready_state==VAR_0){
      VAR_11=FUNC_3(&VAR_4->vd,&VAR_10);
      if(VAR_11)break;
    }


    {
      int VAR_12=FUNC_1(VAR_4,((void*)0),1,1);
      if(VAR_12==VAR_3)
        return(0);
      if(VAR_12<=0)
        return(VAR_12);
    }

  }

  if(VAR_11>0){



    long VAR_13=FUNC_2(VAR_4,-1)->channels;

    if(VAR_11>(VAR_6/(2*VAR_13)))
      VAR_11=VAR_6/(2*VAR_13);

    for(VAR_8=0;VAR_8<VAR_13;VAR_8++) {
      ogg_int32_t *VAR_14=VAR_10[VAR_8];
      short *VAR_15=((short *)VAR_5)+VAR_8;
      for(VAR_9=0;VAR_9<VAR_11;VAR_9++) {
        *VAR_15=FUNC_0(VAR_14[VAR_9]>>9);
        VAR_15+=VAR_13;
      }
    }

    FUNC_4(&VAR_4->vd,VAR_11);
    VAR_4->pcm_offset+=VAR_11;
    if(VAR_7)*VAR_7=VAR_4->current_link;
    return(VAR_11*2*VAR_13);
  }else{
    return(VAR_11);
  }
}
