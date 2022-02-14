
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int channel_configuration; int sbr_ps_on_flag; int sbr_on_flag; int aac_spectral_data_resilience_flag; int aac_scalefactor_data_resilience_flag; int aac_section_data_resilience_flag; int ep_config; int audio_object; int format; } ;
struct audio {TYPE_2__ aac_config; int out_sample_rate; int dec_id; } ;
typedef int cmd ;
struct TYPE_6__ {int input_sampling_frequency; int dec_id; int length; int cmd_id; } ;
struct TYPE_8__ {int channel_configuration; int sbr_ps_on_flag; int sbr_on_flag; int aac_spectral_data_resilience_flag; int aac_scalefactor_data_resilience_flag; int aac_section_data_resilience_flag; int ep_config; int audio_object; int format; TYPE_1__ common; } ;
typedef TYPE_3__ audpp_cmd_cfg_adec_params_aac ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct audio *VAR_2)
{
 audpp_cmd_cfg_adec_params_aac VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.common.cmd_id = VAR_0;
 VAR_3.common.length = VAR_1;
 VAR_3.common.dec_id = VAR_2->dec_id;
 VAR_3.common.input_sampling_frequency = VAR_2->out_sample_rate;
 VAR_3.format = VAR_2->aac_config.format;
 VAR_3.audio_object = VAR_2->aac_config.audio_object;
 VAR_3.ep_config = VAR_2->aac_config.ep_config;
 VAR_3.aac_section_data_resilience_flag =
  VAR_2->aac_config.aac_section_data_resilience_flag;
 VAR_3.aac_scalefactor_data_resilience_flag =
  VAR_2->aac_config.aac_scalefactor_data_resilience_flag;
 VAR_3.aac_spectral_data_resilience_flag =
  VAR_2->aac_config.aac_spectral_data_resilience_flag;
 VAR_3.sbr_on_flag = VAR_2->aac_config.sbr_on_flag;
 VAR_3.sbr_ps_on_flag = VAR_2->aac_config.sbr_ps_on_flag;
 VAR_3.channel_configuration = VAR_2->aac_config.channel_configuration;

 FUNC_0(&VAR_3, sizeof(VAR_3));
}
