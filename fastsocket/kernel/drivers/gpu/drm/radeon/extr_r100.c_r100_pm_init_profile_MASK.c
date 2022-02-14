
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* profiles; scalar_t__ default_power_state_index; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_3__ {scalar_t__ dpms_on_cm_idx; scalar_t__ dpms_off_cm_idx; scalar_t__ dpms_on_ps_idx; scalar_t__ dpms_off_ps_idx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

void FUNC_0(struct radeon_device *VAR_7)
{

 VAR_7->pm.profiles[VAR_0].dpms_off_ps_idx = VAR_7->pm.default_power_state_index;
 VAR_7->pm.profiles[VAR_0].dpms_on_ps_idx = VAR_7->pm.default_power_state_index;
 VAR_7->pm.profiles[VAR_0].dpms_off_cm_idx = 0;
 VAR_7->pm.profiles[VAR_0].dpms_on_cm_idx = 0;

 VAR_7->pm.profiles[VAR_4].dpms_off_ps_idx = 0;
 VAR_7->pm.profiles[VAR_4].dpms_on_ps_idx = 0;
 VAR_7->pm.profiles[VAR_4].dpms_off_cm_idx = 0;
 VAR_7->pm.profiles[VAR_4].dpms_on_cm_idx = 0;

 VAR_7->pm.profiles[VAR_6].dpms_off_ps_idx = 0;
 VAR_7->pm.profiles[VAR_6].dpms_on_ps_idx = 0;
 VAR_7->pm.profiles[VAR_6].dpms_off_cm_idx = 0;
 VAR_7->pm.profiles[VAR_6].dpms_on_cm_idx = 0;

 VAR_7->pm.profiles[VAR_2].dpms_off_ps_idx = 0;
 VAR_7->pm.profiles[VAR_2].dpms_on_ps_idx = VAR_7->pm.default_power_state_index;
 VAR_7->pm.profiles[VAR_2].dpms_off_cm_idx = 0;
 VAR_7->pm.profiles[VAR_2].dpms_on_cm_idx = 0;

 VAR_7->pm.profiles[VAR_3].dpms_off_ps_idx = 0;
 VAR_7->pm.profiles[VAR_3].dpms_on_ps_idx = VAR_7->pm.default_power_state_index;
 VAR_7->pm.profiles[VAR_3].dpms_off_cm_idx = 0;
 VAR_7->pm.profiles[VAR_3].dpms_on_cm_idx = 0;

 VAR_7->pm.profiles[VAR_5].dpms_off_ps_idx = 0;
 VAR_7->pm.profiles[VAR_5].dpms_on_ps_idx = VAR_7->pm.default_power_state_index;
 VAR_7->pm.profiles[VAR_5].dpms_off_cm_idx = 0;
 VAR_7->pm.profiles[VAR_5].dpms_on_cm_idx = 0;

 VAR_7->pm.profiles[VAR_1].dpms_off_ps_idx = 0;
 VAR_7->pm.profiles[VAR_1].dpms_on_ps_idx = VAR_7->pm.default_power_state_index;
 VAR_7->pm.profiles[VAR_1].dpms_off_cm_idx = 0;
 VAR_7->pm.profiles[VAR_1].dpms_on_cm_idx = 0;
}
