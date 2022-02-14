
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audplay_cmd_hpcm_buf_cfg {int hostpcm_config; int feedback_frequency; scalar_t__ partition_number; scalar_t__ byte_swap; int max_buffers; int cmd_id; } ;
struct audio {int pcm_buf_count; } ;
typedef int cfg_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct audio*,struct audplay_cmd_hpcm_buf_cfg*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct audio *VAR_1)
{
 struct audplay_cmd_hpcm_buf_cfg VAR_2;

 FUNC_1("audamrnb_config_hostpcm()\n");
 VAR_2.cmd_id = VAR_0;
 VAR_2.max_buffers = VAR_1->pcm_buf_count;
 VAR_2.byte_swap = 0;
 VAR_2.hostpcm_config = (0x8000) | (0x4000);
 VAR_2.feedback_frequency = 1;
 VAR_2.partition_number = 0;
 (void)FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2));

}
