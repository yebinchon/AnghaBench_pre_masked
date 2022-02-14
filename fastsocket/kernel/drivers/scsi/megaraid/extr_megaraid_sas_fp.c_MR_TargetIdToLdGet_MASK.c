
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_2__ {int * ldTgtIdToLd; } ;
struct MR_FW_RAID_MAP_ALL {TYPE_1__ raidMap; } ;



u16 FUNC_0(u32 VAR_0, struct MR_FW_RAID_MAP_ALL *VAR_1)
{
 return VAR_1->raidMap.ldTgtIdToLd[VAR_0];
}
