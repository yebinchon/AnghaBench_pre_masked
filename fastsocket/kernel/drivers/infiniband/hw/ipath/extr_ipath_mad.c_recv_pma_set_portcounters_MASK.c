
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_verbs_counters {int port_rcv_packets; int port_xmit_packets; int port_rcv_data; int port_xmit_data; int vl15_dropped; int excessive_buffer_overrun_errors; int local_link_integrity_errors; int port_xmit_discards; int port_rcv_remphys_errors; scalar_t__ port_rcv_errors; int link_downed_counter; int link_error_recovery_counter; int symbol_error_counter; } ;
struct ipath_ibdev {int z_port_rcv_packets; int z_port_xmit_packets; int z_port_rcv_data; int z_port_xmit_data; int z_vl15_dropped; scalar_t__ n_vl15_dropped; int z_excessive_buffer_overrun_errors; int z_local_link_integrity_errors; int z_port_xmit_discards; int z_port_rcv_remphys_errors; scalar_t__ rcv_errors; scalar_t__ z_port_rcv_errors; int z_link_downed_counter; int z_link_error_recovery_counter; int z_symbol_error_counter; int dd; } ;
struct ib_pma_portcounters {int counter_select; } ;
struct ib_pma_mad {scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,struct ipath_verbs_counters*) ;
 int FUNC_1 (struct ib_pma_mad*,struct ib_device*,int ) ;
 struct ipath_ibdev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_pma_mad *VAR_13,
         struct ib_device *VAR_14, u8 VAR_15)
{
 struct ib_pma_portcounters *VAR_16 = (struct ib_pma_portcounters *)
  VAR_13->data;
 struct ipath_ibdev *VAR_17 = FUNC_2(VAR_14);
 struct ipath_verbs_counters VAR_18;





 FUNC_0(VAR_17->dd, &VAR_18);

 if (VAR_16->counter_select & VAR_12)
  VAR_17->z_symbol_error_counter = VAR_18.symbol_error_counter;

 if (VAR_16->counter_select & VAR_2)
  VAR_17->z_link_error_recovery_counter =
   VAR_18.link_error_recovery_counter;

 if (VAR_16->counter_select & VAR_1)
  VAR_17->z_link_downed_counter = VAR_18.link_downed_counter;

 if (VAR_16->counter_select & VAR_5)
  VAR_17->z_port_rcv_errors =
   VAR_18.port_rcv_errors + VAR_17->rcv_errors;

 if (VAR_16->counter_select & VAR_7)
  VAR_17->z_port_rcv_remphys_errors =
   VAR_18.port_rcv_remphys_errors;

 if (VAR_16->counter_select & VAR_10)
  VAR_17->z_port_xmit_discards = VAR_18.port_xmit_discards;

 if (VAR_16->counter_select & VAR_3)
  VAR_17->z_local_link_integrity_errors =
   VAR_18.local_link_integrity_errors;

 if (VAR_16->counter_select & VAR_0)
  VAR_17->z_excessive_buffer_overrun_errors =
   VAR_18.excessive_buffer_overrun_errors;

 if (VAR_16->counter_select & VAR_8) {
  VAR_17->n_vl15_dropped = 0;
  VAR_17->z_vl15_dropped = VAR_18.vl15_dropped;
 }

 if (VAR_16->counter_select & VAR_9)
  VAR_17->z_port_xmit_data = VAR_18.port_xmit_data;

 if (VAR_16->counter_select & VAR_4)
  VAR_17->z_port_rcv_data = VAR_18.port_rcv_data;

 if (VAR_16->counter_select & VAR_11)
  VAR_17->z_port_xmit_packets = VAR_18.port_xmit_packets;

 if (VAR_16->counter_select & VAR_6)
  VAR_17->z_port_rcv_packets = VAR_18.port_rcv_packets;

 return FUNC_1(VAR_13, VAR_14, VAR_15);
}
