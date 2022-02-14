
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_statsawbae_update {int awbYMax; int awbYMin; int aeSubregionCfg; int aeRegionCfg; int c4; int c3; int c2; int c1; int m4; int m3; int m2; int m1; } ;
struct vfe_statsawb_update {int awbYMax; int awbYMin; int aeSubregionCfg; int aeRegionCfg; int c4; int c3; int c2; int c1; int m4; int m3; int m2; int m1; } ;
struct vfe_cmd_stats_wb_exp_update {int awbYMax; int awbYMin; int wbExpSubRegion; int wbExpRegions; int * awbCCFG; int * awbMCFG; } ;
typedef int cmd2 ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct vfe_statsawbae_update*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_stats_wb_exp_update *VAR_3)
{
 struct vfe_statsawb_update VAR_4;
 struct vfe_statsawbae_update VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));

 VAR_4.m1 = VAR_3->awbMCFG[0];
 VAR_4.m2 = VAR_3->awbMCFG[1];
 VAR_4.m3 = VAR_3->awbMCFG[2];
 VAR_4.m4 = VAR_3->awbMCFG[3];
 VAR_4.c1 = VAR_3->awbCCFG[0];
 VAR_4.c2 = VAR_3->awbCCFG[1];
 VAR_4.c3 = VAR_3->awbCCFG[2];
 VAR_4.c4 = VAR_3->awbCCFG[3];
 FUNC_1(VAR_2->vfebase + VAR_1,
  (uint32_t *)&VAR_4, sizeof(VAR_4));

 VAR_5 = VAR_3->wbExpRegions;
 VAR_5 = VAR_3->wbExpSubRegion;
 VAR_5 = VAR_3->awbYMin;
 VAR_5 = VAR_3->awbYMax;
 FUNC_1(VAR_2->vfebase + VAR_0,
  (uint32_t *)&VAR_5, sizeof(VAR_5));
}
