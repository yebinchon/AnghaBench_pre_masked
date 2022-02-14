
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfe_cmd_stats_af_ack {int nextAFOutputBufferAddr; } ;
struct TYPE_3__ {int ackPending; int nextFrameAddrBuf; } ;
struct TYPE_4__ {TYPE_1__ afStatsControl; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(struct vfe_cmd_stats_af_ack *VAR_2)
{
 VAR_1->afStatsControl.nextFrameAddrBuf = VAR_2->nextAFOutputBufferAddr;
 VAR_1->afStatsControl.ackPending = VAR_0;
}
