
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {scalar_t__ ring_datasize; TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {scalar_t__ write_index; scalar_t__ read_index; scalar_t__ pending_send_sz; } ;



__attribute__((used)) static bool FUNC_0(u32 VAR_0,
      struct hv_ring_buffer_info *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5 = VAR_1->ring_buffer->write_index;
 u32 VAR_6 = VAR_1->ring_buffer->read_index;
 u32 VAR_7 = VAR_1->ring_buffer->pending_send_sz;




 if (VAR_7 == 0)
  return 0;

 VAR_4 = VAR_1->ring_datasize;
 VAR_3 = VAR_5 >= VAR_6 ? VAR_4 - (VAR_5 - VAR_6) :
   VAR_6 - VAR_5;

 VAR_2 = VAR_5 >= VAR_0 ? VAR_4 - (VAR_5 - VAR_0) :
   VAR_0 - VAR_5;


 if ((VAR_2 < VAR_7) && (VAR_3 >= VAR_7))
  return 1;

 return 0;
}
