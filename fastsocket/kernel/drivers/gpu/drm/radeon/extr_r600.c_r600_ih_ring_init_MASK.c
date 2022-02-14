
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int ring_size; int ptr_mask; scalar_t__ rptr; } ;
struct radeon_device {TYPE_1__ ih; } ;


 int FUNC_0 (unsigned int) ;

void FUNC_1(struct radeon_device *VAR_0, unsigned VAR_1)
{
 u32 VAR_2;


 VAR_2 = FUNC_0(VAR_1 / 4);
 VAR_1 = (1 << VAR_2) * 4;
 VAR_0->ih.ring_size = VAR_1;
 VAR_0->ih.ptr_mask = VAR_0->ih.ring_size - 1;
 VAR_0->ih.rptr = 0;
}
