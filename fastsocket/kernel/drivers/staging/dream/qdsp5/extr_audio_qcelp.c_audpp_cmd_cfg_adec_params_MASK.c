
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int input_sampling_frequency; int dec_id; int length; int cmd_id; } ;
struct audpp_cmd_cfg_adec_params_v13k {int stereo_cfg; TYPE_1__ common; } ;
struct audio {int dec_id; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct audpp_cmd_cfg_adec_params_v13k*,int) ;
 int FUNC_1 (struct audpp_cmd_cfg_adec_params_v13k*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct audio *VAR_3)
{
 struct audpp_cmd_cfg_adec_params_v13k VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.common.cmd_id = VAR_0;
 VAR_4.common.length = VAR_1;
 VAR_4.common.dec_id = VAR_3->dec_id;
 VAR_4.common.input_sampling_frequency = 8000;
 VAR_4.stereo_cfg = VAR_2;

 FUNC_0(&VAR_4, sizeof(VAR_4));
}
