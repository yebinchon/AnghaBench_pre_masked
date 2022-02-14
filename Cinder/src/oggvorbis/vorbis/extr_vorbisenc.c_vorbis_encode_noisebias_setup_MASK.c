
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int noisemaxsupp; int** noiseoff; int noisewindowfixed; int noisewindowhimin; int noisewindowlomin; } ;
typedef TYPE_1__ vorbis_info_psy ;
struct TYPE_10__ {TYPE_5__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_11__ {int fixed; int hi; int lo; } ;
typedef TYPE_3__ noiseguard ;
struct TYPE_12__ {int** data; } ;
typedef TYPE_4__ noise3 ;
struct TYPE_13__ {TYPE_1__** psy_param; } ;
typedef TYPE_5__ codec_setup_info ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(vorbis_info *VAR_2,double VAR_3,int VAR_4,
                                         const int *VAR_5,
                                         const noise3 *VAR_6,
                                         const noiseguard *VAR_7,
                                         double VAR_8){
  int VAR_9,VAR_10=VAR_3,VAR_11;
  double VAR_12=VAR_3-VAR_10;
  codec_setup_info *VAR_13=VAR_2->codec_setup;
  vorbis_info_psy *VAR_14=VAR_13->psy_param[VAR_4];

  VAR_14->noisemaxsupp=VAR_5[VAR_10]*(1.-VAR_12)+VAR_5[VAR_10+1]*VAR_12;
  VAR_14->noisewindowlomin=VAR_7[VAR_4].lo;
  VAR_14->noisewindowhimin=VAR_7[VAR_4].hi;
  VAR_14->noisewindowfixed=VAR_7[VAR_4].fixed;

  for(VAR_11=0;VAR_11<VAR_1;VAR_11++)
    for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
      VAR_14->noiseoff[VAR_11][VAR_9]=VAR_6[VAR_10].data[VAR_11][VAR_9]*(1.-VAR_12)+VAR_6[VAR_10+1].data[VAR_11][VAR_9]*VAR_12;



  for(VAR_11=0;VAR_11<VAR_1;VAR_11++){
    float VAR_15=VAR_14->noiseoff[VAR_11][0]+6;
    for(VAR_9=0;VAR_9<VAR_0;VAR_9++){
      VAR_14->noiseoff[VAR_11][VAR_9]+=VAR_8;
      if(VAR_14->noiseoff[VAR_11][VAR_9]<VAR_15)VAR_14->noiseoff[VAR_11][VAR_9]=VAR_15;
    }
  }

  return;
}
