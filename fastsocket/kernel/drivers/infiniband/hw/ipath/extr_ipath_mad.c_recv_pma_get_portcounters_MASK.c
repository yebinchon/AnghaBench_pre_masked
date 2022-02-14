
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ipath_verbs_counters {int symbol_error_counter; int link_error_recovery_counter; int link_downed_counter; int port_rcv_errors; int port_rcv_remphys_errors; int port_xmit_discards; int port_xmit_data; int port_rcv_data; int port_xmit_packets; int port_rcv_packets; int local_link_integrity_errors; int excessive_buffer_overrun_errors; int vl15_dropped; } ;
struct ipath_ibdev {scalar_t__ n_vl15_dropped; scalar_t__ z_vl15_dropped; scalar_t__ z_excessive_buffer_overrun_errors; scalar_t__ z_local_link_integrity_errors; scalar_t__ z_port_rcv_packets; scalar_t__ z_port_xmit_packets; scalar_t__ z_port_rcv_data; scalar_t__ z_port_xmit_data; scalar_t__ z_port_xmit_discards; scalar_t__ z_port_rcv_remphys_errors; scalar_t__ z_port_rcv_errors; scalar_t__ rcv_errors; scalar_t__ z_link_downed_counter; scalar_t__ z_link_error_recovery_counter; scalar_t__ z_symbol_error_counter; int dd; } ;
struct ib_smp {int dummy; } ;
struct ib_pma_portcounters {int port_select; int link_error_recovery_counter; int link_downed_counter; int link_overrun_errors; void* port_rcv_packets; void* port_xmit_packets; void* port_rcv_data; void* port_xmit_data; void* vl15_dropped; void* port_xmit_discards; void* port_rcv_remphys_errors; void* port_rcv_errors; void* symbol_error_counter; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,struct ipath_verbs_counters*) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (struct ib_smp*) ;
 struct ipath_ibdev* FUNC_5 (struct ib_device*) ;

__attribute__((used)) static int FUNC_6(struct ib_pma_mad *VAR_1,
         struct ib_device *VAR_2, u8 VAR_3)
{
 struct ib_pma_portcounters *VAR_4 = (struct ib_pma_portcounters *)
  VAR_1->data;
 struct ipath_ibdev *VAR_5 = FUNC_5(VAR_2);
 struct ipath_verbs_counters VAR_6;
 u8 VAR_7 = VAR_4->port_select;

 FUNC_2(VAR_5->dd, &VAR_6);


 VAR_6.symbol_error_counter -= VAR_5->z_symbol_error_counter;
 VAR_6.link_error_recovery_counter -=
  VAR_5->z_link_error_recovery_counter;
 VAR_6.link_downed_counter -= VAR_5->z_link_downed_counter;
 VAR_6.port_rcv_errors += VAR_5->rcv_errors;
 VAR_6.port_rcv_errors -= VAR_5->z_port_rcv_errors;
 VAR_6.port_rcv_remphys_errors -= VAR_5->z_port_rcv_remphys_errors;
 VAR_6.port_xmit_discards -= VAR_5->z_port_xmit_discards;
 VAR_6.port_xmit_data -= VAR_5->z_port_xmit_data;
 VAR_6.port_rcv_data -= VAR_5->z_port_rcv_data;
 VAR_6.port_xmit_packets -= VAR_5->z_port_xmit_packets;
 VAR_6.port_rcv_packets -= VAR_5->z_port_rcv_packets;
 VAR_6.local_link_integrity_errors -=
  VAR_5->z_local_link_integrity_errors;
 VAR_6.excessive_buffer_overrun_errors -=
  VAR_5->z_excessive_buffer_overrun_errors;
 VAR_6.vl15_dropped -= VAR_5->z_vl15_dropped;
 VAR_6.vl15_dropped += VAR_5->n_vl15_dropped;

 FUNC_3(VAR_1->data, 0, sizeof(VAR_1->data));

 VAR_4->port_select = VAR_7;
 if (VAR_1->mad_hdr.attr_mod != 0 ||
     (VAR_7 != VAR_3 && VAR_7 != 0xFF))
  VAR_1->mad_hdr.status |= VAR_0;

 if (VAR_6.symbol_error_counter > 0xFFFFUL)
  VAR_4->symbol_error_counter = FUNC_0(0xFFFF);
 else
  VAR_4->symbol_error_counter =
   FUNC_0((u16)VAR_6.symbol_error_counter);
 if (VAR_6.link_error_recovery_counter > 0xFFUL)
  VAR_4->link_error_recovery_counter = 0xFF;
 else
  VAR_4->link_error_recovery_counter =
   (u8)VAR_6.link_error_recovery_counter;
 if (VAR_6.link_downed_counter > 0xFFUL)
  VAR_4->link_downed_counter = 0xFF;
 else
  VAR_4->link_downed_counter = (u8)VAR_6.link_downed_counter;
 if (VAR_6.port_rcv_errors > 0xFFFFUL)
  VAR_4->port_rcv_errors = FUNC_0(0xFFFF);
 else
  VAR_4->port_rcv_errors =
   FUNC_0((u16) VAR_6.port_rcv_errors);
 if (VAR_6.port_rcv_remphys_errors > 0xFFFFUL)
  VAR_4->port_rcv_remphys_errors = FUNC_0(0xFFFF);
 else
  VAR_4->port_rcv_remphys_errors =
   FUNC_0((u16)VAR_6.port_rcv_remphys_errors);
 if (VAR_6.port_xmit_discards > 0xFFFFUL)
  VAR_4->port_xmit_discards = FUNC_0(0xFFFF);
 else
  VAR_4->port_xmit_discards =
   FUNC_0((u16)VAR_6.port_xmit_discards);
 if (VAR_6.local_link_integrity_errors > 0xFUL)
  VAR_6.local_link_integrity_errors = 0xFUL;
 if (VAR_6.excessive_buffer_overrun_errors > 0xFUL)
  VAR_6.excessive_buffer_overrun_errors = 0xFUL;
 VAR_4->link_overrun_errors = (VAR_6.local_link_integrity_errors << 4) |
  VAR_6.excessive_buffer_overrun_errors;
 if (VAR_6.vl15_dropped > 0xFFFFUL)
  VAR_4->vl15_dropped = FUNC_0(0xFFFF);
 else
  VAR_4->vl15_dropped = FUNC_0((u16)VAR_6.vl15_dropped);
 if (VAR_6.port_xmit_data > 0xFFFFFFFFUL)
  VAR_4->port_xmit_data = FUNC_1(0xFFFFFFFF);
 else
  VAR_4->port_xmit_data = FUNC_1((u32)VAR_6.port_xmit_data);
 if (VAR_6.port_rcv_data > 0xFFFFFFFFUL)
  VAR_4->port_rcv_data = FUNC_1(0xFFFFFFFF);
 else
  VAR_4->port_rcv_data = FUNC_1((u32)VAR_6.port_rcv_data);
 if (VAR_6.port_xmit_packets > 0xFFFFFFFFUL)
  VAR_4->port_xmit_packets = FUNC_1(0xFFFFFFFF);
 else
  VAR_4->port_xmit_packets =
   FUNC_1((u32)VAR_6.port_xmit_packets);
 if (VAR_6.port_rcv_packets > 0xFFFFFFFFUL)
  VAR_4->port_rcv_packets = FUNC_1(0xFFFFFFFF);
 else
  VAR_4->port_rcv_packets =
   FUNC_1((u32) VAR_6.port_rcv_packets);

 return FUNC_4((struct ib_smp *) VAR_1);
}
