
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pm_method; scalar_t__ profile; int mutex; } ;
struct radeon_device {TYPE_1__ pm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

void FUNC_4(struct radeon_device *VAR_2)
{
 if (VAR_2->pm.pm_method == VAR_0) {
  if (VAR_2->pm.profile == VAR_1) {
   FUNC_0(&VAR_2->pm.mutex);
   FUNC_3(VAR_2);
   FUNC_2(VAR_2);
   FUNC_1(&VAR_2->pm.mutex);
  }
 }
}
