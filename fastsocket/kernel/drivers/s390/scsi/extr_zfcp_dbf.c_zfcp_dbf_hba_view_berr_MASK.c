
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsf_bit_error_payload {int current_transmit_b2b_credit; int advertised_transmit_b2b_credit; int current_receive_b2b_credit; int advertised_receive_b2b_credit; int elastic_buffer_overrun_error_count; int primitive_sequence_event_timeout_count; int crc_error_count; int invalid_transmission_word_error_count; int primitive_sequence_error_count; int loss_of_signal_error_count; int loss_of_sync_error_count; int link_failure_error_count; } ;


 int FUNC_0 (char**,char*,char*,int ) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, struct fsf_bit_error_payload *VAR_1)
{
 FUNC_0(VAR_0, "link_failures", "%d", VAR_1->link_failure_error_count);
 FUNC_0(VAR_0, "loss_of_sync_err", "%d", VAR_1->loss_of_sync_error_count);
 FUNC_0(VAR_0, "loss_of_sig_err", "%d", VAR_1->loss_of_signal_error_count);
 FUNC_0(VAR_0, "prim_seq_err", "%d",
       VAR_1->primitive_sequence_error_count);
 FUNC_0(VAR_0, "inval_trans_word_err", "%d",
       VAR_1->invalid_transmission_word_error_count);
 FUNC_0(VAR_0, "CRC_errors", "%d", VAR_1->crc_error_count);
 FUNC_0(VAR_0, "prim_seq_event_to", "%d",
       VAR_1->primitive_sequence_event_timeout_count);
 FUNC_0(VAR_0, "elast_buf_overrun_err", "%d",
       VAR_1->elastic_buffer_overrun_error_count);
 FUNC_0(VAR_0, "adv_rec_buf2buf_cred", "%d",
       VAR_1->advertised_receive_b2b_credit);
 FUNC_0(VAR_0, "curr_rec_buf2buf_cred", "%d",
       VAR_1->current_receive_b2b_credit);
 FUNC_0(VAR_0, "adv_trans_buf2buf_cred", "%d",
       VAR_1->advertised_transmit_b2b_credit);
 FUNC_0(VAR_0, "curr_trans_buf2buf_cred", "%d",
       VAR_1->current_transmit_b2b_credit);
}
