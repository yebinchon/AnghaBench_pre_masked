
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dynpm_can_upclock; int dynpm_can_downclock; int num_power_states; int dynpm_idle_work; scalar_t__ default_mclk; scalar_t__ default_sclk; scalar_t__ default_vddci; scalar_t__ default_vddc; int int_thermal_type; scalar_t__ current_mclk; scalar_t__ current_sclk; int dynpm_planned_action; int dynpm_state; int profile; int pm_method; } ;
struct TYPE_3__ {scalar_t__ default_mclk; scalar_t__ default_sclk; } ;
struct radeon_device {scalar_t__ family; int dev; TYPE_2__ pm; scalar_t__ mc_fw; scalar_t__ is_atom_bios; scalar_t__ bios; TYPE_1__ clock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct radeon_device*,scalar_t__,int ) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 scalar_t__ FUNC_7 (struct radeon_device*) ;
 int VAR_11 ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,scalar_t__) ;
 int FUNC_12 (struct radeon_device*,scalar_t__) ;

int FUNC_13(struct radeon_device *VAR_12)
{
 int VAR_13;


 VAR_12->pm.pm_method = VAR_4;
 VAR_12->pm.profile = VAR_5;
 VAR_12->pm.dynpm_state = VAR_3;
 VAR_12->pm.dynpm_planned_action = VAR_2;
 VAR_12->pm.dynpm_can_upclock = 1;
 VAR_12->pm.dynpm_can_downclock = 1;
 VAR_12->pm.default_sclk = VAR_12->clock.default_sclk;
 VAR_12->pm.default_mclk = VAR_12->clock.default_mclk;
 VAR_12->pm.current_sclk = VAR_12->clock.default_sclk;
 VAR_12->pm.current_mclk = VAR_12->clock.default_mclk;
 VAR_12->pm.int_thermal_type = VAR_8;

 if (VAR_12->bios) {
  if (VAR_12->is_atom_bios)
   FUNC_5(VAR_12);
  else
   FUNC_6(VAR_12);
  FUNC_10(VAR_12);
  FUNC_9(VAR_12);

  if ((VAR_12->family >= VAR_0) &&
      (VAR_12->family <= VAR_1) &&
      VAR_12->mc_fw) {
   if (VAR_12->pm.default_vddc)
    FUNC_4(VAR_12, VAR_12->pm.default_vddc,
       VAR_6);
   if (VAR_12->pm.default_vddci)
    FUNC_4(VAR_12, VAR_12->pm.default_vddci,
       VAR_7);
   if (VAR_12->pm.default_sclk)
    FUNC_11(VAR_12, VAR_12->pm.default_sclk);
   if (VAR_12->pm.default_mclk)
    FUNC_12(VAR_12, VAR_12->pm.default_mclk);
  }
 }


 VAR_13 = FUNC_8(VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_2(&VAR_12->pm.dynpm_idle_work, VAR_11);

 if (VAR_12->pm.num_power_states > 1) {

  VAR_13 = FUNC_3(VAR_12->dev, &VAR_10);
  if (VAR_13)
   FUNC_0("failed to create device file for power profile\n");
  VAR_13 = FUNC_3(VAR_12->dev, &VAR_9);
  if (VAR_13)
   FUNC_0("failed to create device file for power method\n");

  if (FUNC_7(VAR_12)) {
   FUNC_0("Failed to register debugfs file for PM!\n");
  }

  FUNC_1("radeon: power management initialized\n");
 }

 return 0;
}
