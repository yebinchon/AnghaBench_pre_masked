
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {scalar_t__ ring_datasize; TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {scalar_t__ read_index; } ;



__attribute__((used)) static inline u32
FUNC_0(struct hv_ring_buffer_info *VAR_0,
     u32 VAR_1)
{
 u32 VAR_2 = VAR_0->ring_buffer->read_index;

 VAR_2 += VAR_1;
 VAR_2 %= VAR_0->ring_datasize;

 return VAR_2;
}
