
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct megasas_instance {TYPE_1__* pdev; } ;
struct RAID_CONTEXT {int spanArm; int regLockFlags; } ;
struct MR_LD_RAID {scalar_t__ rowDataSize; int level; scalar_t__ rowSize; scalar_t__ modFactor; int spanDepth; int stripeShift; scalar_t__ regTypeReqOnRead; } ;
struct MR_FW_RAID_MAP_ALL {int dummy; } ;
struct IO_REQUEST_INFO {int pdBlock; int devHandle; } ;
struct TYPE_4__ {int startBlk; } ;
struct TYPE_3__ {scalar_t__ device; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,struct MR_FW_RAID_MAP_ALL*) ;
 scalar_t__ FUNC_1 (int,int,int*,struct MR_FW_RAID_MAP_ALL*) ;
 int FUNC_2 (int,int,struct MR_FW_RAID_MAP_ALL*) ;
 struct MR_LD_RAID* FUNC_3 (int,struct MR_FW_RAID_MAP_ALL*) ;
 int FUNC_4 (int,int,struct MR_FW_RAID_MAP_ALL*) ;
 TYPE_2__* FUNC_5 (int,int,struct MR_FW_RAID_MAP_ALL*) ;
 int VAR_1 ;
 int FUNC_6 (int,struct MR_FW_RAID_MAP_ALL*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

u8 FUNC_9(struct megasas_instance *VAR_9, u32 VAR_10, u64 VAR_11,
  u16 VAR_12, struct IO_REQUEST_INFO *VAR_13,
  struct RAID_CONTEXT *VAR_14,
  struct MR_FW_RAID_MAP_ALL *VAR_15)
{
 struct MR_LD_RAID *VAR_16 = FUNC_3(VAR_10, VAR_15);
 u32 VAR_17, VAR_18;
 u8 VAR_19, VAR_20;
 u64 VAR_21;
 u8 VAR_22 = VAR_8;
 u8 VAR_23 = 0;
 u64 *VAR_24 = &VAR_13->pdBlock;
 u16 *VAR_25 = &VAR_13->devHandle;

 if ((VAR_9->pdev->device == VAR_3 ||
  VAR_9->pdev->device == VAR_2))
  VAR_23 = 1;

 VAR_21 = FUNC_7(VAR_11, VAR_16->rowDataSize);

 if (VAR_16->level == 6) {

  u32 VAR_26 = FUNC_8(VAR_11, VAR_16->rowDataSize);
  u32 VAR_27, VAR_28, VAR_29;

  if (VAR_16->rowSize == 0)
   return VAR_0;

  VAR_27 = FUNC_8(VAR_21, VAR_16->rowSize);
  VAR_28 = VAR_16->rowSize-1-VAR_27;
  VAR_29 = VAR_28+1+VAR_26;
  if (VAR_29 >= VAR_16->rowSize)
   VAR_29 -= VAR_16->rowSize;
  VAR_19 = (u8)VAR_29;
 } else {
  if (VAR_16->modFactor == 0)
   return VAR_0;
  VAR_19 = FUNC_2(VAR_10, FUNC_8(VAR_11,
         VAR_16->modFactor),
       VAR_15);
 }

 if (VAR_16->spanDepth == 1) {
  VAR_20 = 0;
  *VAR_24 = VAR_21 << VAR_16->stripeShift;
 } else {
  VAR_20 = (u8)FUNC_1(VAR_10, VAR_21, VAR_24, VAR_15);
  if (VAR_20 == VAR_7)
   return VAR_0;
 }


 VAR_18 = FUNC_4(VAR_10, VAR_20, VAR_15);
 VAR_17 = FUNC_0(VAR_18, VAR_19, VAR_15);

 if (VAR_17 != VAR_1)

  *VAR_25 = FUNC_6(VAR_17, VAR_15);
 else {
  *VAR_25 = VAR_1;
  if ((VAR_16->level >= 5) &&
   (!VAR_23 || (VAR_23 &&
   (VAR_16->regTypeReqOnRead != VAR_6))))
   VAR_14->regLockFlags = VAR_5;
  else if (VAR_16->level == 1) {

   VAR_17 = FUNC_0(VAR_18, VAR_19 + 1, VAR_15);
   if (VAR_17 != VAR_1)

    *VAR_25 = FUNC_6(VAR_17, VAR_15);
  }
 }

 *VAR_24 += VAR_12 + FUNC_5(VAR_10, VAR_20, VAR_15)->startBlk;
 VAR_14->spanArm = (VAR_20 << VAR_4) |
  VAR_19;
 return VAR_22;
}
