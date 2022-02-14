
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct audio {TYPE_1__* out; int dec_id; } ;
typedef int cmd ;
struct TYPE_5__ {unsigned int buf_size; scalar_t__ partition_number; int buf_ptr; int decoder_id; int cmd_id; } ;
typedef TYPE_2__ audplay_cmd_bitstream_data_avail ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct audio*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(struct audio *VAR_1,
     unsigned VAR_2, unsigned VAR_3)
{
 audplay_cmd_bitstream_data_avail VAR_4;

 VAR_4.cmd_id = VAR_0;
 VAR_4.decoder_id = VAR_1->dec_id;
 VAR_4.buf_ptr = VAR_1->out[VAR_2].addr;
 VAR_4.buf_size = VAR_3/2;
 VAR_4.partition_number = 0;
 return FUNC_0(VAR_1, &VAR_4, sizeof(VAR_4));
}
