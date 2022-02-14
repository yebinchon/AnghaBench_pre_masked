
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* noisecompand; } ;
typedef TYPE_1__ vorbis_info_psy ;
struct TYPE_8__ {TYPE_4__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_9__ {int* data; } ;
typedef TYPE_3__ compandblock ;
struct TYPE_10__ {TYPE_1__** psy_param; } ;
typedef TYPE_4__ codec_setup_info ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(vorbis_info *VAR_1,double VAR_2,int VAR_3,
                                        const compandblock *VAR_4,
                                        const double *VAR_5){
  int VAR_6,VAR_7=VAR_2;
  double VAR_8=VAR_2-VAR_7;
  codec_setup_info *VAR_9=VAR_1->codec_setup;
  vorbis_info_psy *VAR_10=VAR_9->psy_param[VAR_3];

  VAR_8=VAR_5[VAR_7]*(1.-VAR_8)+VAR_5[VAR_7+1]*VAR_8;
  VAR_7=(int)VAR_8;
  VAR_8-=VAR_7;
  if(VAR_8==0 && VAR_7>0){
    VAR_7--;
    VAR_8=1.;
  }


  for(VAR_6=0;VAR_6<VAR_0;VAR_6++)
    VAR_10->noisecompand[VAR_6]=VAR_4[VAR_7].data[VAR_6]*(1.-VAR_8)+VAR_4[VAR_7+1].data[VAR_6]*VAR_8;
  return;
}
