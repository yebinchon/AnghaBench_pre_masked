
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsf_qtcb_bottom_port {int output_mb; int input_mb; int control_requests; int output_requests; int input_requests; int invalid_crcs; int invalid_tx_words; int psp_error_counts; int loss_of_signal; int loss_of_sync; int link_failure; int dumped_frames; int error_frames; int nos; int lip; int rx_words; int rx_frames; int tx_words; int tx_frames; int seconds_since_last_reset; } ;
struct fc_host_statistics {int fcp_output_megabytes; int fcp_input_megabytes; int fcp_control_requests; int fcp_output_requests; int fcp_input_requests; int invalid_crc_count; int invalid_tx_word_count; int prim_seq_protocol_err_count; int loss_of_signal_count; int loss_of_sync_count; int link_failure_count; int dumped_frames; int error_frames; int nos_count; int lip_count; int rx_words; int rx_frames; int tx_words; int tx_frames; int seconds_since_last_reset; } ;



__attribute__((used)) static void FUNC_0(struct fc_host_statistics *VAR_0,
       struct fsf_qtcb_bottom_port *VAR_1)
{
 VAR_0->seconds_since_last_reset = VAR_1->seconds_since_last_reset;
 VAR_0->tx_frames = VAR_1->tx_frames;
 VAR_0->tx_words = VAR_1->tx_words;
 VAR_0->rx_frames = VAR_1->rx_frames;
 VAR_0->rx_words = VAR_1->rx_words;
 VAR_0->lip_count = VAR_1->lip;
 VAR_0->nos_count = VAR_1->nos;
 VAR_0->error_frames = VAR_1->error_frames;
 VAR_0->dumped_frames = VAR_1->dumped_frames;
 VAR_0->link_failure_count = VAR_1->link_failure;
 VAR_0->loss_of_sync_count = VAR_1->loss_of_sync;
 VAR_0->loss_of_signal_count = VAR_1->loss_of_signal;
 VAR_0->prim_seq_protocol_err_count = VAR_1->psp_error_counts;
 VAR_0->invalid_tx_word_count = VAR_1->invalid_tx_words;
 VAR_0->invalid_crc_count = VAR_1->invalid_crcs;
 VAR_0->fcp_input_requests = VAR_1->input_requests;
 VAR_0->fcp_output_requests = VAR_1->output_requests;
 VAR_0->fcp_control_requests = VAR_1->control_requests;
 VAR_0->fcp_input_megabytes = VAR_1->input_mb;
 VAR_0->fcp_output_megabytes = VAR_1->output_mb;
}
