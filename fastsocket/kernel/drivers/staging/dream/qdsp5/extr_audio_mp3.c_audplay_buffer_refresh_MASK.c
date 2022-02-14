
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audplay_cmd_buffer_refresh {int num_buffers; int buf0_length; int buf0_address; scalar_t__ buf_read_count; int cmd_id; } ;
struct audio {size_t fill_next; TYPE_1__* in; } ;
typedef int refresh_cmd ;
struct TYPE_2__ {int size; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct audio*,struct audplay_cmd_buffer_refresh*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct audio *VAR_1)
{
 struct audplay_cmd_buffer_refresh VAR_2;

 VAR_2.cmd_id = VAR_0;
 VAR_2.num_buffers = 1;
 VAR_2.buf0_address = VAR_1->in[VAR_1->fill_next].addr;
 VAR_2.buf0_length = VAR_1->in[VAR_1->fill_next].size -
   (VAR_1->in[VAR_1->fill_next].size % 576);
 VAR_2.buf_read_count = 0;
 FUNC_1("audplay_buffer_fresh: buf0_addr=%x buf0_len=%d\n",
  VAR_2.buf0_address, VAR_2.buf0_length);
 (void)FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2));
}
