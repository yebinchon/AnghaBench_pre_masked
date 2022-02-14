
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef unsigned long u32 ;
typedef unsigned long u16 ;
struct megasas_instance {TYPE_1__* pdev; } ;
struct RAID_CONTEXT {int spanArm; int regLockFlags; } ;
struct MR_LD_RAID {int level; scalar_t__ regTypeReqOnRead; } ;
struct MR_FW_RAID_MAP_ALL {int dummy; } ;
struct IO_REQUEST_INFO {unsigned long devHandle; int start_span; int start_row; int pdBlock; } ;
struct TYPE_4__ {unsigned long startBlk; } ;
struct TYPE_3__ {scalar_t__ device; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int,struct MR_FW_RAID_MAP_ALL*) ;
 struct MR_LD_RAID* FUNC_1 (unsigned long,struct MR_FW_RAID_MAP_ALL*) ;
 unsigned long FUNC_2 (unsigned long,int,struct MR_FW_RAID_MAP_ALL*) ;
 TYPE_2__* FUNC_3 (unsigned long,int,struct MR_FW_RAID_MAP_ALL*) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_4 (unsigned long,struct MR_FW_RAID_MAP_ALL*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long FUNC_5 (struct MR_FW_RAID_MAP_ALL*,unsigned long,int) ;
 int VAR_7 ;
 int FUNC_6 (struct megasas_instance*,unsigned long,int,int ,struct MR_FW_RAID_MAP_ALL*) ;
 unsigned long FUNC_7 (struct megasas_instance*,unsigned long,int ,struct MR_FW_RAID_MAP_ALL*) ;
 unsigned long FUNC_8 (int ,unsigned long) ;

__attribute__((used)) static u8 FUNC_9(struct megasas_instance *VAR_8, u32 VAR_9,
  u64 VAR_10, u16 VAR_11, struct IO_REQUEST_INFO *VAR_12,
  struct RAID_CONTEXT *VAR_13,
  struct MR_FW_RAID_MAP_ALL *VAR_14)
{
 struct MR_LD_RAID *VAR_15 = FUNC_1(VAR_9, VAR_14);
 u32 VAR_16, VAR_17;
 u8 VAR_18, VAR_19;
 u64 VAR_20;
 u8 VAR_21 = VAR_7;
 u8 VAR_22 = 0;
 u64 *VAR_23 = &VAR_12->pdBlock;
 u16 *VAR_24 = &VAR_12->devHandle;
 u32 VAR_25, VAR_26, VAR_27, VAR_28;

 if ((VAR_8->pdev->device == VAR_3 ||
  VAR_8->pdev->device == VAR_2))
  VAR_22 = 1;


 VAR_20 = VAR_12->start_row;
 VAR_19 = VAR_12->start_span;


 if (VAR_15->level == 6) {
  VAR_25 = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_14);
  if (VAR_25 == -1UL)
   return VAR_0;
  VAR_26 = FUNC_8(VAR_20, FUNC_5(VAR_14, VAR_9, VAR_19));
  VAR_27 = FUNC_5(VAR_14, VAR_9, VAR_19) - 1 - VAR_26;
  VAR_28 = VAR_27 + 1 + VAR_25;
  if (VAR_28 >= FUNC_5(VAR_14, VAR_9, VAR_19))
   VAR_28 -= FUNC_5(VAR_14, VAR_9, VAR_19);
  VAR_18 = (u8)VAR_28;
 } else

  VAR_18 = FUNC_6(VAR_8, VAR_9, VAR_19, VAR_10, VAR_14);
 if (VAR_18 == 0xFF)
  return VAR_0;

 VAR_17 = FUNC_2(VAR_9, VAR_19, VAR_14);
 VAR_16 = FUNC_0(VAR_17, VAR_18, VAR_14);

 if (VAR_16 != VAR_1)
  *VAR_24 = FUNC_4(VAR_16, VAR_14);
 else {
  *VAR_24 = VAR_1;
  if ((VAR_15->level >= 5) &&
   (!VAR_22 || (VAR_22 &&
   (VAR_15->regTypeReqOnRead != VAR_6))))
   VAR_13->regLockFlags = VAR_5;
  else if (VAR_15->level == 1) {
   VAR_16 = FUNC_0(VAR_17, VAR_18 + 1, VAR_14);
   if (VAR_16 != VAR_1)
    *VAR_24 = FUNC_4(VAR_16, VAR_14);
  }
 }

 *VAR_23 += VAR_11 + FUNC_3(VAR_9, VAR_19, VAR_14)->startBlk;
 VAR_13->spanArm = (VAR_19 << VAR_4) |
     VAR_18;
 return VAR_21;
}
