
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_12__ {scalar_t__ requested_clock_mode_index; scalar_t__ current_clock_mode_index; scalar_t__ requested_power_state_index; scalar_t__ current_power_state_index; scalar_t__ default_sclk; scalar_t__ pm_method; scalar_t__ profile_index; scalar_t__ default_mclk; scalar_t__ current_sclk; scalar_t__ current_mclk; TYPE_3__* power_state; TYPE_1__* profiles; scalar_t__ active_crtc_count; } ;
struct radeon_device {scalar_t__ family; TYPE_6__ pm; TYPE_5__* asic; } ;
struct TYPE_10__ {scalar_t__ set_memory_clock; } ;
struct TYPE_11__ {TYPE_4__ pm; } ;
struct TYPE_9__ {TYPE_2__* clock_info; } ;
struct TYPE_8__ {scalar_t__ sclk; scalar_t__ mclk; } ;
struct TYPE_7__ {size_t dpms_on_cm_idx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,scalar_t__) ;
 int FUNC_8 (struct radeon_device*,scalar_t__) ;
 int FUNC_9 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_10(struct radeon_device *VAR_6)
{
 u32 VAR_7, VAR_8;
 bool VAR_9 = 0;

 if ((VAR_6->pm.requested_clock_mode_index == VAR_6->pm.current_clock_mode_index) &&
     (VAR_6->pm.requested_power_state_index == VAR_6->pm.current_power_state_index))
  return;

 if (FUNC_1(VAR_6)) {
  VAR_7 = VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].
   clock_info[VAR_6->pm.requested_clock_mode_index].sclk;
  if (VAR_7 > VAR_6->pm.default_sclk)
   VAR_7 = VAR_6->pm.default_sclk;





  if ((VAR_6->pm.pm_method == VAR_2) &&
      (VAR_6->family >= VAR_0) &&
      VAR_6->pm.active_crtc_count &&
      ((VAR_6->pm.profile_index == VAR_5) ||
       (VAR_6->pm.profile_index == VAR_4)))
   VAR_8 = VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].
    clock_info[VAR_6->pm.profiles[VAR_3].dpms_on_cm_idx].mclk;
  else
   VAR_8 = VAR_6->pm.power_state[VAR_6->pm.requested_power_state_index].
    clock_info[VAR_6->pm.requested_clock_mode_index].mclk;

  if (VAR_8 > VAR_6->pm.default_mclk)
   VAR_8 = VAR_6->pm.default_mclk;


  if (VAR_7 < VAR_6->pm.current_sclk)
   VAR_9 = 1;

  FUNC_9(VAR_6);

  if (VAR_6->pm.pm_method == VAR_1) {
   if (!FUNC_4(VAR_6))
    return;
  }

  FUNC_6(VAR_6);

  if (!VAR_9)

   FUNC_5(VAR_6);


  if (VAR_7 != VAR_6->pm.current_sclk) {
   FUNC_2(VAR_6, 0);
   FUNC_7(VAR_6, VAR_7);
   FUNC_2(VAR_6, 1);
   VAR_6->pm.current_sclk = VAR_7;
   FUNC_0("Setting: e: %d\n", VAR_7);
  }


  if (VAR_6->asic->pm.set_memory_clock && (VAR_8 != VAR_6->pm.current_mclk)) {
   FUNC_2(VAR_6, 0);
   FUNC_8(VAR_6, VAR_8);
   FUNC_2(VAR_6, 1);
   VAR_6->pm.current_mclk = VAR_8;
   FUNC_0("Setting: m: %d\n", VAR_8);
  }

  if (VAR_9)

   FUNC_5(VAR_6);

  FUNC_3(VAR_6);

  VAR_6->pm.current_power_state_index = VAR_6->pm.requested_power_state_index;
  VAR_6->pm.current_clock_mode_index = VAR_6->pm.requested_clock_mode_index;
 } else
  FUNC_0("pm: GUI not idle!!!\n");
}
