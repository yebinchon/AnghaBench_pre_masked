
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ogg_int64_t ;
struct TYPE_7__ {scalar_t__ ready_state; int links; scalar_t__* pcmlengths; scalar_t__ pcm_offset; TYPE_1__* vi; scalar_t__ seekable; } ;
struct TYPE_6__ {double rate; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 double FUNC_1 (TYPE_2__*,int) ;

double FUNC_2(OggVorbis_File *VAR_2){
  int VAR_3=0;
  ogg_int64_t VAR_4=0;
  double VAR_5=0.f;

  if(VAR_2->ready_state<VAR_0)return(VAR_1);
  if(VAR_2->seekable){
    VAR_4=FUNC_0(VAR_2,-1);
    VAR_5=FUNC_1(VAR_2,-1);


    for(VAR_3=VAR_2->links-1;VAR_3>=0;VAR_3--){
      VAR_4-=VAR_2->pcmlengths[VAR_3*2+1];
      VAR_5-=FUNC_1(VAR_2,VAR_3);
      if(VAR_2->pcm_offset>=VAR_4)break;
    }
  }

  return((double)VAR_5+(double)(VAR_2->pcm_offset-VAR_4)/VAR_2->vi[VAR_3].rate);
}
