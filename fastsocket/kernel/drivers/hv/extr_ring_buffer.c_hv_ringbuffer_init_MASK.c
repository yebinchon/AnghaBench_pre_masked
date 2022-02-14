
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct hv_ring_buffer_info {int ring_lock; void* ring_datasize; void* ring_size; struct hv_ring_buffer* ring_buffer; } ;
struct hv_ring_buffer {scalar_t__ write_index; scalar_t__ read_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hv_ring_buffer_info*,int ,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct hv_ring_buffer_info *VAR_2,
     void *VAR_3, u32 VAR_4)
{
 if (sizeof(struct hv_ring_buffer) != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2, 0, sizeof(struct hv_ring_buffer_info));

 VAR_2->ring_buffer = (struct hv_ring_buffer *)VAR_3;
 VAR_2->ring_buffer->read_index =
  VAR_2->ring_buffer->write_index = 0;

 VAR_2->ring_size = VAR_4;
 VAR_2->ring_datasize = VAR_4 - sizeof(struct hv_ring_buffer);

 FUNC_1(&VAR_2->ring_lock);

 return 0;
}
