
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int default_power_state_index; int num_power_states; TYPE_1__* profiles; } ;
struct radeon_device {scalar_t__ family; int flags; TYPE_2__ pm; } ;
struct TYPE_3__ {int dpms_off_ps_idx; int dpms_on_ps_idx; int dpms_on_cm_idx; scalar_t__ dpms_off_cm_idx; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct radeon_device*,int ,int) ;

void FUNC_1(struct radeon_device *VAR_11)
{
 int VAR_12;

 if (VAR_11->family == VAR_0) {


  VAR_11->pm.profiles[VAR_1].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_1].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_1].dpms_off_cm_idx = 0;
  VAR_11->pm.profiles[VAR_1].dpms_on_cm_idx = 0;

  VAR_11->pm.profiles[VAR_5].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_5].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_5].dpms_off_cm_idx = 0;
  VAR_11->pm.profiles[VAR_5].dpms_on_cm_idx = 0;

  VAR_11->pm.profiles[VAR_7].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_7].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_7].dpms_off_cm_idx = 0;
  VAR_11->pm.profiles[VAR_7].dpms_on_cm_idx = 0;

  VAR_11->pm.profiles[VAR_3].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_3].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_3].dpms_off_cm_idx = 0;
  VAR_11->pm.profiles[VAR_3].dpms_on_cm_idx = 0;

  VAR_11->pm.profiles[VAR_4].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_4].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_4].dpms_off_cm_idx = 0;
  VAR_11->pm.profiles[VAR_4].dpms_on_cm_idx = 0;

  VAR_11->pm.profiles[VAR_6].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_6].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_6].dpms_off_cm_idx = 0;
  VAR_11->pm.profiles[VAR_6].dpms_on_cm_idx = 0;

  VAR_11->pm.profiles[VAR_2].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_2].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
  VAR_11->pm.profiles[VAR_2].dpms_off_cm_idx = 0;
  VAR_11->pm.profiles[VAR_2].dpms_on_cm_idx = 0;
 } else {
  if (VAR_11->pm.num_power_states < 4) {

   VAR_11->pm.profiles[VAR_1].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
   VAR_11->pm.profiles[VAR_1].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
   VAR_11->pm.profiles[VAR_1].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_1].dpms_on_cm_idx = 2;

   VAR_11->pm.profiles[VAR_5].dpms_off_ps_idx = 1;
   VAR_11->pm.profiles[VAR_5].dpms_on_ps_idx = 1;
   VAR_11->pm.profiles[VAR_5].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_5].dpms_on_cm_idx = 0;

   VAR_11->pm.profiles[VAR_7].dpms_off_ps_idx = 1;
   VAR_11->pm.profiles[VAR_7].dpms_on_ps_idx = 1;
   VAR_11->pm.profiles[VAR_7].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_7].dpms_on_cm_idx = 1;

   VAR_11->pm.profiles[VAR_3].dpms_off_ps_idx = 1;
   VAR_11->pm.profiles[VAR_3].dpms_on_ps_idx = 1;
   VAR_11->pm.profiles[VAR_3].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_3].dpms_on_cm_idx = 2;

   VAR_11->pm.profiles[VAR_4].dpms_off_ps_idx = 2;
   VAR_11->pm.profiles[VAR_4].dpms_on_ps_idx = 2;
   VAR_11->pm.profiles[VAR_4].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_4].dpms_on_cm_idx = 0;

   VAR_11->pm.profiles[VAR_6].dpms_off_ps_idx = 2;
   VAR_11->pm.profiles[VAR_6].dpms_on_ps_idx = 2;
   VAR_11->pm.profiles[VAR_6].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_6].dpms_on_cm_idx = 1;

   VAR_11->pm.profiles[VAR_2].dpms_off_ps_idx = 2;
   VAR_11->pm.profiles[VAR_2].dpms_on_ps_idx = 2;
   VAR_11->pm.profiles[VAR_2].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_2].dpms_on_cm_idx = 2;
  } else {

   VAR_11->pm.profiles[VAR_1].dpms_off_ps_idx = VAR_11->pm.default_power_state_index;
   VAR_11->pm.profiles[VAR_1].dpms_on_ps_idx = VAR_11->pm.default_power_state_index;
   VAR_11->pm.profiles[VAR_1].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_1].dpms_on_cm_idx = 2;

   if (VAR_11->flags & VAR_10)
    VAR_12 = FUNC_0(VAR_11, VAR_8, 0);
   else
    VAR_12 = FUNC_0(VAR_11, VAR_9, 0);
   VAR_11->pm.profiles[VAR_5].dpms_off_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_5].dpms_on_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_5].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_5].dpms_on_cm_idx = 0;

   VAR_11->pm.profiles[VAR_7].dpms_off_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_7].dpms_on_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_7].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_7].dpms_on_cm_idx = 1;

   VAR_12 = FUNC_0(VAR_11, VAR_9, 0);
   VAR_11->pm.profiles[VAR_3].dpms_off_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_3].dpms_on_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_3].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_3].dpms_on_cm_idx = 2;

   if (VAR_11->flags & VAR_10)
    VAR_12 = FUNC_0(VAR_11, VAR_8, 1);
   else
    VAR_12 = FUNC_0(VAR_11, VAR_9, 1);
   VAR_11->pm.profiles[VAR_4].dpms_off_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_4].dpms_on_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_4].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_4].dpms_on_cm_idx = 0;

   VAR_11->pm.profiles[VAR_6].dpms_off_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_6].dpms_on_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_6].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_6].dpms_on_cm_idx = 1;

   VAR_12 = FUNC_0(VAR_11, VAR_9, 1);
   VAR_11->pm.profiles[VAR_2].dpms_off_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_2].dpms_on_ps_idx = VAR_12;
   VAR_11->pm.profiles[VAR_2].dpms_off_cm_idx = 0;
   VAR_11->pm.profiles[VAR_2].dpms_on_cm_idx = 2;
  }
 }
}
