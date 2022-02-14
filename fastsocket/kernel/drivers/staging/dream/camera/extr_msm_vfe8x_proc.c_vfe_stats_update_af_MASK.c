
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_statsaf_update {int windowWidth; int windowHeight; int windowMode; int windowHOffset; int windowVOffset; } ;
struct vfe_cmd_stats_af_update {int windowWidth; int windowHeight; int windowMode; int windowHOffset; int windowVOffset; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct vfe_statsaf_update*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_stats_af_update *VAR_2)
{
 struct vfe_statsaf_update VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.windowVOffset = VAR_2->windowVOffset;
 VAR_3.windowHOffset = VAR_2->windowHOffset;
 VAR_3.windowMode = VAR_2->windowMode;
 VAR_3.windowHeight = VAR_2->windowHeight;
 VAR_3.windowWidth = VAR_2->windowWidth;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
