
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_qla_host {int loop_id; int loop_state; } ;
struct qla_hw_data {int s_dma_pool; int dpc_active; int pdev; } ;
struct link_statistics {int fcp_input_megabytes; int fcp_output_megabytes; int nos_rcvd; int nos_count; int dumped_frames; int rx_frames; int tx_frames; int lip_cnt; int lip_count; int inval_crc_cnt; int invalid_crc_count; int inval_xmit_word_cnt; int invalid_tx_word_count; int prim_seq_err_cnt; int prim_seq_protocol_err_count; int loss_sig_cnt; int loss_of_signal_count; int loss_sync_cnt; int loss_of_sync_count; int link_fail_cnt; int link_failure_count; } ;
struct fc_host_statistics {int fcp_input_megabytes; int fcp_output_megabytes; int nos_rcvd; int nos_count; int dumped_frames; int rx_frames; int tx_frames; int lip_cnt; int lip_count; int inval_crc_cnt; int invalid_crc_count; int inval_xmit_word_cnt; int invalid_tx_word_count; int prim_seq_err_cnt; int prim_seq_protocol_err_count; int loss_sig_cnt; int loss_of_signal_count; int loss_sync_cnt; int loss_of_sync_count; int link_fail_cnt; int link_failure_count; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {int input_bytes; int output_bytes; } ;
struct TYPE_7__ {TYPE_1__ qla_stats; int dpc_flags; struct qla_hw_data* hw; struct link_statistics fc_host_stat; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 struct link_statistics* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,struct link_statistics*,int ) ;
 int FUNC_5 (struct link_statistics*,int,int) ;
 int FUNC_6 (int ) ;
 struct scsi_qla_host* FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_2__*,int,char*) ;
 int VAR_6 ;
 int FUNC_9 (struct scsi_qla_host*,struct link_statistics*,int ) ;
 int FUNC_10 (struct scsi_qla_host*,int ,struct link_statistics*,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_2__* FUNC_12 (struct Scsi_Host*) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static struct fc_host_statistics *
FUNC_15(struct Scsi_Host *VAR_7)
{
 scsi_qla_host_t *VAR_8 = FUNC_12(VAR_7);
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 struct scsi_qla_host *VAR_10 = FUNC_7(VAR_9->pdev);
 int VAR_11;
 struct link_statistics *VAR_12;
 dma_addr_t VAR_13;
 struct fc_host_statistics *VAR_14;

 VAR_14 = &VAR_8->fc_host_stat;
 FUNC_5(VAR_14, -1, sizeof(struct fc_host_statistics));

 if (FUNC_1(VAR_8->hw))
  goto done;

 if (FUNC_13(VAR_5, &VAR_8->dpc_flags))
  goto done;

 if (FUNC_14(FUNC_6(VAR_9->pdev)))
  goto done;

 VAR_12 = FUNC_3(VAR_9->s_dma_pool, VAR_1, &VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_8(VAR_6, VAR_8, 0x707d,
      "Failed to allocate memory for stats.\n");
  goto done;
 }
 FUNC_5(VAR_12, 0, VAR_0);

 VAR_11 = VAR_3;
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_9(VAR_10, VAR_12, VAR_13);
 } else if (FUNC_2(&VAR_10->loop_state) == VAR_2 &&
     !FUNC_11(VAR_8) && !VAR_9->dpc_active) {

  VAR_11 = FUNC_10(VAR_10, VAR_10->loop_id,
      VAR_12, VAR_13);
 }

 if (VAR_11 != VAR_4)
  goto done_free;

 VAR_14->link_failure_count = VAR_12->link_fail_cnt;
 VAR_14->loss_of_sync_count = VAR_12->loss_sync_cnt;
 VAR_14->loss_of_signal_count = VAR_12->loss_sig_cnt;
 VAR_14->prim_seq_protocol_err_count = VAR_12->prim_seq_err_cnt;
 VAR_14->invalid_tx_word_count = VAR_12->inval_xmit_word_cnt;
 VAR_14->invalid_crc_count = VAR_12->inval_crc_cnt;
 if (FUNC_0(VAR_9)) {
  VAR_14->lip_count = VAR_12->lip_cnt;
  VAR_14->tx_frames = VAR_12->tx_frames;
  VAR_14->rx_frames = VAR_12->rx_frames;
  VAR_14->dumped_frames = VAR_12->dumped_frames;
  VAR_14->nos_count = VAR_12->nos_rcvd;
 }
 VAR_14->fcp_input_megabytes = VAR_8->qla_stats.input_bytes >> 20;
 VAR_14->fcp_output_megabytes = VAR_8->qla_stats.output_bytes >> 20;

done_free:
        FUNC_4(VAR_9->s_dma_pool, VAR_12, VAR_13);
done:
 return VAR_14;
}
