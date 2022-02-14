
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct audio {int out_sample_rate; int dec_id; } ;
typedef int cmd ;
struct TYPE_5__ {int input_sampling_frequency; int dec_id; int length; int cmd_id; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
typedef TYPE_2__ audpp_cmd_cfg_adec_params_mp3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct audio *VAR_2)
{
 audpp_cmd_cfg_adec_params_mp3 VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.common.cmd_id = VAR_0;
 VAR_3.common.length = VAR_1;
 VAR_3.common.dec_id = VAR_2->dec_id;
 VAR_3.common.input_sampling_frequency = VAR_2->out_sample_rate;

 FUNC_0(&VAR_3, sizeof(VAR_3));
}
