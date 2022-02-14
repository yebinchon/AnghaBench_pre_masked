
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int initial_rx_packets; int bufs_rec; int initial_tx_packets; int bufs_sent; int skbs_sent_pack; int bufs_sent_pack; int sg_skbs_sent; int sg_frags_sent; int sg_skbs_rx; int sg_frags_rx; int sg_alloc_page_rx; int large_send_bytes; int large_send_cnt; int sc_dp_p; int sc_p_dp; int inbound_time; int inbound_cnt; int inbound_do_qdio_time; int inbound_do_qdio_cnt; int outbound_handler_time; int outbound_handler_cnt; int outbound_time; int outbound_cnt; int outbound_do_qdio_time; int outbound_do_qdio_cnt; int tx_csum; int tx_lin; int cq_cnt; int cq_time; } ;
struct TYPE_7__ {int no_out_queues; TYPE_2__** out_qs; } ;
struct TYPE_5__ {int rx_packets; int tx_packets; } ;
struct qeth_card {TYPE_4__ perf_stats; TYPE_3__ qdio; TYPE_1__ stats; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_6__ {int used_buffers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct net_device *VAR_2,
  struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct qeth_card *VAR_5 = VAR_2->ml_priv;
 VAR_4[0] = VAR_5->stats.rx_packets -
    VAR_5->perf_stats.initial_rx_packets;
 VAR_4[1] = VAR_5->perf_stats.bufs_rec;
 VAR_4[2] = VAR_5->stats.tx_packets -
    VAR_5->perf_stats.initial_tx_packets;
 VAR_4[3] = VAR_5->perf_stats.bufs_sent;
 VAR_4[4] = VAR_5->stats.tx_packets - VAR_5->perf_stats.initial_tx_packets
   - VAR_5->perf_stats.skbs_sent_pack;
 VAR_4[5] = VAR_5->perf_stats.bufs_sent - VAR_5->perf_stats.bufs_sent_pack;
 VAR_4[6] = VAR_5->perf_stats.skbs_sent_pack;
 VAR_4[7] = VAR_5->perf_stats.bufs_sent_pack;
 VAR_4[8] = VAR_5->perf_stats.sg_skbs_sent;
 VAR_4[9] = VAR_5->perf_stats.sg_frags_sent;
 VAR_4[10] = VAR_5->perf_stats.sg_skbs_rx;
 VAR_4[11] = VAR_5->perf_stats.sg_frags_rx;
 VAR_4[12] = VAR_5->perf_stats.sg_alloc_page_rx;
 VAR_4[13] = (VAR_5->perf_stats.large_send_bytes >> 10);
 VAR_4[14] = VAR_5->perf_stats.large_send_cnt;
 VAR_4[15] = VAR_5->perf_stats.sc_dp_p;
 VAR_4[16] = VAR_5->perf_stats.sc_p_dp;
 VAR_4[17] = VAR_1;
 VAR_4[18] = VAR_0;
 VAR_4[19] = FUNC_0(&VAR_5->qdio.out_qs[0]->used_buffers);
 VAR_4[20] = (VAR_5->qdio.no_out_queues > 1) ?
   FUNC_0(&VAR_5->qdio.out_qs[1]->used_buffers) : 0;
 VAR_4[21] = (VAR_5->qdio.no_out_queues > 2) ?
   FUNC_0(&VAR_5->qdio.out_qs[2]->used_buffers) : 0;
 VAR_4[22] = (VAR_5->qdio.no_out_queues > 3) ?
   FUNC_0(&VAR_5->qdio.out_qs[3]->used_buffers) : 0;
 VAR_4[23] = VAR_5->perf_stats.inbound_time;
 VAR_4[24] = VAR_5->perf_stats.inbound_cnt;
 VAR_4[25] = VAR_5->perf_stats.inbound_do_qdio_time;
 VAR_4[26] = VAR_5->perf_stats.inbound_do_qdio_cnt;
 VAR_4[27] = VAR_5->perf_stats.outbound_handler_time;
 VAR_4[28] = VAR_5->perf_stats.outbound_handler_cnt;
 VAR_4[29] = VAR_5->perf_stats.outbound_time;
 VAR_4[30] = VAR_5->perf_stats.outbound_cnt;
 VAR_4[31] = VAR_5->perf_stats.outbound_do_qdio_time;
 VAR_4[32] = VAR_5->perf_stats.outbound_do_qdio_cnt;
 VAR_4[33] = VAR_5->perf_stats.tx_csum;
 VAR_4[34] = VAR_5->perf_stats.tx_lin;
 VAR_4[35] = VAR_5->perf_stats.cq_cnt;
 VAR_4[36] = VAR_5->perf_stats.cq_time;
}
