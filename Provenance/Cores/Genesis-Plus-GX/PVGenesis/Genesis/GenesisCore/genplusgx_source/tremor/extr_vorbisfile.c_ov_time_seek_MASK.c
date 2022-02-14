
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ogg_int64_t ;
struct TYPE_8__ {scalar_t__ ready_state; int links; scalar_t__* pcmlengths; TYPE_1__* vi; int seekable; } ;
struct TYPE_7__ {scalar_t__ rate; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;

int FUNC_3(OggVorbis_File *VAR_3,ogg_int64_t VAR_4){


  int VAR_5=-1;
  ogg_int64_t VAR_6=FUNC_1(VAR_3,-1);
  ogg_int64_t VAR_7=FUNC_2(VAR_3,-1);

  if(VAR_3->ready_state<VAR_0)return(VAR_1);
  if(!VAR_3->seekable)return(VAR_2);
  if(VAR_4<0 || VAR_4>VAR_7)return(VAR_1);


  for(VAR_5=VAR_3->links-1;VAR_5>=0;VAR_5--){
    VAR_6-=VAR_3->pcmlengths[VAR_5*2+1];
    VAR_7-=FUNC_2(VAR_3,VAR_5);
    if(VAR_4>=VAR_7)break;
  }


  {
    ogg_int64_t VAR_8=VAR_6+(VAR_4-VAR_7)*VAR_3->vi[VAR_5].rate/1000;
    return(FUNC_0(VAR_3,VAR_8));
  }
}
