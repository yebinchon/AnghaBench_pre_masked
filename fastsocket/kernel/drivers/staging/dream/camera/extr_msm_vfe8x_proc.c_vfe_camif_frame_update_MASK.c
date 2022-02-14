
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmds_camif_frame {int linesPerFrame; int pixelsPerLine; } ;
struct vfe_camifframe_update {int linesPerFrame; int pixelsPerLine; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct vfe_camifframe_update*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmds_camif_frame *VAR_2)
{
 struct vfe_camifframe_update VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.pixelsPerLine = VAR_2->pixelsPerLine;
 VAR_3.linesPerFrame = VAR_2->linesPerFrame;

 FUNC_1(VAR_1->vfebase + VAR_0, (uint32_t *)&VAR_3,
  sizeof(VAR_3));
}
