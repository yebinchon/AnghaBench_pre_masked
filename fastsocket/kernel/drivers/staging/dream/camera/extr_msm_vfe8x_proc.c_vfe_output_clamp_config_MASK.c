
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_output_clamp_cfg {int crChanMin; int cbChanMin; int yChanMin; int crChanMax; int cbChanMax; int yChanMax; } ;
struct vfe_cmd_output_clamp_config {int minCh2; int minCh1; int minCh0; int maxCh2; int maxCh1; int maxCh0; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct vfe_output_clamp_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_output_clamp_config *VAR_2)
{
 struct vfe_output_clamp_cfg VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.yChanMax = VAR_2->maxCh0;
 VAR_3.cbChanMax = VAR_2->maxCh1;
 VAR_3.crChanMax = VAR_2->maxCh2;

 VAR_3.yChanMin = VAR_2->minCh0;
 VAR_3.cbChanMin = VAR_2->minCh1;
 VAR_3.crChanMin = VAR_2->minCh2;

 FUNC_1(VAR_1->vfebase + VAR_0, (uint32_t *)&VAR_3,
  sizeof(VAR_3));
}
