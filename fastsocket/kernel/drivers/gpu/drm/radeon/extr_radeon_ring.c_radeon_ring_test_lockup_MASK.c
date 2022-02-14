
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int rptr; int ptr_reg_mask; int ptr_reg_shift; int last_rptr; scalar_t__ last_activity; int rptr_reg; } ;
struct radeon_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 (scalar_t__) ;
 unsigned long VAR_1 ;
 int FUNC_3 (struct radeon_ring*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

bool FUNC_5(struct radeon_device *VAR_2, struct radeon_ring *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 uint32_t VAR_6;

 VAR_4 = VAR_0;
 if (!FUNC_4(VAR_4, VAR_3->last_activity)) {

  FUNC_3(VAR_3);
  return 0;
 }
 VAR_6 = FUNC_0(VAR_3->rptr_reg);
 VAR_3->rptr = (VAR_6 & VAR_3->ptr_reg_mask) >> VAR_3->ptr_reg_shift;
 if (VAR_3->rptr != VAR_3->last_rptr) {

  FUNC_3(VAR_3);
  return 0;
 }
 VAR_5 = FUNC_2(VAR_4 - VAR_3->last_activity);
 if (VAR_1 && VAR_5 >= VAR_1) {
  FUNC_1(VAR_2->dev, "GPU lockup CP stall for more than %lumsec\n", VAR_5);
  return 1;
 }

 return 0;
}
