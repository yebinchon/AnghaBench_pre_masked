
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct bnx2x_virtf {int abs_vfid; } ;
struct TYPE_4__ {int traffic_type; } ;
struct bnx2x_queue_setup_params {TYPE_2__ txq_params; int flags; } ;
struct TYPE_3__ {int hc_rate; int sb_cq_index; } ;
struct bnx2x_queue_init_params {TYPE_1__ tx; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2,
         struct bnx2x_queue_init_params *VAR_3,
         struct bnx2x_queue_setup_params *VAR_4,
         u16 VAR_5, u16 VAR_6)
{
 FUNC_0(VAR_0,
    "VF[%d] Q_SETUP: txq[%d]-- vfsb=%d, sb-index=%d, hc-rate=%d, flags=0x%lx, traffic-type=%d",
    VAR_2->abs_vfid,
    VAR_5,
    VAR_6,
    VAR_3->tx.sb_cq_index,
    VAR_3->tx.hc_rate,
    VAR_4->flags,
    VAR_4->txq_params.traffic_type);
}
