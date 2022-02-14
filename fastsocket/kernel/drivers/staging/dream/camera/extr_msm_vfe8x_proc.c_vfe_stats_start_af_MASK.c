
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_statsaf_update {int entry33; int entry32; int entry31; int entry30; int entry23; int entry22; int entry21; int entry20; int entry13; int entry12; int entry11; int entry10; int entry03; int entry02; int entry01; int entry00; int afHeader; int fvMetric; int fvMax; int a24; int a23; int a22; int a21; int a20; int a04; int a00; int windowWidth; int windowHeight; int windowMode; int windowHOffset; int windowVOffset; } ;
struct vfe_statsaf_cfg {int entry33; int entry32; int entry31; int entry30; int entry23; int entry22; int entry21; int entry20; int entry13; int entry12; int entry11; int entry10; int entry03; int entry02; int entry01; int entry00; int afHeader; int fvMetric; int fvMax; int a24; int a23; int a22; int a21; int a20; int a04; int a00; int windowWidth; int windowHeight; int windowMode; int windowHOffset; int windowVOffset; } ;
struct vfe_cmd_stats_af_start {int * gridForMultiWindows; int bufferHeader; int metricSelection; int metricMax; int * highPassCoef; int windowWidth; int windowHeight; int windowMode; int windowHOffset; int windowVOffset; int enable; } ;
typedef int cmd2 ;
typedef int cmd ;
struct TYPE_5__ {int afPingpongIrq; } ;
struct TYPE_4__ {int autoFocusEnable; } ;
struct TYPE_6__ {scalar_t__ vfebase; TYPE_2__ vfeImaskLocal; TYPE_1__ vfeStatsCmdLocal; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct vfe_statsaf_update*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_stats_af_start *VAR_4)
{
 struct vfe_statsaf_update VAR_5;
 struct vfe_statsaf_cfg VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));

VAR_3->vfeStatsCmdLocal.autoFocusEnable = VAR_4->enable;
VAR_3->vfeImaskLocal.afPingpongIrq = VAR_0;

 VAR_5.windowVOffset = VAR_4->windowVOffset;
 VAR_5.windowHOffset = VAR_4->windowHOffset;
 VAR_5.windowMode = VAR_4->windowMode;
 VAR_5.windowHeight = VAR_4->windowHeight;
 VAR_5.windowWidth = VAR_4->windowWidth;

 FUNC_1(VAR_3->vfebase + VAR_1,
  (uint32_t *)&VAR_5, sizeof(VAR_5));

 VAR_6 = VAR_4->highPassCoef[0];
 VAR_6 = VAR_4->highPassCoef[1];
 VAR_6 = VAR_4->highPassCoef[2];
 VAR_6 = VAR_4->highPassCoef[3];
 VAR_6 = VAR_4->highPassCoef[4];
 VAR_6 = VAR_4->highPassCoef[5];
 VAR_6 = VAR_4->highPassCoef[6];
 VAR_6 = VAR_4->metricMax;
 VAR_6 = VAR_4->metricSelection;
 VAR_6 = VAR_4->bufferHeader;
 VAR_6 = VAR_4->gridForMultiWindows[0];
 VAR_6 = VAR_4->gridForMultiWindows[1];
 VAR_6 = VAR_4->gridForMultiWindows[2];
 VAR_6 = VAR_4->gridForMultiWindows[3];
 VAR_6 = VAR_4->gridForMultiWindows[4];
 VAR_6 = VAR_4->gridForMultiWindows[5];
 VAR_6 = VAR_4->gridForMultiWindows[6];
 VAR_6 = VAR_4->gridForMultiWindows[7];
 VAR_6 = VAR_4->gridForMultiWindows[8];
 VAR_6 = VAR_4->gridForMultiWindows[9];
 VAR_6 = VAR_4->gridForMultiWindows[10];
 VAR_6 = VAR_4->gridForMultiWindows[11];
 VAR_6 = VAR_4->gridForMultiWindows[12];
 VAR_6 = VAR_4->gridForMultiWindows[13];
 VAR_6 = VAR_4->gridForMultiWindows[14];
 VAR_6 = VAR_4->gridForMultiWindows[15];

 FUNC_1(VAR_3->vfebase + VAR_2,
  (uint32_t *)&VAR_6, sizeof(VAR_6));
}
