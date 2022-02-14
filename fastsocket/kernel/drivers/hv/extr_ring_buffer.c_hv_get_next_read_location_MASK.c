
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hv_ring_buffer_info {TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {int read_index; } ;



__attribute__((used)) static inline u32
FUNC_0(struct hv_ring_buffer_info *VAR_0)
{
 u32 VAR_1 = VAR_0->ring_buffer->read_index;

 return VAR_1;
}
