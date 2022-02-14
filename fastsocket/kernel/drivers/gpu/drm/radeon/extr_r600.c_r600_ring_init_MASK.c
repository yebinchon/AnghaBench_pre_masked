
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_ring {unsigned int ring_size; int align_mask; scalar_t__ rptr_save_reg; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_3 (struct radeon_device*,scalar_t__*) ;

void FUNC_4(struct radeon_device *VAR_0, struct radeon_ring *VAR_1, unsigned VAR_2)
{
 u32 VAR_3;
 int VAR_4;


 VAR_3 = FUNC_1(VAR_2 / 8);
 VAR_2 = (1 << (VAR_3 + 1)) * 4;
 VAR_1->ring_size = VAR_2;
 VAR_1->align_mask = 16 - 1;

 if (FUNC_2(VAR_0, VAR_1)) {
  VAR_4 = FUNC_3(VAR_0, &VAR_1->rptr_save_reg);
  if (VAR_4) {
   FUNC_0("failed to get scratch reg for rptr save (%d).\n", VAR_4);
   VAR_1->rptr_save_reg = 0;
  }
 }
}
