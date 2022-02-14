
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int atom_context; } ;
struct radeon_device {int accel_working; TYPE_1__ mode_info; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*) ;

int FUNC_3(struct radeon_device *VAR_0)
{
 int VAR_1;






 FUNC_1(VAR_0->mode_info.atom_context);

 VAR_0->accel_working = 1;
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0("si startup failed on resume\n");
  VAR_0->accel_working = 0;
  return VAR_1;
 }

 return VAR_1;

}
