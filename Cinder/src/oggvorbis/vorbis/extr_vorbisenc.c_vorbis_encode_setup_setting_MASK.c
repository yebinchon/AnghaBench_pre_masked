
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {long channels; long rate; scalar_t__ version; TYPE_5__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_9__ {int* psy_lowpass; int* psy_ath_float; int* psy_ath_abs; } ;
typedef TYPE_3__ ve_setup_data_template ;
struct TYPE_10__ {int impulse_block_p; int noise_normalize_p; int base_setting; int stereo_point_setting; int lowpass_kHz; int ath_floating_dB; int ath_absolute_dB; int amplitude_track_dBpersec; int trigger_setting; TYPE_1__* block; int lowpass_altered; TYPE_3__* setup; } ;
typedef TYPE_4__ highlevel_encode_setup ;
struct TYPE_11__ {TYPE_4__ hi; } ;
typedef TYPE_5__ codec_setup_info ;
struct TYPE_7__ {int tone_mask_setting; int tone_peaklimit_setting; int noise_bias_setting; int noise_compand_setting; } ;



__attribute__((used)) static void FUNC_0(vorbis_info *VAR_0,
                                       long VAR_1,
                                       long VAR_2){
  int VAR_3,VAR_4;
  codec_setup_info *VAR_5=VAR_0->codec_setup;
  highlevel_encode_setup *VAR_6=&VAR_5->hi;
  const ve_setup_data_template *VAR_7=VAR_6->setup;
  double VAR_8;

  VAR_0->version=0;
  VAR_0->channels=VAR_1;
  VAR_0->rate=VAR_2;

  VAR_6->impulse_block_p=1;
  VAR_6->noise_normalize_p=1;

  VAR_4=VAR_6->base_setting;
  VAR_8=VAR_6->base_setting-VAR_4;

  VAR_6->stereo_point_setting=VAR_6->base_setting;

  if(!VAR_6->lowpass_altered)
    VAR_6->lowpass_kHz=
      VAR_7->psy_lowpass[VAR_4]*(1.-VAR_8)+VAR_7->psy_lowpass[VAR_4+1]*VAR_8;

  VAR_6->ath_floating_dB=VAR_7->psy_ath_float[VAR_4]*(1.-VAR_8)+
    VAR_7->psy_ath_float[VAR_4+1]*VAR_8;
  VAR_6->ath_absolute_dB=VAR_7->psy_ath_abs[VAR_4]*(1.-VAR_8)+
    VAR_7->psy_ath_abs[VAR_4+1]*VAR_8;

  VAR_6->amplitude_track_dBpersec=-6.;
  VAR_6->trigger_setting=VAR_6->base_setting;

  for(VAR_3=0;VAR_3<4;VAR_3++){
    VAR_6->block[VAR_3].tone_mask_setting=VAR_6->base_setting;
    VAR_6->block[VAR_3].tone_peaklimit_setting=VAR_6->base_setting;
    VAR_6->block[VAR_3].noise_bias_setting=VAR_6->base_setting;
    VAR_6->block[VAR_3].noise_compand_setting=VAR_6->base_setting;
  }
}
