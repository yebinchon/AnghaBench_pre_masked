
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ipath_ibdev {int n_multicast_rcv; int n_multicast_xmit; int n_unicast_rcv; int n_unicast_xmit; scalar_t__ z_port_rcv_packets; scalar_t__ z_port_xmit_packets; scalar_t__ z_port_rcv_data; scalar_t__ z_port_xmit_data; int dd; } ;
struct ib_smp {int dummy; } ;
struct ib_pma_portcounters_ext {int port_select; void* port_multicast_rcv_packets; void* port_multicast_xmit_packets; void* port_unicast_rcv_packets; void* port_unicast_xmit_packets; void* port_rcv_packets; void* port_xmit_packets; void* port_rcv_data; void* port_xmit_data; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *,int *) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct ib_smp*) ;
 struct ipath_ibdev* FUNC_4 (struct ib_device*) ;

__attribute__((used)) static int FUNC_5(struct ib_pma_mad *VAR_1,
      struct ib_device *VAR_2, u8 VAR_3)
{
 struct ib_pma_portcounters_ext *VAR_4 =
  (struct ib_pma_portcounters_ext *)VAR_1->data;
 struct ipath_ibdev *VAR_5 = FUNC_4(VAR_2);
 u64 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u8 VAR_11 = VAR_4->port_select;

 FUNC_1(VAR_5->dd, &VAR_6, &VAR_7, &VAR_8,
    &VAR_9, &VAR_10);


 VAR_6 -= VAR_5->z_port_xmit_data;
 VAR_7 -= VAR_5->z_port_rcv_data;
 VAR_8 -= VAR_5->z_port_xmit_packets;
 VAR_9 -= VAR_5->z_port_rcv_packets;

 FUNC_2(VAR_1->data, 0, sizeof(VAR_1->data));

 VAR_4->port_select = VAR_11;
 if (VAR_1->mad_hdr.attr_mod != 0 ||
     (VAR_11 != VAR_3 && VAR_11 != 0xFF))
  VAR_1->mad_hdr.status |= VAR_0;

 VAR_4->port_xmit_data = FUNC_0(VAR_6);
 VAR_4->port_rcv_data = FUNC_0(VAR_7);
 VAR_4->port_xmit_packets = FUNC_0(VAR_8);
 VAR_4->port_rcv_packets = FUNC_0(VAR_9);
 VAR_4->port_unicast_xmit_packets = FUNC_0(VAR_5->n_unicast_xmit);
 VAR_4->port_unicast_rcv_packets = FUNC_0(VAR_5->n_unicast_rcv);
 VAR_4->port_multicast_xmit_packets = FUNC_0(VAR_5->n_multicast_xmit);
 VAR_4->port_multicast_rcv_packets = FUNC_0(VAR_5->n_multicast_rcv);

 return FUNC_3((struct ib_smp *) VAR_1);
}
