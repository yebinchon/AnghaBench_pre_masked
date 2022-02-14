
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {scalar_t__ rptr; scalar_t__ wptr; int nop; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_3 (struct radeon_ring*,int ) ;

void FUNC_4(struct radeon_device *VAR_0, struct radeon_ring *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_0, VAR_1);
 if (VAR_1->rptr == VAR_1->wptr) {
  VAR_2 = FUNC_0(VAR_0, VAR_1, 1);
  if (!VAR_2) {
   FUNC_3(VAR_1, VAR_1->nop);
   FUNC_1(VAR_0, VAR_1);
  }
 }
}
