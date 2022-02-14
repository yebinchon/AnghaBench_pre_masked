
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ready_state; int links; TYPE_1__* vi; scalar_t__* pcmlengths; int seekable; } ;
struct TYPE_4__ {double rate; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;

double FUNC_0(OggVorbis_File *VAR_2,int VAR_3){
  if(VAR_2->ready_state<VAR_0)return(VAR_1);
  if(!VAR_2->seekable || VAR_3>=VAR_2->links)return(VAR_1);
  if(VAR_3<0){
    double VAR_4=0;
    int VAR_5;
    for(VAR_5=0;VAR_5<VAR_2->links;VAR_5++)
      VAR_4+=FUNC_0(VAR_2,VAR_5);
    return(VAR_4);
  }else{
    return((double)(VAR_2->pcmlengths[VAR_3*2+1])/VAR_2->vi[VAR_3].rate);
  }
}
