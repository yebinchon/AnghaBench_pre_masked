
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {int default_power_state_index; TYPE_4__* power_state; int default_vddci; scalar_t__ default_vddc; int default_mclk; int default_sclk; } ;
struct TYPE_6__ {int default_sclk; int default_mclk; } ;
struct radeon_device {int flags; TYPE_5__ pm; TYPE_1__ clock; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int usClassification; int ulCapsAndSettings; } ;
struct TYPE_9__ {int misc; int misc2; int pcie_lanes; TYPE_3__* clock_info; TYPE_3__* default_clock_mode; void* type; int flags; } ;
struct TYPE_7__ {scalar_t__ voltage; int vddci; } ;
struct TYPE_8__ {TYPE_2__ voltage; int sclk; int mclk; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_12,
             int VAR_13, int VAR_14,
             struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_15)
{
 int VAR_16;
 u32 VAR_17 = FUNC_2(VAR_15->ulCapsAndSettings);
 u32 VAR_18 = FUNC_1(VAR_15->usClassification);
 u16 VAR_19, VAR_20;

 FUNC_3(VAR_12, &VAR_19, &VAR_20);

 VAR_12->pm.power_state[VAR_13].misc = VAR_17;
 VAR_12->pm.power_state[VAR_13].misc2 = VAR_18;
 VAR_12->pm.power_state[VAR_13].pcie_lanes =
  ((VAR_17 & VAR_3) >>
   VAR_4) + 1;
 switch (VAR_18 & VAR_2) {
 case 130:
  VAR_12->pm.power_state[VAR_13].type =
   VAR_7;
  break;
 case 131:
  VAR_12->pm.power_state[VAR_13].type =
   VAR_6;
  break;
 case 128:
  VAR_12->pm.power_state[VAR_13].type =
   VAR_9;
  break;
 case 129:
  if (VAR_18 & VAR_0)
   VAR_12->pm.power_state[VAR_13].type =
    VAR_9;
  break;
 }
 VAR_12->pm.power_state[VAR_13].flags = 0;
 if (VAR_17 & VAR_5)
  VAR_12->pm.power_state[VAR_13].flags |=
   VAR_11;
 if (VAR_18 & VAR_1) {
  VAR_12->pm.power_state[VAR_13].type =
   VAR_8;
  VAR_12->pm.default_power_state_index = VAR_13;
  VAR_12->pm.power_state[VAR_13].default_clock_mode =
   &VAR_12->pm.power_state[VAR_13].clock_info[VAR_14 - 1];
  if (FUNC_0(VAR_12) && !(VAR_12->flags & VAR_10)) {

   VAR_12->pm.default_sclk = VAR_12->pm.power_state[VAR_13].clock_info[0].sclk;
   VAR_12->pm.default_mclk = VAR_12->pm.power_state[VAR_13].clock_info[0].mclk;
   VAR_12->pm.default_vddc = VAR_12->pm.power_state[VAR_13].clock_info[0].voltage.voltage;
   VAR_12->pm.default_vddci = VAR_12->pm.power_state[VAR_13].clock_info[0].voltage.vddci;
  } else {

   for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
    VAR_12->pm.power_state[VAR_13].clock_info[VAR_16].mclk =
     VAR_12->clock.default_mclk;
    VAR_12->pm.power_state[VAR_13].clock_info[VAR_16].sclk =
     VAR_12->clock.default_sclk;
    if (VAR_19)
     VAR_12->pm.power_state[VAR_13].clock_info[VAR_16].voltage.voltage =
      VAR_19;
   }
  }
 }
}
