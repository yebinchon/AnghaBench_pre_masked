
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct audio {int out_channel_mode; int out_sample_rate; int out_weight; TYPE_1__* out; } ;
typedef int cmd ;
struct TYPE_6__ {int write_buf1LSW; int write_buf1MSW; int write_buf2LSW; int write_buf2MSW; int weight_arm_to_rx; int channel_mode; int sample_rate; scalar_t__ partition_number_arm_to_dsp; int weight_decoder_to_rx; int arm_to_rx_flag; int write_buf2_len; int write_buf1_len; int intf_type; int config; int object_num; int cmd_id; } ;
typedef TYPE_2__ audpp_cmd_pcm_intf ;
struct TYPE_5__ {int addr; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct audio *VAR_5, int VAR_6)
{
 audpp_cmd_pcm_intf VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cmd_id = VAR_0;
 VAR_7.object_num = VAR_3;
 VAR_7.config = VAR_1;
 VAR_7.intf_type = VAR_4;

 if (VAR_6) {
  VAR_7.write_buf1LSW = VAR_5->out[0].addr;
  VAR_7.write_buf1MSW = VAR_5->out[0].addr >> 16;
  VAR_7.write_buf1_len = VAR_5->out[0].size;
  VAR_7.write_buf2LSW = VAR_5->out[1].addr;
  VAR_7.write_buf2MSW = VAR_5->out[1].addr >> 16;
  VAR_7.write_buf2_len = VAR_5->out[1].size;
  VAR_7.arm_to_rx_flag = VAR_2;
  VAR_7.weight_decoder_to_rx = VAR_5->out_weight;
  VAR_7.weight_arm_to_rx = 1;
  VAR_7.partition_number_arm_to_dsp = 0;
  VAR_7.sample_rate = VAR_5->out_sample_rate;
  VAR_7.channel_mode = VAR_5->out_channel_mode;
 }

 return FUNC_0(&VAR_7, sizeof(VAR_7));
}
