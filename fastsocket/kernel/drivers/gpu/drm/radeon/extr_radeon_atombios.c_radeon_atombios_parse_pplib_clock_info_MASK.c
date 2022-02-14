
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
struct TYPE_18__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usVDDCI; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
struct TYPE_13__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usVDDCI; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
struct TYPE_12__ {int ucLowEngineClockHigh; int usLowEngineClockLow; } ;
struct TYPE_11__ {int ucEngineClockHigh; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_1__ r600; TYPE_9__ evergreen; TYPE_4__ si; TYPE_3__ rs780; TYPE_2__ sumo; } ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_17__ {TYPE_7__* power_state; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_8__ pm; } ;
struct TYPE_16__ {TYPE_6__* clock_info; } ;
struct TYPE_14__ {int voltage; void* type; void* vddci; } ;
struct TYPE_15__ {int sclk; int mclk; TYPE_5__ voltage; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*,int ,int,int*) ;

__attribute__((used)) static bool FUNC_4(struct radeon_device *VAR_4,
         int VAR_5, int VAR_6,
         union pplib_clock_info *VAR_7)
{
 u32 VAR_8, VAR_9;
 u16 VAR_10;

 if (VAR_4->flags & VAR_1) {
  if (VAR_4->family >= VAR_0) {
   VAR_8 = FUNC_2(VAR_7->sumo.usEngineClockLow);
   VAR_8 |= VAR_7->sumo.ucEngineClockHigh << 16;
   VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].sclk = VAR_8;
  } else {
   VAR_8 = FUNC_2(VAR_7->rs780.usLowEngineClockLow);
   VAR_8 |= VAR_7->rs780.ucLowEngineClockHigh << 16;
   VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].sclk = VAR_8;
  }
 } else if (FUNC_1(VAR_4)) {
  VAR_8 = FUNC_2(VAR_7->si.usEngineClockLow);
  VAR_8 |= VAR_7->si.ucEngineClockHigh << 16;
  VAR_9 = FUNC_2(VAR_7->si.usMemoryClockLow);
  VAR_9 |= VAR_7->si.ucMemoryClockHigh << 16;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].mclk = VAR_9;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].sclk = VAR_8;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.type =
   VAR_2;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.voltage =
   FUNC_2(VAR_7->si.usVDDC);
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.vddci =
   FUNC_2(VAR_7->si.usVDDCI);
 } else if (FUNC_0(VAR_4)) {
  VAR_8 = FUNC_2(VAR_7->evergreen.usEngineClockLow);
  VAR_8 |= VAR_7->evergreen.ucEngineClockHigh << 16;
  VAR_9 = FUNC_2(VAR_7->evergreen.usMemoryClockLow);
  VAR_9 |= VAR_7->evergreen.ucMemoryClockHigh << 16;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].mclk = VAR_9;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].sclk = VAR_8;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.type =
   VAR_2;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.voltage =
   FUNC_2(VAR_7->evergreen.usVDDC);
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.vddci =
   FUNC_2(VAR_7->evergreen.usVDDCI);
 } else {
  VAR_8 = FUNC_2(VAR_7->r600.usEngineClockLow);
  VAR_8 |= VAR_7->r600.ucEngineClockHigh << 16;
  VAR_9 = FUNC_2(VAR_7->r600.usMemoryClockLow);
  VAR_9 |= VAR_7->r600.ucMemoryClockHigh << 16;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].mclk = VAR_9;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].sclk = VAR_8;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.type =
   VAR_2;
  VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.voltage =
   FUNC_2(VAR_7->r600.usVDDC);
 }


 switch (VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.voltage) {
 case 131:
 case 130:
 case 129:
 case 128:
  if (FUNC_3(VAR_4, VAR_3,
          VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.voltage,
          &VAR_10) == 0)
   VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].voltage.voltage = VAR_10;
  break;
 default:
  break;
 }

 if (VAR_4->flags & VAR_1) {

  if (VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].sclk == 0)
   return 0;
 } else {

  if ((VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].mclk == 0) ||
      (VAR_4->pm.power_state[VAR_5].clock_info[VAR_6].sclk == 0))
   return 0;
 }
 return 1;
}
