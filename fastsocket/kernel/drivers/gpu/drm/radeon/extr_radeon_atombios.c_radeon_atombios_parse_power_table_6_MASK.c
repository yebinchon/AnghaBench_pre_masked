
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nonClockInfoIndex; int ucNumDPMLevels; int* clockInfoIndex; } ;
union pplib_power_state {TYPE_3__ v2; } ;
typedef union pplib_clock_info {int dummy; } pplib_clock_info ;
struct TYPE_8__ {int usNonClockInfoArrayOffset; int usClockInfoArrayOffset; int usStateArrayOffset; int sThermalController; } ;
union power_info {TYPE_1__ pplib; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_power_state {int dummy; } ;
struct radeon_pm_clock_info {int dummy; } ;
struct radeon_mode_info {TYPE_7__* atom_context; } ;
struct TYPE_11__ {int default_power_state_index; TYPE_6__* power_state; } ;
struct TYPE_9__ {int default_sclk; int default_mclk; } ;
struct radeon_device {TYPE_4__ pm; TYPE_2__ clock; struct radeon_mode_info mode_info; } ;
struct _StateArray {int ucNumEntries; scalar_t__ states; } ;
struct _NonClockInfoArray {int * nonClockInfo; } ;
struct _ClockInfoArray {int ucEntrySize; int * clockInfo; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int dummy; } ;
struct TYPE_14__ {scalar_t__ bios; } ;
struct TYPE_13__ {int num_clock_modes; TYPE_5__* clock_info; TYPE_5__* default_clock_mode; int type; } ;
struct TYPE_12__ {int flags; int sclk; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,int,int *,int *,int *,scalar_t__*) ;
 void* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*,int *) ;
 int FUNC_5 (struct radeon_device*,int,int,union pplib_clock_info*) ;
 int FUNC_6 (struct radeon_device*,int,int,struct _ATOM_PPLIB_NONCLOCK_INFO*) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_5)
{
 struct radeon_mode_info *VAR_6 = &VAR_5->mode_info;
 struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_7;
 union pplib_power_state *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0, VAR_14 = 0;
 union pplib_clock_info *VAR_15;
 struct _StateArray *VAR_16;
 struct _ClockInfoArray *VAR_17;
 struct _NonClockInfoArray *VAR_18;
 bool VAR_19;
 union power_info *VAR_20;
 int VAR_21 = FUNC_0(VAR_0, VAR_3);
        u16 VAR_22;
 u8 VAR_23, VAR_24;
 u8 *VAR_25;

 if (!FUNC_1(VAR_6->atom_context, VAR_21, ((void*)0),
       &VAR_23, &VAR_24, &VAR_22))
  return VAR_13;
 VAR_20 = (union power_info *)(VAR_6->atom_context->bios + VAR_22);

 FUNC_4(VAR_5, &VAR_20->pplib.sThermalController);
 VAR_16 = (struct _StateArray *)
  (VAR_6->atom_context->bios + VAR_22 +
   FUNC_3(VAR_20->pplib.usStateArrayOffset));
 VAR_17 = (struct _ClockInfoArray *)
  (VAR_6->atom_context->bios + VAR_22 +
   FUNC_3(VAR_20->pplib.usClockInfoArrayOffset));
 VAR_18 = (struct _NonClockInfoArray *)
  (VAR_6->atom_context->bios + VAR_22 +
   FUNC_3(VAR_20->pplib.usNonClockInfoArrayOffset));
 if (VAR_16->ucNumEntries == 0)
  return VAR_13;
 VAR_5->pm.power_state = FUNC_2(sizeof(struct radeon_power_state) *
           VAR_16->ucNumEntries, VAR_1);
 if (!VAR_5->pm.power_state)
  return VAR_13;
 VAR_25 = (u8 *)VAR_16->states;
 for (VAR_9 = 0; VAR_9 < VAR_16->ucNumEntries; VAR_9++) {
  VAR_14 = 0;
  VAR_8 = (union pplib_power_state *)VAR_25;
  VAR_11 = VAR_8->v2.nonClockInfoIndex;
  VAR_7 = (struct _ATOM_PPLIB_NONCLOCK_INFO *)
   &VAR_18->nonClockInfo[VAR_11];
  VAR_5->pm.power_state[VAR_9].clock_info = FUNC_2(sizeof(struct radeon_pm_clock_info) *
            (VAR_8->v2.ucNumDPMLevels ?
             VAR_8->v2.ucNumDPMLevels : 1),
            VAR_1);
  if (!VAR_5->pm.power_state[VAR_9].clock_info)
   return VAR_13;
  if (VAR_8->v2.ucNumDPMLevels) {
   for (VAR_10 = 0; VAR_10 < VAR_8->v2.ucNumDPMLevels; VAR_10++) {
    VAR_12 = VAR_8->v2.clockInfoIndex[VAR_10];
    VAR_15 = (union pplib_clock_info *)
     &VAR_17->clockInfo[VAR_12 * VAR_17->ucEntrySize];
    VAR_19 = FUNC_5(VAR_5,
                VAR_13, VAR_14,
                VAR_15);
    if (VAR_19)
     VAR_14++;
   }
  } else {
   VAR_5->pm.power_state[VAR_13].clock_info[0].mclk =
    VAR_5->clock.default_mclk;
   VAR_5->pm.power_state[VAR_13].clock_info[0].sclk =
    VAR_5->clock.default_sclk;
   VAR_14++;
  }
  VAR_5->pm.power_state[VAR_13].num_clock_modes = VAR_14;
  if (VAR_14) {
   FUNC_6(VAR_5, VAR_13, VAR_14,
           VAR_7);
   VAR_13++;
  }
  VAR_25 += 2 + VAR_8->v2.ucNumDPMLevels;
 }

 for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
  if (VAR_5->pm.power_state[VAR_9].num_clock_modes > 1)
   VAR_5->pm.power_state[VAR_9].clock_info[0].flags |=
    VAR_4;
 }

 if (VAR_5->pm.default_power_state_index == -1) {
  VAR_5->pm.power_state[0].type =
   VAR_2;
  VAR_5->pm.default_power_state_index = 0;
  VAR_5->pm.power_state[0].default_clock_mode =
   &VAR_5->pm.power_state[0].clock_info[0];
 }
 return VAR_13;
}
