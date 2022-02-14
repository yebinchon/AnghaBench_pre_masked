
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct radeon_power_state {int dummy; } ;
struct radeon_pm_clock_info {int dummy; } ;
struct radeon_i2c_bus_rec {int valid; int hw_capable; int mm_i2c; int i2c_id; } ;
struct TYPE_16__ {int default_power_state_index; int num_power_states; int current_power_state_index; scalar_t__ current_clock_mode_index; TYPE_7__* power_state; TYPE_2__* i2c_bus; } ;
struct TYPE_12__ {scalar_t__ default_mclk; scalar_t__ default_sclk; } ;
struct radeon_device {int flags; TYPE_8__ pm; TYPE_4__ clock; struct drm_device* ddev; } ;
struct i2c_board_info {int addr; int type; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_15__ {int num_clock_modes; int misc; int misc2; int pcie_lanes; scalar_t__ flags; TYPE_6__* clock_info; TYPE_6__* default_clock_mode; int type; } ;
struct TYPE_11__ {int valid; int reg; int mask; } ;
struct TYPE_13__ {int active_high; int delay; void* type; TYPE_3__ gpio; } ;
struct TYPE_14__ {scalar_t__ mclk; scalar_t__ sclk; TYPE_5__ voltage; } ;
struct TYPE_10__ {int adapter; } ;
struct TYPE_9__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_4 (struct drm_device*,int ) ;
 struct radeon_i2c_bus_rec FUNC_5 (struct radeon_device*,int,int,int) ;
 int FUNC_6 (int *,struct i2c_board_info*) ;
 void* FUNC_7 (int,int ) ;
 void* FUNC_8 (struct radeon_device*,struct radeon_i2c_bus_rec*) ;
 int FUNC_9 (int ,char const*,int) ;
 char const** VAR_12 ;

void FUNC_10(struct radeon_device *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->ddev;
 u16 VAR_15, VAR_16, VAR_17 = 0;
 u8 VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0;
 struct radeon_i2c_bus_rec VAR_22;

 VAR_13->pm.default_power_state_index = -1;


 VAR_13->pm.power_state = FUNC_7(sizeof(struct radeon_power_state) * 2, VAR_5);
 if (VAR_13->pm.power_state) {

  VAR_13->pm.power_state[0].clock_info =
   FUNC_7(sizeof(struct radeon_pm_clock_info) * 1, VAR_5);
  VAR_13->pm.power_state[1].clock_info =
   FUNC_7(sizeof(struct radeon_pm_clock_info) * 1, VAR_5);
  if (!VAR_13->pm.power_state[0].clock_info ||
      !VAR_13->pm.power_state[1].clock_info)
   goto pm_failed;
 } else
  goto pm_failed;


 VAR_15 = FUNC_4(VAR_14, VAR_0);
 if (VAR_15) {
  u8 VAR_23 = 0, VAR_24 = 0, VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;

  VAR_18 = FUNC_3(VAR_15);

  if (VAR_18 == 0) {
   VAR_23 = FUNC_3(VAR_15 + 3);
   VAR_24 = FUNC_3(VAR_15 + 4) & 0x3f;
   VAR_25 = FUNC_3(VAR_15 + 5);
  } else if (VAR_18 == 1) {
   VAR_23 = FUNC_3(VAR_15 + 4);
   VAR_24 = FUNC_3(VAR_15 + 5) & 0x3f;
   VAR_25 = FUNC_3(VAR_15 + 6);
  } else if (VAR_18 == 2) {
   VAR_23 = FUNC_3(VAR_15 + 4);
   VAR_24 = FUNC_3(VAR_15 + 5) & 0x3f;
   VAR_25 = FUNC_3(VAR_15 + 6);
   VAR_26 = FUNC_3(VAR_15 + 0xa);
   VAR_27 = FUNC_3(VAR_15 + 0xb);
  }
  if ((VAR_23 > 0) && (VAR_23 < 3)) {
   FUNC_0("Possible %s thermal controller at 0x%02x\n",
     VAR_12[VAR_23],
     VAR_25 >> 1);
   if (VAR_24 == VAR_3) {

    VAR_22.valid = 1;
    VAR_22.hw_capable = 1;
    VAR_22.mm_i2c = 1;
    VAR_22.i2c_id = 0xa0;
   } else if (VAR_24 == VAR_2)
    VAR_22 = FUNC_5(VAR_13, VAR_24, 1 << VAR_26, 1 << VAR_27);
   else
    VAR_22 = FUNC_5(VAR_13, VAR_24, 0, 0);
   VAR_13->pm.i2c_bus = FUNC_8(VAR_13, &VAR_22);
   if (VAR_13->pm.i2c_bus) {
    struct i2c_board_info VAR_28 = { };
    const char *VAR_29 = VAR_12[VAR_23];
    VAR_28.addr = VAR_25 >> 1;
    FUNC_9(VAR_28.type, VAR_29, sizeof(VAR_28.type));
    FUNC_6(&VAR_13->pm.i2c_bus->adapter, &VAR_28);
   }
  }
 } else {



  if ((VAR_14->pdev->device == 0x4152) &&
      (VAR_14->pdev->subsystem_vendor == 0x1043) &&
      (VAR_14->pdev->subsystem_device == 0xc002)) {
   VAR_22 = FUNC_5(VAR_13, VAR_4, 0, 0);
   VAR_13->pm.i2c_bus = FUNC_8(VAR_13, &VAR_22);
   if (VAR_13->pm.i2c_bus) {
    struct i2c_board_info VAR_30 = { };
    const char *VAR_31 = "f75375";
    VAR_30.addr = 0x28;
    FUNC_9(VAR_30.type, VAR_31, sizeof(VAR_30.type));
    FUNC_6(&VAR_13->pm.i2c_bus->adapter, &VAR_30);
    FUNC_0("Possible %s thermal controller at 0x%02x\n",
      VAR_31, VAR_30.addr);
   }
  }
 }

 if (VAR_13->flags & VAR_8) {
  VAR_15 = FUNC_4(VAR_14, VAR_1);
  if (VAR_15) {
   VAR_18 = FUNC_3(VAR_15);
   VAR_19 = FUNC_3(VAR_15 + 0x2);

   VAR_13->pm.power_state[VAR_21].num_clock_modes = 1;
   VAR_13->pm.power_state[VAR_21].clock_info[0].mclk = FUNC_2(VAR_15 + 0x5 + 0x2);
   VAR_13->pm.power_state[VAR_21].clock_info[0].sclk = FUNC_2(VAR_15 + 0x5 + 0x6);
   if ((VAR_13->pm.power_state[VAR_21].clock_info[0].mclk == 0) ||
       (VAR_13->pm.power_state[VAR_21].clock_info[0].sclk == 0))
    goto default_mode;
   VAR_13->pm.power_state[VAR_21].type =
    VAR_6;
   VAR_16 = FUNC_1(VAR_15 + 0x5 + 0x0);
   if (VAR_18 > 4)
    VAR_17 = FUNC_1(VAR_15 + 0x5 + 0xe);
   VAR_13->pm.power_state[VAR_21].misc = VAR_16;
   VAR_13->pm.power_state[VAR_21].misc2 = VAR_17;
   if (VAR_16 & 0x4) {
    VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.type = VAR_10;
    if (VAR_16 & 0x8)
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.active_high =
      1;
    else
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.active_high =
      0;
    VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.gpio.valid = 1;
    if (VAR_18 < 6) {
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.gpio.reg =
      FUNC_1(VAR_15 + 0x5 + 0xb) * 4;
     VAR_20 = FUNC_3(VAR_15 + 0x5 + 0xd);
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.gpio.mask = (1 << VAR_20);
    } else {
     u8 VAR_32 = FUNC_3(VAR_15 + 0x5 + 0xb);
     u16 VAR_33 = FUNC_1(VAR_15 + 0x5 + 0xc);
     if (VAR_32 && VAR_33) {
      VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.gpio.reg =
       FUNC_1(VAR_33) * 4;
      VAR_20 = FUNC_3(VAR_33 + 0x2);
      VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.gpio.mask = (1 << VAR_20);
     } else
      VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.gpio.valid = 0;
    }
    switch ((VAR_17 & 0x700) >> 8) {
    case 0:
    default:
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.delay = 0;
     break;
    case 1:
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.delay = 33;
     break;
    case 2:
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.delay = 66;
     break;
    case 3:
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.delay = 99;
     break;
    case 4:
     VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.delay = 132;
     break;
    }
   } else
    VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.type = VAR_11;
   if (VAR_18 > 6)
    VAR_13->pm.power_state[VAR_21].pcie_lanes =
     FUNC_3(VAR_15 + 0x5 + 0x10);
   VAR_13->pm.power_state[VAR_21].flags = VAR_9;
   VAR_21++;
  } else {

  }
 } else {

 }

default_mode:

 VAR_13->pm.power_state[VAR_21].type =
  VAR_7;
 VAR_13->pm.power_state[VAR_21].num_clock_modes = 1;
 VAR_13->pm.power_state[VAR_21].clock_info[0].mclk = VAR_13->clock.default_mclk;
 VAR_13->pm.power_state[VAR_21].clock_info[0].sclk = VAR_13->clock.default_sclk;
 VAR_13->pm.power_state[VAR_21].default_clock_mode = &VAR_13->pm.power_state[VAR_21].clock_info[0];
 if ((VAR_21 > 0) &&
     (VAR_13->pm.power_state[0].clock_info[0].voltage.type == VAR_10))
  VAR_13->pm.power_state[VAR_21].clock_info[0].voltage =
   VAR_13->pm.power_state[0].clock_info[0].voltage;
 else
  VAR_13->pm.power_state[VAR_21].clock_info[0].voltage.type = VAR_11;
 VAR_13->pm.power_state[VAR_21].pcie_lanes = 16;
 VAR_13->pm.power_state[VAR_21].flags = 0;
 VAR_13->pm.default_power_state_index = VAR_21;
 VAR_13->pm.num_power_states = VAR_21 + 1;

 VAR_13->pm.current_power_state_index = VAR_13->pm.default_power_state_index;
 VAR_13->pm.current_clock_mode_index = 0;
 return;

pm_failed:
 VAR_13->pm.default_power_state_index = VAR_21;
 VAR_13->pm.num_power_states = 0;

 VAR_13->pm.current_power_state_index = VAR_13->pm.default_power_state_index;
 VAR_13->pm.current_clock_mode_index = 0;
}
