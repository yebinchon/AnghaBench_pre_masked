
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int channels; } ;
typedef TYPE_1__ vorbis_info ;
typedef int ogg_int64_t ;
struct TYPE_15__ {scalar_t__ ready_state; int vd; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int *,float**,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (float**,float**,int,int,int,int,float const*,float const*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *,float***) ;
 float* FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(OggVorbis_File *VAR_2,ogg_int64_t VAR_3,
                           int (*VAR_4)(OggVorbis_File *,ogg_int64_t)){
  vorbis_info *VAR_5;
  float **VAR_6;
  float **VAR_7;
  const float *VAR_8,*VAR_9;
  int VAR_10,VAR_11,VAR_12,VAR_13,VAR_14;
  int VAR_15,VAR_16;

  if(VAR_2->ready_state<VAR_0)return(VAR_1);
  VAR_16=FUNC_2(VAR_2);
  if(VAR_16)return(VAR_16);
  VAR_5=FUNC_6(VAR_2,-1);
  VAR_14=FUNC_5(VAR_2);

  VAR_12=VAR_5->channels;
  VAR_10=FUNC_7(VAR_5,0)>>(1+VAR_14);
  VAR_8=FUNC_9(&VAR_2->vd,0);




  VAR_6=FUNC_4(sizeof(*VAR_6)*VAR_12);
  for(VAR_15=0;VAR_15<VAR_12;VAR_15++)
    VAR_6[VAR_15]=FUNC_4(sizeof(**VAR_6)*VAR_10);
  FUNC_0(VAR_2,VAR_5,&VAR_2->vd,VAR_6,VAR_10);


  VAR_16=VAR_4(VAR_2,VAR_3);
  if(VAR_16)return VAR_16;
  VAR_16=FUNC_1(VAR_2);
  if(VAR_16)return(VAR_16);


  VAR_5=FUNC_6(VAR_2,-1);
  VAR_13=VAR_5->channels;
  VAR_11=FUNC_7(VAR_5,0)>>(1+VAR_14);
  VAR_9=FUNC_9(&VAR_2->vd,0);


  FUNC_8(&VAR_2->vd,&VAR_7);


  FUNC_3(VAR_7,VAR_6,VAR_10,VAR_11,VAR_12,VAR_13,VAR_8,VAR_9);


  return(0);
}
