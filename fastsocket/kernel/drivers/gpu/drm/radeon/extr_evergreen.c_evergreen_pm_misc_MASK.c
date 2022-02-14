
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_voltage {scalar_t__ type; int voltage; int vddci; } ;
struct radeon_power_state {TYPE_1__* clock_info; } ;
struct TYPE_6__ {int requested_power_state_index; int requested_clock_mode_index; int current_vddc; scalar_t__ pm_method; scalar_t__ profile_index; int current_vddci; TYPE_2__* profiles; struct radeon_power_state* power_state; scalar_t__ active_crtc_count; } ;
struct radeon_device {scalar_t__ family; TYPE_3__ pm; } ;
struct TYPE_5__ {size_t dpms_on_cm_idx; } ;
struct TYPE_4__ {struct radeon_voltage voltage; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct radeon_device*,int,int ) ;

void FUNC_2(struct radeon_device *VAR_8)
{
 int VAR_9 = VAR_8->pm.requested_power_state_index;
 int VAR_10 = VAR_8->pm.requested_clock_mode_index;
 struct radeon_power_state *VAR_11 = &VAR_8->pm.power_state[VAR_9];
 struct radeon_voltage *VAR_12 = &VAR_11->clock_info[VAR_10].voltage;

 if (VAR_12->type == VAR_7) {

  if (VAR_12->voltage == 0xff01)
   return;
  if (VAR_12->voltage && (VAR_12->voltage != VAR_8->pm.current_vddc)) {
   FUNC_1(VAR_8, VAR_12->voltage, VAR_5);
   VAR_8->pm.current_vddc = VAR_12->voltage;
   FUNC_0("Setting: vddc: %d\n", VAR_12->voltage);
  }





  if ((VAR_8->pm.pm_method == VAR_1) &&
      (VAR_8->family >= VAR_0) &&
      VAR_8->pm.active_crtc_count &&
      ((VAR_8->pm.profile_index == VAR_4) ||
       (VAR_8->pm.profile_index == VAR_3)))
   VAR_12 = &VAR_8->pm.power_state[VAR_9].
    clock_info[VAR_8->pm.profiles[VAR_2].dpms_on_cm_idx].voltage;


  if (VAR_12->vddci == 0xff01)
   return;
  if (VAR_12->vddci && (VAR_12->vddci != VAR_8->pm.current_vddci)) {
   FUNC_1(VAR_8, VAR_12->vddci, VAR_6);
   VAR_8->pm.current_vddci = VAR_12->vddci;
   FUNC_0("Setting: vddci: %d\n", VAR_12->vddci);
  }
 }
}
