
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int ib_pool_ready; int ring_tmp_bo; } ;


 int FUNC_0 (struct radeon_device*,int *) ;
 int FUNC_1 (struct radeon_device*,int *) ;

void FUNC_2(struct radeon_device *VAR_0)
{
 if (VAR_0->ib_pool_ready) {
  FUNC_1(VAR_0, &VAR_0->ring_tmp_bo);
  FUNC_0(VAR_0, &VAR_0->ring_tmp_bo);
  VAR_0->ib_pool_ready = 0;
 }
}
