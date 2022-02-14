
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t current_power_state_index; size_t default_power_state_index; scalar_t__ pm_method; scalar_t__ dynpm_state; int mutex; int dynpm_idle_work; TYPE_3__* power_state; int current_vddci; int current_vddc; scalar_t__ default_mclk; scalar_t__ current_mclk; scalar_t__ default_sclk; scalar_t__ current_sclk; scalar_t__ current_clock_mode_index; scalar_t__ default_vddci; scalar_t__ default_vddc; } ;
struct radeon_device {scalar_t__ family; TYPE_4__ pm; scalar_t__ mc_fw; } ;
struct TYPE_7__ {TYPE_2__* clock_info; } ;
struct TYPE_5__ {int vddci; int voltage; } ;
struct TYPE_6__ {TYPE_1__ voltage; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*,scalar_t__,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,scalar_t__) ;
 int FUNC_6 (struct radeon_device*,scalar_t__) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(struct radeon_device *VAR_8)
{

 if ((VAR_8->family >= VAR_0) &&
     (VAR_8->family <= VAR_1) &&
     VAR_8->mc_fw) {
  if (VAR_8->pm.default_vddc)
   FUNC_3(VAR_8, VAR_8->pm.default_vddc,
      VAR_6);
  if (VAR_8->pm.default_vddci)
   FUNC_3(VAR_8, VAR_8->pm.default_vddci,
      VAR_7);
  if (VAR_8->pm.default_sclk)
   FUNC_5(VAR_8, VAR_8->pm.default_sclk);
  if (VAR_8->pm.default_mclk)
   FUNC_6(VAR_8, VAR_8->pm.default_mclk);
 }

 FUNC_1(&VAR_8->pm.mutex);
 VAR_8->pm.current_power_state_index = VAR_8->pm.default_power_state_index;
 VAR_8->pm.current_clock_mode_index = 0;
 VAR_8->pm.current_sclk = VAR_8->pm.default_sclk;
 VAR_8->pm.current_mclk = VAR_8->pm.default_mclk;
 VAR_8->pm.current_vddc = VAR_8->pm.power_state[VAR_8->pm.default_power_state_index].clock_info[0].voltage.voltage;
 VAR_8->pm.current_vddci = VAR_8->pm.power_state[VAR_8->pm.default_power_state_index].clock_info[0].voltage.vddci;
 if (VAR_8->pm.pm_method == VAR_4
     && VAR_8->pm.dynpm_state == VAR_3) {
  VAR_8->pm.dynpm_state = VAR_2;
  FUNC_7(&VAR_8->pm.dynpm_idle_work,
          FUNC_0(VAR_5));
 }
 FUNC_2(&VAR_8->pm.mutex);
 FUNC_4(VAR_8);
}
