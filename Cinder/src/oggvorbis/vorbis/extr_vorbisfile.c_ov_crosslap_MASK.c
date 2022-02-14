
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int channels; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_14__ {scalar_t__ ready_state; int vd; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,float*,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int *,float**,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (float**,float**,int,int,int,int,float const*,float const*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *,float***) ;
 float* FUNC_10 (int *,int ) ;

int FUNC_11(OggVorbis_File *VAR_2, OggVorbis_File *VAR_3){
  vorbis_info *VAR_4,*VAR_5;
  float **VAR_6;
  float **VAR_7;
  const float *VAR_8,*VAR_9;
  int VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15;

  if(VAR_2==VAR_3)return(0);
  if(VAR_2->ready_state<VAR_0)return(VAR_1);
  if(VAR_3->ready_state<VAR_0)return(VAR_1);





  VAR_13=FUNC_3(VAR_2);
  if(VAR_13)return(VAR_13);
  VAR_13=FUNC_2(VAR_3);
  if(VAR_13)return(VAR_13);

  VAR_4=FUNC_7(VAR_2,-1);
  VAR_5=FUNC_7(VAR_3,-1);
  VAR_14=FUNC_6(VAR_2);
  VAR_15=FUNC_6(VAR_3);

  VAR_6=FUNC_5(sizeof(*VAR_6)*VAR_4->channels);
  VAR_10=FUNC_8(VAR_4,0)>>(1+VAR_14);
  VAR_11=FUNC_8(VAR_5,0)>>(1+VAR_15);
  VAR_8=FUNC_10(&VAR_2->vd,0);
  VAR_9=FUNC_10(&VAR_3->vd,0);

  for(VAR_12=0;VAR_12<VAR_4->channels;VAR_12++)
    VAR_6[VAR_12]=FUNC_5(sizeof(**VAR_6)*VAR_10);

  FUNC_1(VAR_2,VAR_4,&VAR_2->vd,VAR_6,VAR_10);




  FUNC_9(&VAR_3->vd,&VAR_7);







  FUNC_4(VAR_7,VAR_6,VAR_10,VAR_11,VAR_4->channels,VAR_5->channels,VAR_8,VAR_9);


  return(0);
}
