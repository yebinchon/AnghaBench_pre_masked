
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int wptr; int align_mask; int ptr_reg_shift; int ptr_reg_mask; int wptr_reg; int nop; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct radeon_ring*,int ) ;

void FUNC_4(struct radeon_device *VAR_0, struct radeon_ring *VAR_1)
{

 while (VAR_1->wptr & VAR_1->align_mask) {
  FUNC_3(VAR_1, VAR_1->nop);
 }
 FUNC_0();
 FUNC_2(VAR_1->wptr_reg, (VAR_1->wptr << VAR_1->ptr_reg_shift) & VAR_1->ptr_reg_mask);
 (void)FUNC_1(VAR_1->wptr_reg);
}
