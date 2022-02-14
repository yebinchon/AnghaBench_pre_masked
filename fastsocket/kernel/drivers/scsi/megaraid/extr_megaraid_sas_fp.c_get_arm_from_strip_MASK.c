
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


typedef size_t uint ;
typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct megasas_instance {TYPE_5__* pdev; struct fusion_context* ctrl_context; } ;
struct fusion_context {TYPE_6__* log_to_span; } ;
struct MR_LD_RAID {size_t spanDepth; } ;
struct TYPE_11__ {TYPE_3__* ldSpanMap; } ;
struct MR_FW_RAID_MAP_ALL {TYPE_4__ raidMap; } ;
struct TYPE_14__ {scalar_t__ span_row_data_width; scalar_t__ data_strip_end; scalar_t__ data_strip_start; size_t* strip_offset; } ;
struct TYPE_13__ {TYPE_7__* span_set; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_10__ {TYPE_2__* spanBlock; } ;
struct TYPE_8__ {size_t noElements; } ;
struct TYPE_9__ {TYPE_1__ block_span_info; } ;
typedef TYPE_6__* PLD_SPAN_INFO ;
typedef TYPE_7__ LD_SPAN_SET ;


 size_t VAR_0 ;
 struct MR_LD_RAID* FUNC_0 (size_t,struct MR_FW_RAID_MAP_ALL*) ;
 int FUNC_1 (int *,char*,size_t,unsigned long) ;
 int FUNC_2 (int *,char*,size_t,unsigned long,size_t) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_4(struct megasas_instance *VAR_1,
 u32 VAR_2, u64 VAR_3, struct MR_FW_RAID_MAP_ALL *VAR_4)
{
 struct fusion_context *VAR_5 = VAR_1->ctrl_context;
 struct MR_LD_RAID *VAR_6 = FUNC_0(VAR_2, VAR_4);
 LD_SPAN_SET *VAR_7;
 PLD_SPAN_INFO VAR_8 = VAR_5->log_to_span;
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 for (VAR_9 = 0 ; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = &(VAR_8[VAR_2].span_set[VAR_9]);

  if (VAR_7->span_row_data_width == 0)
   break;
  if (VAR_3 > VAR_7->data_strip_end)
   continue;

  VAR_10 = (uint)FUNC_3
    ((VAR_3 - VAR_7->data_strip_start),
    VAR_7->span_row_data_width);

  for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_6->spanDepth; VAR_11++)
   if (VAR_4->raidMap.ldSpanMap[VAR_2].spanBlock[VAR_11].
    block_span_info.noElements >= VAR_9+1) {
    if (VAR_10 >=
     VAR_7->strip_offset[VAR_11])
     VAR_12 =
      VAR_7->strip_offset[VAR_11];
    else
     break;
   }





  VAR_13 = (VAR_10 - VAR_12);
  return VAR_13;
 }

 FUNC_1(&VAR_1->pdev->dev, "get_arm_from_strip"
  "returns invalid arm for ld=%x strip=%lx\n",
  VAR_2, (long unsigned int)VAR_3);

 return -1;
}
