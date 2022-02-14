
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int channels; } ;
typedef TYPE_1__ vorbis_info ;
typedef int vorbis_dsp_state ;
struct TYPE_7__ {int vd; } ;
typedef TYPE_2__ OggVorbis_File ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int,int ) ;
 int FUNC_1 (float*,float*,int) ;
 int FUNC_2 (float*,int ,int) ;
 int FUNC_3 (int *,float***) ;
 int FUNC_4 (int *,float***) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(OggVorbis_File *VAR_1,vorbis_info *VAR_2,vorbis_dsp_state *VAR_3,
                       float **VAR_4,int VAR_5){
  int VAR_6=0,VAR_7;
  float **VAR_8;


  while(VAR_6<VAR_5){
    int VAR_9=FUNC_4(VAR_3,&VAR_8);
    if(VAR_9){
      if(VAR_9>VAR_5-VAR_6)VAR_9=VAR_5-VAR_6;
      for(VAR_7=0;VAR_7<VAR_2->channels;VAR_7++)
        FUNC_1(VAR_4[VAR_7]+VAR_6,VAR_8[VAR_7],sizeof(**VAR_8)*VAR_9);
      VAR_6+=VAR_9;
      FUNC_5(VAR_3,VAR_9);
    }else{

      int VAR_10=FUNC_0(VAR_1,((void*)0),1,0);
      if(VAR_10==VAR_0)break;
    }
  }
  if(VAR_6<VAR_5){



    int VAR_11=FUNC_3(&VAR_1->vd,&VAR_8);
    if(VAR_11==0){
      for(VAR_7=0;VAR_7<VAR_2->channels;VAR_7++)
        FUNC_2(VAR_4[VAR_7]+VAR_6,0,sizeof(**VAR_8)*VAR_5-VAR_6);
      VAR_6=VAR_5;
    }else{
      if(VAR_11>VAR_5-VAR_6)VAR_11=VAR_5-VAR_6;
      for(VAR_7=0;VAR_7<VAR_2->channels;VAR_7++)
        FUNC_1(VAR_4[VAR_7]+VAR_6,VAR_8[VAR_7],sizeof(**VAR_8)*VAR_11);
      VAR_6+=VAR_11;
    }
  }
}
