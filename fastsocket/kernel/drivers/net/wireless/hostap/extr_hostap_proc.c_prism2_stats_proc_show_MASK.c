
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {TYPE_1__* private; } ;
struct comm_tallies_sums {int rx_message_in_bad_msg_fragments; int rx_message_in_msg_fragments; int rx_discards_wep_undecryptable; int tx_discards_wrong_sa; int rx_discards_no_buffer; int rx_fcs_errors; int rx_multicast_octets; int rx_unicast_octets; int rx_fragments; int rx_multicast_frames; int rx_unicast_frames; int tx_discards; int tx_retry_limit_exceeded; int tx_multiple_retry_frames; int tx_single_retry_frames; int tx_deferred_transmissions; int tx_multicast_octets; int tx_unicast_octets; int tx_fragments; int tx_multicast_frames; int tx_unicast_frames; } ;
struct TYPE_2__ {struct comm_tallies_sums comm_tallies; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 local_info_t *VAR_2 = VAR_0->private;
 struct comm_tallies_sums *VAR_3 = &VAR_2->comm_tallies;

 FUNC_0(VAR_0, "TxUnicastFrames=%u\n", VAR_3->tx_unicast_frames);
 FUNC_0(VAR_0, "TxMulticastframes=%u\n", VAR_3->tx_multicast_frames);
 FUNC_0(VAR_0, "TxFragments=%u\n", VAR_3->tx_fragments);
 FUNC_0(VAR_0, "TxUnicastOctets=%u\n", VAR_3->tx_unicast_octets);
 FUNC_0(VAR_0, "TxMulticastOctets=%u\n", VAR_3->tx_multicast_octets);
 FUNC_0(VAR_0, "TxDeferredTransmissions=%u\n",
     VAR_3->tx_deferred_transmissions);
 FUNC_0(VAR_0, "TxSingleRetryFrames=%u\n", VAR_3->tx_single_retry_frames);
 FUNC_0(VAR_0, "TxMultipleRetryFrames=%u\n",
     VAR_3->tx_multiple_retry_frames);
 FUNC_0(VAR_0, "TxRetryLimitExceeded=%u\n",
     VAR_3->tx_retry_limit_exceeded);
 FUNC_0(VAR_0, "TxDiscards=%u\n", VAR_3->tx_discards);
 FUNC_0(VAR_0, "RxUnicastFrames=%u\n", VAR_3->rx_unicast_frames);
 FUNC_0(VAR_0, "RxMulticastFrames=%u\n", VAR_3->rx_multicast_frames);
 FUNC_0(VAR_0, "RxFragments=%u\n", VAR_3->rx_fragments);
 FUNC_0(VAR_0, "RxUnicastOctets=%u\n", VAR_3->rx_unicast_octets);
 FUNC_0(VAR_0, "RxMulticastOctets=%u\n", VAR_3->rx_multicast_octets);
 FUNC_0(VAR_0, "RxFCSErrors=%u\n", VAR_3->rx_fcs_errors);
 FUNC_0(VAR_0, "RxDiscardsNoBuffer=%u\n", VAR_3->rx_discards_no_buffer);
 FUNC_0(VAR_0, "TxDiscardsWrongSA=%u\n", VAR_3->tx_discards_wrong_sa);
 FUNC_0(VAR_0, "RxDiscardsWEPUndecryptable=%u\n",
     VAR_3->rx_discards_wep_undecryptable);
 FUNC_0(VAR_0, "RxMessageInMsgFragments=%u\n",
     VAR_3->rx_message_in_msg_fragments);
 FUNC_0(VAR_0, "RxMessageInBadMsgFragments=%u\n",
     VAR_3->rx_message_in_bad_msg_fragments);


 return 0;
}
