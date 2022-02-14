
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int rptr_offs; int rptr; int ptr_reg_mask; int ptr_reg_shift; int ring_free_dw; int ring_size; int ptr_mask; scalar_t__ wptr; int rptr_reg; } ;
struct TYPE_2__ {int * wb; scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct radeon_device *VAR_0, struct radeon_ring *VAR_1)
{
 u32 VAR_2;

 if (VAR_0->wb.enabled)
  VAR_2 = FUNC_1(VAR_0->wb.wb[VAR_1->rptr_offs/4]);
 else
  VAR_2 = FUNC_0(VAR_1->rptr_reg);
 VAR_1->rptr = (VAR_2 & VAR_1->ptr_reg_mask) >> VAR_1->ptr_reg_shift;

 VAR_1->ring_free_dw = (VAR_1->rptr + (VAR_1->ring_size / 4));
 VAR_1->ring_free_dw -= VAR_1->wptr;
 VAR_1->ring_free_dw &= VAR_1->ptr_mask;
 if (!VAR_1->ring_free_dw) {
  VAR_1->ring_free_dw = VAR_1->ring_size / 4;
 }
}
