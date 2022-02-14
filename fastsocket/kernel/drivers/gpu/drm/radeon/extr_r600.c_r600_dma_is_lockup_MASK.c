
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_2 (struct radeon_ring*) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ring*) ;

bool FUNC_4(struct radeon_device *VAR_1, struct radeon_ring *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1);

 if (!(VAR_3 & VAR_0)) {
  FUNC_2(VAR_2);
  return 0;
 }

 FUNC_1(VAR_1, VAR_2);
 return FUNC_3(VAR_1, VAR_2);
}
