
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_rxq_setup_params {int cache_line_log; int drop_flags; int tpa_agg_sz; int max_sges_pkt; int sge_buf_sz; int buf_sz; } ;
struct TYPE_4__ {int mtu; } ;
struct bnx2x_queue_setup_params {int flags; TYPE_2__ gen_params; struct bnx2x_rxq_setup_params rxq_params; } ;
struct TYPE_3__ {int hc_rate; int sb_cq_index; } ;
struct bnx2x_queue_init_params {TYPE_1__ rx; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2,
       struct bnx2x_queue_init_params *VAR_3,
       struct bnx2x_queue_setup_params *VAR_4,
       u16 VAR_5, u16 VAR_6)
{
 struct bnx2x_rxq_setup_params *VAR_7 = &VAR_4->rxq_params;

 FUNC_0(VAR_0, "VF[%d] Q_SETUP: rxq[%d]-- vfsb=%d, sb-index=%d, hc-rate=%d, mtu=%d, buf-size=%d\n"
    "sge-size=%d, max_sge_pkt=%d, tpa-agg-size=%d, flags=0x%lx, drop-flags=0x%x, cache-log=%d\n",
    VAR_2->abs_vfid,
    VAR_5,
    VAR_6,
    VAR_3->rx.sb_cq_index,
    VAR_3->rx.hc_rate,
    VAR_4->gen_params.mtu,
    VAR_7->buf_sz,
    VAR_7->sge_buf_sz,
    VAR_7->max_sges_pkt,
    VAR_7->tpa_agg_sz,
    VAR_4->flags,
    VAR_7->drop_flags,
    VAR_7->cache_line_log);
}
