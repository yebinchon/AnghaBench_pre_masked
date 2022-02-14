
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {scalar_t__ read_index; scalar_t__ interrupt_mask; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(u32 VAR_0, struct hv_ring_buffer_info *VAR_1)
{
 FUNC_0();
 if (VAR_1->ring_buffer->interrupt_mask)
  return 0;


 FUNC_1();




 if (VAR_0 == VAR_1->ring_buffer->read_index)
  return 1;

 return 0;
}
