
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ath_maxatt; int ath_adjatt; } ;
typedef TYPE_2__ vorbis_info_psy ;
struct TYPE_8__ {TYPE_4__* codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
struct TYPE_6__ {int ath_absolute_dB; int ath_floating_dB; } ;
struct TYPE_9__ {TYPE_1__ hi; TYPE_2__** psy_param; } ;
typedef TYPE_4__ codec_setup_info ;



__attribute__((used)) static void FUNC_0(vorbis_info *VAR_0,int VAR_1){
  codec_setup_info *VAR_2=VAR_0->codec_setup;
  vorbis_info_psy *VAR_3=VAR_2->psy_param[VAR_1];

  VAR_3->ath_adjatt=VAR_2->hi.ath_floating_dB;
  VAR_3->ath_maxatt=VAR_2->hi.ath_absolute_dB;
  return;
}
