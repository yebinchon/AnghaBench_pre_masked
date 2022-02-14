
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_frame_skip_cfg {int output1CbCrPattern; int output1YPattern; int output1CbCrPeriod; int output1YPeriod; int output2CbCrPattern; int output2YPattern; int output2CbCrPeriod; int output2YPeriod; } ;
struct vfe_cmd_frame_skip_config {int output1Pattern; int output1Period; int output2Pattern; int output2Period; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; struct vfe_cmd_frame_skip_config vfeFrameSkip; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct vfe_frame_skip_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_frame_skip_config *VAR_2)
{
 struct vfe_frame_skip_cfg VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_1->vfeFrameSkip = *VAR_2;

 VAR_3.output2YPeriod = VAR_2->output2Period;
 VAR_3.output2CbCrPeriod = VAR_2->output2Period;
 VAR_3.output2YPattern = VAR_2->output2Pattern;
 VAR_3.output2CbCrPattern = VAR_2->output2Pattern;
 VAR_3.output1YPeriod = VAR_2->output1Period;
 VAR_3.output1CbCrPeriod = VAR_2->output1Period;
 VAR_3.output1YPattern = VAR_2->output1Pattern;
 VAR_3.output1CbCrPattern = VAR_2->output1Pattern;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
