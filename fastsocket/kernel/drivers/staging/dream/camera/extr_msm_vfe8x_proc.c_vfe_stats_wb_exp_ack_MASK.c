
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfe_cmd_stats_wb_exp_ack {int nextWbExpOutputBufferAddr; } ;
struct TYPE_3__ {int ackPending; int nextFrameAddrBuf; } ;
struct TYPE_4__ {TYPE_1__ awbStatsControl; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(struct vfe_cmd_stats_wb_exp_ack *VAR_2)
{
 VAR_1->awbStatsControl.nextFrameAddrBuf = VAR_2->nextWbExpOutputBufferAddr;
 VAR_1->awbStatsControl.ackPending = VAR_0;
}
