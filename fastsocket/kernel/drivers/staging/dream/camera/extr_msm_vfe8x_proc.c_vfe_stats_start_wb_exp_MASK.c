
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_statsaxw_hdr_cfg {int axwHeader; int awbYMax; int awbYMin; int aeSubregionCfg; int aeRegionCfg; int c4; int c3; int c2; int c1; int m4; int m3; int m2; int m1; } ;
struct vfe_statsawbae_update {int axwHeader; int awbYMax; int awbYMin; int aeSubregionCfg; int aeRegionCfg; int c4; int c3; int c2; int c1; int m4; int m3; int m2; int m1; } ;
struct vfe_statsawb_update {int axwHeader; int awbYMax; int awbYMin; int aeSubregionCfg; int aeRegionCfg; int c4; int c3; int c2; int c1; int m4; int m3; int m2; int m1; } ;
struct vfe_cmd_stats_wb_exp_start {int axwHeader; int awbYMax; int awbYMin; int wbExpSubRegion; int wbExpRegions; int * awbCCFG; int * awbMCFG; int enable; } ;
typedef int cmd3 ;
typedef int cmd2 ;
typedef int cmd ;
struct TYPE_5__ {int awbPingpongIrq; } ;
struct TYPE_4__ {int axwEnable; } ;
struct TYPE_6__ {scalar_t__ vfebase; TYPE_2__ vfeImaskLocal; TYPE_1__ vfeStatsCmdLocal; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (struct vfe_statsaxw_hdr_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_stats_wb_exp_start *VAR_5)
{
 struct vfe_statsawb_update VAR_6;
 struct vfe_statsawbae_update VAR_7;
 struct vfe_statsaxw_hdr_cfg VAR_8;

 VAR_4->vfeStatsCmdLocal.axwEnable = VAR_5->enable;
 VAR_4->vfeImaskLocal.awbPingpongIrq = VAR_0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 FUNC_0(&VAR_8, 0, sizeof(VAR_8));

 VAR_6.m1 = VAR_5->awbMCFG[0];
 VAR_6.m2 = VAR_5->awbMCFG[1];
 VAR_6.m3 = VAR_5->awbMCFG[2];
 VAR_6.m4 = VAR_5->awbMCFG[3];
 VAR_6.c1 = VAR_5->awbCCFG[0];
 VAR_6.c2 = VAR_5->awbCCFG[1];
 VAR_6.c3 = VAR_5->awbCCFG[2];
 VAR_6.c4 = VAR_5->awbCCFG[3];
 FUNC_1(VAR_4->vfebase + VAR_2,
  (uint32_t *)&VAR_6, sizeof(VAR_6));

 VAR_7 = VAR_5->wbExpRegions;
 VAR_7 = VAR_5->wbExpSubRegion;
 VAR_7 = VAR_5->awbYMin;
 VAR_7 = VAR_5->awbYMax;
 FUNC_1(VAR_4->vfebase + VAR_1,
  (uint32_t *)&VAR_7, sizeof(VAR_7));

 VAR_8 = VAR_5->axwHeader;
 FUNC_1(VAR_4->vfebase + VAR_3,
  (uint32_t *)&VAR_8, sizeof(VAR_8));
}
