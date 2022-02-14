
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int default_power_state_index; TYPE_2__* power_state; TYPE_1__* profiles; } ;
struct radeon_device {int flags; TYPE_3__ pm; } ;
struct TYPE_5__ {scalar_t__ num_clock_modes; } ;
struct TYPE_4__ {int dpms_off_ps_idx; int dpms_on_ps_idx; scalar_t__ dpms_on_cm_idx; scalar_t__ dpms_off_cm_idx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct radeon_device*,int ,int ) ;

void FUNC_1(struct radeon_device *VAR_10)
{
 int VAR_11;


 VAR_10->pm.profiles[VAR_0].dpms_off_ps_idx = VAR_10->pm.default_power_state_index;
 VAR_10->pm.profiles[VAR_0].dpms_on_ps_idx = VAR_10->pm.default_power_state_index;
 VAR_10->pm.profiles[VAR_0].dpms_off_cm_idx = 0;
 VAR_10->pm.profiles[VAR_0].dpms_on_cm_idx = 0;


 if (VAR_10->flags & VAR_9)
  VAR_11 = FUNC_0(VAR_10, VAR_7, 0);
 else
  VAR_11 = FUNC_0(VAR_10, VAR_8, 0);

 VAR_10->pm.profiles[VAR_4].dpms_off_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_4].dpms_on_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_4].dpms_off_cm_idx = 0;
 VAR_10->pm.profiles[VAR_4].dpms_on_cm_idx = 0;

 VAR_10->pm.profiles[VAR_3].dpms_off_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_3].dpms_on_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_3].dpms_off_cm_idx = 0;
 VAR_10->pm.profiles[VAR_3].dpms_on_cm_idx = 0;

 VAR_10->pm.profiles[VAR_6].dpms_off_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_6].dpms_on_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_6].dpms_off_cm_idx = 0;
 VAR_10->pm.profiles[VAR_6].dpms_on_cm_idx = 0;

 VAR_10->pm.profiles[VAR_5].dpms_off_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_5].dpms_on_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_5].dpms_off_cm_idx = 0;
 VAR_10->pm.profiles[VAR_5].dpms_on_cm_idx = 0;


 VAR_11 = FUNC_0(VAR_10, VAR_8, 0);
 VAR_10->pm.profiles[VAR_2].dpms_off_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_2].dpms_on_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_2].dpms_off_cm_idx = 0;
 VAR_10->pm.profiles[VAR_2].dpms_on_cm_idx =
  VAR_10->pm.power_state[VAR_11].num_clock_modes - 1;

 VAR_10->pm.profiles[VAR_1].dpms_off_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_1].dpms_on_ps_idx = VAR_11;
 VAR_10->pm.profiles[VAR_1].dpms_off_cm_idx = 0;
 VAR_10->pm.profiles[VAR_1].dpms_on_cm_idx =
  VAR_10->pm.power_state[VAR_11].num_clock_modes - 1;
}
