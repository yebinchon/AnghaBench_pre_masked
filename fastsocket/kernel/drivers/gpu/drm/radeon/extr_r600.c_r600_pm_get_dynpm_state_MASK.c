
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dynpm_can_upclock; int dynpm_can_downclock; int num_power_states; int dynpm_planned_action; int requested_power_state_index; size_t requested_clock_mode_index; int current_power_state_index; int active_crtc_count; int default_power_state_index; size_t current_clock_mode_index; TYPE_2__* power_state; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_3__ pm; } ;
struct TYPE_5__ {int flags; scalar_t__ type; int pcie_lanes; TYPE_1__* clock_info; int num_clock_modes; } ;
struct TYPE_4__ {int flags; int mclk; int sclk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;





 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(struct radeon_device *VAR_6)
{
 int VAR_7;

 VAR_6->pm.dynpm_can_upclock = 1;
 VAR_6->pm.dynpm_can_downclock = 1;


 if ((VAR_6->flags & VAR_3) || (VAR_6->family == VAR_0)) {
  int VAR_8 = 0;

  if (VAR_6->pm.num_power_states > 2)
   VAR_8 = 1;

  switch (VAR_6->pm.dynpm_planned_action) {
  case 130:
   VAR_6->pm.requested_power_state_index = VAR_8;
   VAR_6->pm.requested_clock_mode_index = 0;
   VAR_6->pm.dynpm_can_downclock = 0;
   break;
  case 131:
   if (VAR_6->pm.current_power_state_index == VAR_8) {
    VAR_6->pm.requested_power_state_index = VAR_6->pm.current_power_state_index;
    VAR_6->pm.dynpm_can_downclock = 0;
   } else {
    if (VAR_6->pm.active_crtc_count > 1) {
     for (VAR_7 = 0; VAR_7 < VAR_6->pm.num_power_states; VAR_7++) {
      if (VAR_6->pm.power_state[VAR_7].flags & VAR_5)
       continue;
      else if (VAR_7 >= VAR_6->pm.current_power_state_index) {
       VAR_6->pm.requested_power_state_index =
        VAR_6->pm.current_power_state_index;
       break;
      } else {
       VAR_6->pm.requested_power_state_index = VAR_7;
       break;
      }
     }
    } else {
     if (VAR_6->pm.current_power_state_index == 0)
      VAR_6->pm.requested_power_state_index =
       VAR_6->pm.num_power_states - 1;
     else
      VAR_6->pm.requested_power_state_index =
       VAR_6->pm.current_power_state_index - 1;
    }
   }
   VAR_6->pm.requested_clock_mode_index = 0;

   if ((VAR_6->pm.active_crtc_count > 0) &&
       (VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].
        clock_info[VAR_6->pm.requested_clock_mode_index].flags &
        VAR_4)) {
    VAR_6->pm.requested_power_state_index++;
   }
   break;
  case 128:
   if (VAR_6->pm.current_power_state_index == (VAR_6->pm.num_power_states - 1)) {
    VAR_6->pm.requested_power_state_index = VAR_6->pm.current_power_state_index;
    VAR_6->pm.dynpm_can_upclock = 0;
   } else {
    if (VAR_6->pm.active_crtc_count > 1) {
     for (VAR_7 = (VAR_6->pm.num_power_states - 1); VAR_7 >= 0; VAR_7--) {
      if (VAR_6->pm.power_state[VAR_7].flags & VAR_5)
       continue;
      else if (VAR_7 <= VAR_6->pm.current_power_state_index) {
       VAR_6->pm.requested_power_state_index =
        VAR_6->pm.current_power_state_index;
       break;
      } else {
       VAR_6->pm.requested_power_state_index = VAR_7;
       break;
      }
     }
    } else
     VAR_6->pm.requested_power_state_index =
      VAR_6->pm.current_power_state_index + 1;
   }
   VAR_6->pm.requested_clock_mode_index = 0;
   break;
  case 132:
   VAR_6->pm.requested_power_state_index = VAR_6->pm.default_power_state_index;
   VAR_6->pm.requested_clock_mode_index = 0;
   VAR_6->pm.dynpm_can_upclock = 0;
   break;
  case 129:
  default:
   FUNC_1("Requested mode for not defined action\n");
   return;
  }
 } else {



  if (VAR_6->pm.active_crtc_count > 1) {
   VAR_6->pm.requested_power_state_index = -1;

   for (VAR_7 = 1; VAR_7 < VAR_6->pm.num_power_states; VAR_7++) {
    if (VAR_6->pm.power_state[VAR_7].flags & VAR_5)
     continue;
    else if ((VAR_6->pm.power_state[VAR_7].type == VAR_2) ||
      (VAR_6->pm.power_state[VAR_7].type == VAR_1)) {
     VAR_6->pm.requested_power_state_index = VAR_7;
     break;
    }
   }

   if (VAR_6->pm.requested_power_state_index == -1)
    VAR_6->pm.requested_power_state_index = 0;
  } else
   VAR_6->pm.requested_power_state_index = 1;

  switch (VAR_6->pm.dynpm_planned_action) {
  case 130:
   VAR_6->pm.requested_clock_mode_index = 0;
   VAR_6->pm.dynpm_can_downclock = 0;
   break;
  case 131:
   if (VAR_6->pm.requested_power_state_index == VAR_6->pm.current_power_state_index) {
    if (VAR_6->pm.current_clock_mode_index == 0) {
     VAR_6->pm.requested_clock_mode_index = 0;
     VAR_6->pm.dynpm_can_downclock = 0;
    } else
     VAR_6->pm.requested_clock_mode_index =
      VAR_6->pm.current_clock_mode_index - 1;
   } else {
    VAR_6->pm.requested_clock_mode_index = 0;
    VAR_6->pm.dynpm_can_downclock = 0;
   }

   if ((VAR_6->pm.active_crtc_count > 0) &&
       (VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].
        clock_info[VAR_6->pm.requested_clock_mode_index].flags &
        VAR_4)) {
    VAR_6->pm.requested_clock_mode_index++;
   }
   break;
  case 128:
   if (VAR_6->pm.requested_power_state_index == VAR_6->pm.current_power_state_index) {
    if (VAR_6->pm.current_clock_mode_index ==
        (VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].num_clock_modes - 1)) {
     VAR_6->pm.requested_clock_mode_index = VAR_6->pm.current_clock_mode_index;
     VAR_6->pm.dynpm_can_upclock = 0;
    } else
     VAR_6->pm.requested_clock_mode_index =
      VAR_6->pm.current_clock_mode_index + 1;
   } else {
    VAR_6->pm.requested_clock_mode_index =
     VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].num_clock_modes - 1;
    VAR_6->pm.dynpm_can_upclock = 0;
   }
   break;
  case 132:
   VAR_6->pm.requested_power_state_index = VAR_6->pm.default_power_state_index;
   VAR_6->pm.requested_clock_mode_index = 0;
   VAR_6->pm.dynpm_can_upclock = 0;
   break;
  case 129:
  default:
   FUNC_1("Requested mode for not defined action\n");
   return;
  }
 }

 FUNC_0("Requested: e: %d m: %d p: %d\n",
    VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].
    clock_info[VAR_6->pm.requested_clock_mode_index].sclk,
    VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].
    clock_info[VAR_6->pm.requested_clock_mode_index].mclk,
    VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].
    pcie_lanes);
}
