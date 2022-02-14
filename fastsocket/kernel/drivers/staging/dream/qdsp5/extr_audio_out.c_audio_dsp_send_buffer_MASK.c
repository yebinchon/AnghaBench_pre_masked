
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct audio {int dummy; } ;
typedef int cmd ;
struct TYPE_3__ {unsigned int arm_to_dsp_buf_id; unsigned int arm_to_dsp_buf_len; scalar_t__ dsp_to_arm_buf_id; int intf_type; int config; int host_pcm_object; int cmd_id; } ;
typedef TYPE_1__ audpp_cmd_pcm_intf_send_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct audio *VAR_5, unsigned VAR_6, unsigned VAR_7)
{
 audpp_cmd_pcm_intf_send_buffer VAR_8;

 VAR_8.cmd_id = VAR_0;
 VAR_8.host_pcm_object = VAR_2;
 VAR_8.config = VAR_1;
 VAR_8.intf_type = VAR_3;
 VAR_8.dsp_to_arm_buf_id = 0;
 VAR_8.arm_to_dsp_buf_id = VAR_6 + 1;
 VAR_8.arm_to_dsp_buf_len = VAR_7;

 FUNC_0(VAR_4, VAR_6);
 return FUNC_1(&VAR_8, sizeof(VAR_8));
}
