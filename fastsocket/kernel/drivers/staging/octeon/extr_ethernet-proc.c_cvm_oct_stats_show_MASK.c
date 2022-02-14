
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {int rx_packets; int rx_bytes; int rx_errors; int rx_dropped; int rx_length_errors; int rx_over_errors; int rx_crc_errors; int rx_frame_errors; int rx_fifo_errors; int rx_missed_errors; int multicast; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; } ;
struct octeon_ethernet {scalar_t__ imode; TYPE_1__ stats; } ;
struct TYPE_5__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (struct seq_file*,void*) ;
 struct octeon_ethernet* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct seq_file*,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_3, void *VAR_4)
{
 struct octeon_ethernet *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  if (VAR_2[VAR_6]) {
   VAR_5 = FUNC_1(VAR_2[VAR_6]);

   FUNC_2(VAR_3, "\nOcteon Port %d (%s)\n", VAR_6,
       VAR_2[VAR_6]->name);
   FUNC_2(VAR_3,
       "rx_packets:             %12lu\t"
       "tx_packets:             %12lu\n",
       VAR_5->stats.rx_packets,
       VAR_5->stats.tx_packets);
   FUNC_2(VAR_3,
       "rx_bytes:               %12lu\t"
       "tx_bytes:               %12lu\n",
       VAR_5->stats.rx_bytes, VAR_5->stats.tx_bytes);
   FUNC_2(VAR_3,
       "rx_errors:              %12lu\t"
       "tx_errors:              %12lu\n",
       VAR_5->stats.rx_errors,
       VAR_5->stats.tx_errors);
   FUNC_2(VAR_3,
       "rx_dropped:             %12lu\t"
       "tx_dropped:             %12lu\n",
       VAR_5->stats.rx_dropped,
       VAR_5->stats.tx_dropped);
   FUNC_2(VAR_3,
       "rx_length_errors:       %12lu\t"
       "tx_aborted_errors:      %12lu\n",
       VAR_5->stats.rx_length_errors,
       VAR_5->stats.tx_aborted_errors);
   FUNC_2(VAR_3,
       "rx_over_errors:         %12lu\t"
       "tx_carrier_errors:      %12lu\n",
       VAR_5->stats.rx_over_errors,
       VAR_5->stats.tx_carrier_errors);
   FUNC_2(VAR_3,
       "rx_crc_errors:          %12lu\t"
       "tx_fifo_errors:         %12lu\n",
       VAR_5->stats.rx_crc_errors,
       VAR_5->stats.tx_fifo_errors);
   FUNC_2(VAR_3,
       "rx_frame_errors:        %12lu\t"
       "tx_heartbeat_errors:    %12lu\n",
       VAR_5->stats.rx_frame_errors,
       VAR_5->stats.tx_heartbeat_errors);
   FUNC_2(VAR_3,
       "rx_fifo_errors:         %12lu\t"
       "tx_window_errors:       %12lu\n",
       VAR_5->stats.rx_fifo_errors,
       VAR_5->stats.tx_window_errors);
   FUNC_2(VAR_3,
       "rx_missed_errors:       %12lu\t"
       "multicast:              %12lu\n",
       VAR_5->stats.rx_missed_errors,
       VAR_5->stats.multicast);
  }
 }

 if (VAR_2[0]) {
  VAR_5 = FUNC_1(VAR_2[0]);
  if (VAR_5->imode == VAR_0)
   FUNC_0(VAR_3, VAR_4);
 }
 return 0;
}
