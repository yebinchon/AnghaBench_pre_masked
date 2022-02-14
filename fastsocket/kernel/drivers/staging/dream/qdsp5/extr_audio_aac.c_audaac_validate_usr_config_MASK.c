
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_audio_aac_config {scalar_t__ format; scalar_t__ audio_object; int ep_config; scalar_t__ aac_scalefactor_data_resilience_flag; scalar_t__ aac_section_data_resilience_flag; scalar_t__ aac_spectral_data_resilience_flag; scalar_t__ sbr_on_flag; scalar_t__ sbr_ps_on_flag; scalar_t__ dual_mono_mode; int channel_configuration; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_0(struct msm_audio_aac_config *VAR_18)
{
 int VAR_19 = -1;

 if (VAR_18->format != VAR_1 &&
  VAR_18->format != VAR_4 &&
  VAR_18->format != VAR_3 &&
  VAR_18->format != VAR_2)
  goto done;

 if (VAR_18->audio_object != VAR_6 &&
  VAR_18->audio_object != VAR_7 &&
  VAR_18->audio_object != VAR_5)
  goto done;

 if (VAR_18->audio_object == VAR_5) {
  if (VAR_18->ep_config > 3)
   goto done;
  if (VAR_18->aac_scalefactor_data_resilience_flag !=
   VAR_12 &&
   VAR_18->aac_scalefactor_data_resilience_flag !=
   VAR_13)
   goto done;
  if (VAR_18->aac_section_data_resilience_flag !=
   VAR_14 &&
   VAR_18->aac_section_data_resilience_flag !=
   VAR_15)
   goto done;
  if (VAR_18->aac_spectral_data_resilience_flag !=
   VAR_16 &&
   VAR_18->aac_spectral_data_resilience_flag !=
   VAR_17)
   goto done;
 } else {
  VAR_18->aac_section_data_resilience_flag =
   VAR_14;
  VAR_18->aac_scalefactor_data_resilience_flag =
   VAR_12;
  VAR_18->aac_spectral_data_resilience_flag =
   VAR_16;
 }

 if (VAR_18->sbr_on_flag != VAR_8 &&
  VAR_18->sbr_on_flag != VAR_9)
  goto done;

 if (VAR_18->sbr_ps_on_flag != VAR_10 &&
  VAR_18->sbr_ps_on_flag != VAR_11)
  goto done;

 if (VAR_18->dual_mono_mode > VAR_0)
  goto done;

 if (VAR_18->channel_configuration > 2)
  goto done;

 VAR_19 = 0;
 done:
 return VAR_19;
}
