
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int num_crtc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_1 ;

u32 FUNC_1(struct radeon_device *VAR_2, int VAR_3)
{
 if (VAR_3 >= VAR_2->num_crtc)
  return 0;
 else
  return FUNC_0(VAR_0 + VAR_1[VAR_3]);
}
