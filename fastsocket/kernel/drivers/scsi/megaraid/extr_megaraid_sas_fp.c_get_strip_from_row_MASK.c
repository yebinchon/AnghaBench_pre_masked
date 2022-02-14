
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


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct megasas_instance {TYPE_5__* pdev; struct fusion_context* ctrl_context; } ;
struct fusion_context {TYPE_6__* log_to_span; } ;
struct MR_QUAD_ELEMENT {scalar_t__ logStart; scalar_t__ logEnd; int diff; } ;
struct MR_LD_RAID {size_t spanDepth; } ;
struct TYPE_11__ {TYPE_3__* ldSpanMap; } ;
struct MR_FW_RAID_MAP_ALL {TYPE_4__ raidMap; } ;
struct TYPE_14__ {scalar_t__ span_row_data_width; scalar_t__ data_row_end; scalar_t__ data_row_start; scalar_t__* strip_offset; scalar_t__ data_strip_start; } ;
struct TYPE_13__ {TYPE_7__* span_set; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_10__ {TYPE_2__* spanBlock; } ;
struct TYPE_8__ {size_t noElements; struct MR_QUAD_ELEMENT* quad; } ;
struct TYPE_9__ {TYPE_1__ block_span_info; } ;
typedef TYPE_6__* PLD_SPAN_INFO ;
typedef TYPE_7__ LD_SPAN_SET ;


 size_t VAR_0 ;
 struct MR_LD_RAID* FUNC_0 (size_t,struct MR_FW_RAID_MAP_ALL*) ;
 int FUNC_1 (int *,char*,size_t,unsigned long) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static u64 FUNC_4(struct megasas_instance *VAR_1,
  u32 VAR_2, u64 VAR_3, struct MR_FW_RAID_MAP_ALL *VAR_4)
{
 struct fusion_context *VAR_5 = VAR_1->ctrl_context;
 struct MR_LD_RAID *VAR_6 = FUNC_0(VAR_2, VAR_4);
 LD_SPAN_SET *VAR_7;
 struct MR_QUAD_ELEMENT *VAR_8;
 PLD_SPAN_INFO VAR_9 = VAR_5->log_to_span;
 u32 VAR_10, VAR_11;
 u64 VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_7 = &(VAR_9[VAR_2].span_set[VAR_11]);

  if (VAR_7->span_row_data_width == 0)
   break;
  if (VAR_3 > VAR_7->data_row_end)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_6->spanDepth; VAR_10++)
   if (VAR_4->raidMap.ldSpanMap[VAR_2].spanBlock[VAR_10].
    block_span_info.noElements >= VAR_11+1) {
    VAR_8 = &VAR_4->raidMap.ldSpanMap[VAR_2].
     spanBlock[VAR_10].block_span_info.quad[VAR_11];
    if (VAR_8->logStart <= VAR_3 &&
     VAR_3 <= VAR_8->logEnd &&
     FUNC_3((VAR_3 - VAR_8->logStart),
     VAR_8->diff) == 0) {
     VAR_12 = FUNC_2
      (((VAR_3 - VAR_7->data_row_start)
       - VAR_8->logStart),
       VAR_8->diff);
     VAR_12 *= VAR_7->span_row_data_width;
     VAR_12 += VAR_7->data_strip_start;
     VAR_12 += VAR_7->strip_offset[VAR_10];
     return VAR_12;
    }
   }
 }
 FUNC_1(&VAR_1->pdev->dev, "get_strip_from_row"
  "returns invalid strip for ld=%x, row=%lx\n",
  VAR_2, (long unsigned int)VAR_3);
 return -1;
}
