
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_8__ {TYPE_3__* ldSpanMap; } ;
struct MR_FW_RAID_MAP_ALL {TYPE_4__ raidMap; } ;
struct TYPE_7__ {TYPE_2__* spanBlock; } ;
struct TYPE_5__ {int arrayRef; } ;
struct TYPE_6__ {TYPE_1__ span; } ;



u16 FUNC_0(u32 VAR_0, u32 VAR_1, struct MR_FW_RAID_MAP_ALL *VAR_2)
{
 return VAR_2->raidMap.ldSpanMap[VAR_0].spanBlock[VAR_1].span.arrayRef;
}
