
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* block; } ;
typedef TYPE_1__ vp_adjblock ;
struct TYPE_10__ {int* tone_masteratt; int tone_centerboost; int tone_decay; int max_curve_dB; int* toneatt; } ;
typedef TYPE_2__ vorbis_info_psy ;
struct TYPE_11__ {TYPE_4__* codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
struct TYPE_12__ {TYPE_2__** psy_param; } ;
typedef TYPE_4__ codec_setup_info ;
struct TYPE_13__ {int* att; int boost; int decay; } ;
typedef TYPE_5__ att3 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(vorbis_info *VAR_1,double VAR_2,int VAR_3,
                                         const att3 *VAR_4,
                                         const int *VAR_5,
                                         const vp_adjblock *VAR_6){
  int VAR_7,VAR_8=VAR_2;
  double VAR_9=VAR_2-VAR_8;
  codec_setup_info *VAR_10=VAR_1->codec_setup;
  vorbis_info_psy *VAR_11=VAR_10->psy_param[VAR_3];



  VAR_11->tone_masteratt[0]=VAR_4[VAR_8].att[0]*(1.-VAR_9)+VAR_4[VAR_8+1].att[0]*VAR_9;
  VAR_11->tone_masteratt[1]=VAR_4[VAR_8].att[1]*(1.-VAR_9)+VAR_4[VAR_8+1].att[1]*VAR_9;
  VAR_11->tone_masteratt[2]=VAR_4[VAR_8].att[2]*(1.-VAR_9)+VAR_4[VAR_8+1].att[2]*VAR_9;
  VAR_11->tone_centerboost=VAR_4[VAR_8].boost*(1.-VAR_9)+VAR_4[VAR_8+1].boost*VAR_9;
  VAR_11->tone_decay=VAR_4[VAR_8].decay*(1.-VAR_9)+VAR_4[VAR_8+1].decay*VAR_9;

  VAR_11->max_curve_dB=VAR_5[VAR_8]*(1.-VAR_9)+VAR_5[VAR_8+1]*VAR_9;

  for(VAR_7=0;VAR_7<VAR_0;VAR_7++)
    VAR_11->toneatt[VAR_7]=VAR_6[VAR_8].block[VAR_7]*(1.-VAR_9)+VAR_6[VAR_8+1].block[VAR_7]*VAR_9;
  return;
}
