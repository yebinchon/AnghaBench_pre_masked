
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vorbis_dsp_state ;
struct TYPE_4__ {scalar_t__ ready_state; int vd; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(OggVorbis_File *VAR_2){
  vorbis_dsp_state *VAR_3=&VAR_2->vd;
  while(1){
    if(VAR_2->ready_state==VAR_0)
      if(FUNC_1(VAR_3,((void*)0)))break;


    {
      int VAR_4=FUNC_0(VAR_2,((void*)0),1,0);
      if(VAR_4<0 && VAR_4!=VAR_1)return(VAR_4);
    }
  }
  return 0;
}
