
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfe_cmd_stats_setting {int * awbBuffer; int * afBuffer; } ;
struct TYPE_5__ {int nextFrameAddrBuf; int * addressBuffer; } ;
struct TYPE_4__ {int nextFrameAddrBuf; int * addressBuffer; } ;
struct TYPE_6__ {TYPE_2__ awbStatsControl; TYPE_1__ afStatsControl; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (struct vfe_cmd_stats_setting*) ;

void FUNC_1(struct vfe_cmd_stats_setting *VAR_1)
{
 VAR_0->afStatsControl.addressBuffer[0] = VAR_1->afBuffer[0];
 VAR_0->afStatsControl.addressBuffer[1] = VAR_1->afBuffer[1];
 VAR_0->afStatsControl.nextFrameAddrBuf = VAR_1->afBuffer[2];

 VAR_0->awbStatsControl.addressBuffer[0] = VAR_1->awbBuffer[0];
 VAR_0->awbStatsControl.addressBuffer[1] = VAR_1->awbBuffer[1];
 VAR_0->awbStatsControl.nextFrameAddrBuf = VAR_1->awbBuffer[2];

 FUNC_0(VAR_1);
}
