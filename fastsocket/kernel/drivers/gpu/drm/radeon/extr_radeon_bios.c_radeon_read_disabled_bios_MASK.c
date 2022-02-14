
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int flags; scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_6(struct radeon_device *VAR_5)
{
 if (VAR_5->flags & VAR_4)
  return FUNC_1(VAR_5);
 else if (VAR_5->family >= VAR_0)
  return FUNC_3(VAR_5);
 else if (VAR_5->family >= VAR_3)
  return FUNC_5(VAR_5);
 else if (VAR_5->family >= VAR_1)
  return FUNC_4(VAR_5);
 else if (VAR_5->family >= VAR_2)
  return FUNC_0(VAR_5);
 else
  return FUNC_2(VAR_5);
}
