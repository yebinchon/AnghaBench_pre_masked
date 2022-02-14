
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct MR_SPAN_BLOCK_INFO {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ldSpanMap; } ;
struct MR_FW_RAID_MAP_ALL {TYPE_2__ raidMap; } ;
struct TYPE_3__ {struct MR_SPAN_BLOCK_INFO* spanBlock; } ;



__attribute__((used)) static struct MR_SPAN_BLOCK_INFO *FUNC_0(u32 VAR_0,
         struct MR_FW_RAID_MAP_ALL
         *VAR_1)
{
 return &VAR_1->raidMap.ldSpanMap[VAR_0].spanBlock[0];
}
