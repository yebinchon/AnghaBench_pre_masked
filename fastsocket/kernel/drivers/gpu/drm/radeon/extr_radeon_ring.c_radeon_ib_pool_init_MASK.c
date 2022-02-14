
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int ib_pool_ready; int dev; int ring_tmp_bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int *,int,int ) ;
 int FUNC_3 (struct radeon_device*,int *) ;

int FUNC_4(struct radeon_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->ib_pool_ready) {
  return 0;
 }
 VAR_3 = FUNC_2(VAR_2, &VAR_2->ring_tmp_bo,
          VAR_1*64*1024,
          VAR_0);
 if (VAR_3) {
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2, &VAR_2->ring_tmp_bo);
 if (VAR_3) {
  return VAR_3;
 }

 VAR_2->ib_pool_ready = 1;
 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2->dev, "failed to register debugfs file for SA\n");
 }
 return 0;
}
