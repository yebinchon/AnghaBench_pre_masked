
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int input_sampling_frequency; int dec_id; int cmd_id; } ;
struct audpp_cmd_cfg_adec_params_evrc {int stereo_cfg; TYPE_1__ common; } ;
struct audio {int dec_id; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audpp_cmd_cfg_adec_params_evrc*,int) ;
 int FUNC_1 (struct audpp_cmd_cfg_adec_params_evrc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct audio *VAR_2)
{
 struct audpp_cmd_cfg_adec_params_evrc VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.common.cmd_id = VAR_0;
 VAR_3.common.length = sizeof(VAR_3);
 VAR_3.common.dec_id = VAR_2->dec_id;
 VAR_3.common.input_sampling_frequency = 8000;
 VAR_3.stereo_cfg = VAR_1;

 FUNC_0(&VAR_3, sizeof(VAR_3));
}
