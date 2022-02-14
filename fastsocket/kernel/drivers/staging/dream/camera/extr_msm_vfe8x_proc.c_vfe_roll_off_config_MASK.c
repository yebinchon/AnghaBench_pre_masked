
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_rolloff_cfg {int yDeltaAccum; int pixelY; int pixelX; int gridY; int gridX; int yDelta; int gridHeight; int gridWidth; } ;
struct vfe_cmd_roll_off_config {int yDeltaAccum; int gridPixelYIndex; int gridPixelXIndex; int gridYIndex; int gridXIndex; int yDelta; int gridHeight; int gridWidth; int enable; } ;
typedef int cmd ;
struct TYPE_3__ {int lensRollOffEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vfe_rolloff_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (struct vfe_cmd_roll_off_config*) ;

void FUNC_3(struct vfe_cmd_roll_off_config *VAR_2)
{
 struct vfe_rolloff_cfg VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_1->vfeModuleEnableLocal.lensRollOffEnable = VAR_2->enable;

 VAR_3.gridWidth = VAR_2->gridWidth;
 VAR_3.gridHeight = VAR_2->gridHeight;
 VAR_3.yDelta = VAR_2->yDelta;
 VAR_3.gridX = VAR_2->gridXIndex;
 VAR_3.gridY = VAR_2->gridYIndex;
 VAR_3.pixelX = VAR_2->gridPixelXIndex;
 VAR_3.pixelY = VAR_2->gridPixelYIndex;
 VAR_3.yDeltaAccum = VAR_2->yDeltaAccum;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));

 FUNC_2(VAR_2);
}
