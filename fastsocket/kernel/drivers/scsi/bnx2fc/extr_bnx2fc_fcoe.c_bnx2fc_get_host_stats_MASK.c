
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_statistics_params {int dummy; } ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct fc_lport {int dummy; } ;
struct fc_host_statistics {int tx_words; int rx_words; scalar_t__ prim_seq_protocol_err_count; scalar_t__ loss_of_signal_count; scalar_t__ loss_of_sync_count; scalar_t__ nos_count; scalar_t__ lip_count; scalar_t__ dumped_frames; int rx_frames; int tx_frames; int invalid_crc_count; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct TYPE_2__ {int fcoe_tx_byte_cnt; int fcoe_rx_byte_cnt; scalar_t__ fcoe_rx_pkt_cnt; scalar_t__ fcoe_tx_pkt_cnt; scalar_t__ fc_crc_cnt; } ;
struct bnx2fc_hba {scalar_t__ stats_buffer; int prev_stats; TYPE_1__ bfw_stats; int stat_req_done; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct fc_lport*,char*) ;
 int FUNC_1 (struct bnx2fc_hba*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct bnx2fc_hba*) ;
 int VAR_1 ;
 struct fc_host_statistics* FUNC_3 (struct Scsi_Host*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 struct fcoe_port* FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct fc_lport* FUNC_7 (struct Scsi_Host*) ;
 int VAR_8 ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static struct fc_host_statistics *FUNC_9(struct Scsi_Host *VAR_9)
{
 struct fc_host_statistics *VAR_10;
 struct fc_lport *VAR_11 = FUNC_7(VAR_9);
 struct fcoe_port *VAR_12 = FUNC_5(VAR_11);
 struct bnx2fc_interface *VAR_13 = VAR_12->priv;
 struct bnx2fc_hba *VAR_14 = VAR_13->hba;
 struct fcoe_statistics_params *VAR_15;
 int VAR_16 = 0;

 VAR_15 = (struct fcoe_statistics_params *)VAR_14->stats_buffer;
 if (!VAR_15)
  return ((void*)0);

 VAR_10 = FUNC_3(VAR_9);

 FUNC_4(&VAR_14->stat_req_done);
 if (FUNC_2(VAR_14))
  return VAR_10;
 VAR_16 = FUNC_8(&VAR_14->stat_req_done, (2 * VAR_0));
 if (!VAR_16) {
  FUNC_0(VAR_11, "FW stat req timed out\n");
  return VAR_10;
 }
 FUNC_1(VAR_14, VAR_7, VAR_1);
 VAR_10->invalid_crc_count += VAR_14->bfw_stats.fc_crc_cnt;
 FUNC_1(VAR_14, VAR_8, VAR_5);
 VAR_10->tx_frames += VAR_14->bfw_stats.fcoe_tx_pkt_cnt;
 FUNC_1(VAR_14, VAR_8, VAR_4);
 VAR_10->tx_words += ((VAR_14->bfw_stats.fcoe_tx_byte_cnt) / 4);
 FUNC_1(VAR_14, VAR_6, VAR_3);
 VAR_10->rx_frames += VAR_14->bfw_stats.fcoe_rx_pkt_cnt;
 FUNC_1(VAR_14, VAR_6, VAR_2);
 VAR_10->rx_words += ((VAR_14->bfw_stats.fcoe_rx_byte_cnt) / 4);

 VAR_10->dumped_frames = 0;
 VAR_10->lip_count = 0;
 VAR_10->nos_count = 0;
 VAR_10->loss_of_sync_count = 0;
 VAR_10->loss_of_signal_count = 0;
 VAR_10->prim_seq_protocol_err_count = 0;

 FUNC_6(&VAR_14->prev_stats, VAR_14->stats_buffer,
        sizeof(struct fcoe_statistics_params));
 return VAR_10;
}
