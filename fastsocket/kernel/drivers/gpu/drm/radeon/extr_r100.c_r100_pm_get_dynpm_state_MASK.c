
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dynpm_can_upclock; int dynpm_can_downclock; int dynpm_planned_action; int requested_power_state_index; int current_power_state_index; int active_crtc_count; int num_power_states; int default_power_state_index; size_t requested_clock_mode_index; TYPE_2__* power_state; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_5__ {int flags; int pcie_lanes; TYPE_1__* clock_info; } ;
struct TYPE_4__ {int flags; int mclk; int sclk; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;





 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct radeon_device *VAR_2)
{
 int VAR_3;
 VAR_2->pm.dynpm_can_upclock = 1;
 VAR_2->pm.dynpm_can_downclock = 1;

 switch (VAR_2->pm.dynpm_planned_action) {
 case 130:
  VAR_2->pm.requested_power_state_index = 0;
  VAR_2->pm.dynpm_can_downclock = 0;
  break;
 case 131:
  if (VAR_2->pm.current_power_state_index == 0) {
   VAR_2->pm.requested_power_state_index = VAR_2->pm.current_power_state_index;
   VAR_2->pm.dynpm_can_downclock = 0;
  } else {
   if (VAR_2->pm.active_crtc_count > 1) {
    for (VAR_3 = 0; VAR_3 < VAR_2->pm.num_power_states; VAR_3++) {
     if (VAR_2->pm.power_state[VAR_3].flags & VAR_1)
      continue;
     else if (VAR_3 >= VAR_2->pm.current_power_state_index) {
      VAR_2->pm.requested_power_state_index = VAR_2->pm.current_power_state_index;
      break;
     } else {
      VAR_2->pm.requested_power_state_index = VAR_3;
      break;
     }
    }
   } else
    VAR_2->pm.requested_power_state_index =
     VAR_2->pm.current_power_state_index - 1;
  }

  if ((VAR_2->pm.active_crtc_count > 0) &&
      (VAR_2->pm.power_state[VAR_2->pm.requested_power_state_index].clock_info[0].flags &
       VAR_0)) {
   VAR_2->pm.requested_power_state_index++;
  }
  break;
 case 128:
  if (VAR_2->pm.current_power_state_index == (VAR_2->pm.num_power_states - 1)) {
   VAR_2->pm.requested_power_state_index = VAR_2->pm.current_power_state_index;
   VAR_2->pm.dynpm_can_upclock = 0;
  } else {
   if (VAR_2->pm.active_crtc_count > 1) {
    for (VAR_3 = (VAR_2->pm.num_power_states - 1); VAR_3 >= 0; VAR_3--) {
     if (VAR_2->pm.power_state[VAR_3].flags & VAR_1)
      continue;
     else if (VAR_3 <= VAR_2->pm.current_power_state_index) {
      VAR_2->pm.requested_power_state_index = VAR_2->pm.current_power_state_index;
      break;
     } else {
      VAR_2->pm.requested_power_state_index = VAR_3;
      break;
     }
    }
   } else
    VAR_2->pm.requested_power_state_index =
     VAR_2->pm.current_power_state_index + 1;
  }
  break;
 case 132:
  VAR_2->pm.requested_power_state_index = VAR_2->pm.default_power_state_index;
  VAR_2->pm.dynpm_can_upclock = 0;
  break;
 case 129:
 default:
  FUNC_1("Requested mode for not defined action\n");
  return;
 }

 VAR_2->pm.requested_clock_mode_index = 0;

 FUNC_0("Requested: e: %d m: %d p: %d\n",
    VAR_2->pm.power_state[VAR_2->pm.requested_power_state_index].
    clock_info[VAR_2->pm.requested_clock_mode_index].sclk,
    VAR_2->pm.power_state[VAR_2->pm.requested_power_state_index].
    clock_info[VAR_2->pm.requested_clock_mode_index].mclk,
    VAR_2->pm.power_state[VAR_2->pm.requested_power_state_index].
    pcie_lanes);
}
