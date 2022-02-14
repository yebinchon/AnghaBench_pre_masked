
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct hv_ring_buffer_info {TYPE_1__* ring_buffer; } ;
struct hv_ring_buffer_debug_info {int current_interrupt_mask; int current_write_index; int current_read_index; void* bytes_avail_towrite; void* bytes_avail_toread; } ;
struct TYPE_2__ {int interrupt_mask; int write_index; int read_index; } ;


 int FUNC_0 (struct hv_ring_buffer_info*,void**,void**) ;

void FUNC_1(struct hv_ring_buffer_info *VAR_0,
       struct hv_ring_buffer_debug_info *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;

 if (VAR_0->ring_buffer) {
  FUNC_0(VAR_0,
     &VAR_3,
     &VAR_2);

  VAR_1->bytes_avail_toread = VAR_3;
  VAR_1->bytes_avail_towrite = VAR_2;
  VAR_1->current_read_index =
   VAR_0->ring_buffer->read_index;
  VAR_1->current_write_index =
   VAR_0->ring_buffer->write_index;
  VAR_1->current_interrupt_mask =
   VAR_0->ring_buffer->interrupt_mask;
 }
}
