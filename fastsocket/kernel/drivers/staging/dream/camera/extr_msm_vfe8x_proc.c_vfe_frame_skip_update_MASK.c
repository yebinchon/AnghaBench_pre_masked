
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmd_frame_skip_update {int output2Pattern; int output1Pattern; } ;
struct VFE_FRAME_SKIP_UpdateCmdType {int cbcrPattern; int yPattern; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__,int *,int) ;

void FUNC_1(struct vfe_cmd_frame_skip_update *VAR_3)
{
 struct VFE_FRAME_SKIP_UpdateCmdType VAR_4;

 VAR_4.yPattern = VAR_3->output1Pattern;
 VAR_4.cbcrPattern = VAR_3->output1Pattern;
 FUNC_0(VAR_2->vfebase + VAR_1,
  (uint32_t *)&VAR_4, sizeof(VAR_4));

 VAR_4.yPattern = VAR_3->output2Pattern;
 VAR_4.cbcrPattern = VAR_3->output2Pattern;
 FUNC_0(VAR_2->vfebase + VAR_0,
  (uint32_t *)&VAR_4, sizeof(VAR_4));
}
