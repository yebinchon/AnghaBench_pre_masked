
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct audio_in {int phys; scalar_t__ type; scalar_t__ channel_mode; TYPE_1__* in; int samp_rate_index; scalar_t__ data; } ;
typedef int cmd ;
struct TYPE_6__ {int ptr_to_extpkt_buffer_msw; int ptr_to_extpkt_buffer_lsw; unsigned int buf_len; int rec_quality; scalar_t__ stereo_mode; int samp_rate_index; int cmd_id; } ;
typedef TYPE_2__ audrec_cmd_arec0param_cfg ;
struct TYPE_5__ {int * data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct audio_in*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct audio_in *VAR_4)
{
 audrec_cmd_arec0param_cfg VAR_5;
 uint16_t *VAR_6 = (void *) VAR_4->data;
 unsigned VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cmd_id = VAR_0;
 VAR_5.ptr_to_extpkt_buffer_msw = VAR_4->phys >> 16;
 VAR_5.ptr_to_extpkt_buffer_lsw = VAR_4->phys;
 VAR_5.buf_len = VAR_3;
 VAR_5.samp_rate_index = VAR_4->samp_rate_index;
 VAR_5.stereo_mode = VAR_4->channel_mode;




 VAR_5.rec_quality = 0x1C00;







 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_4->in[VAR_7].data = VAR_6 + 4;
  if (VAR_4->type == VAR_2)
   VAR_6 += (4 + (VAR_4->channel_mode ? 2048 : 1024));
  else if (VAR_4->type == VAR_1)
   VAR_6 += (4 + 768);
 }

 return FUNC_0(VAR_4, &VAR_5, sizeof(VAR_5));
}
