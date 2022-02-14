
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u64 ;
struct qib_pportdata {int dummy; } ;
struct qib_ibport {scalar_t__ n_multicast_rcv; scalar_t__ n_multicast_xmit; scalar_t__ n_unicast_rcv; scalar_t__ n_unicast_xmit; void* z_port_rcv_packets; void* z_port_xmit_packets; void* z_port_rcv_data; void* z_port_xmit_data; } ;
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
 int FUNC_0 (struct ib_pma_mad*,struct ib_device*,int ) ;
 struct qib_pportdata* FUNC_1 (struct qib_ibport*) ;
 int FUNC_2 (struct qib_pportdata*,void**,void**,void**,void**,void**) ;
 struct qib_ibport* FUNC_3 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_pma_mad *VAR_8,
        struct ib_device *VAR_9, u8 VAR_10)
{
 struct ib_pma_portcounters *VAR_11 = (struct ib_pma_portcounters *)
  VAR_8->data;
 struct qib_ibport *VAR_12 = FUNC_3(VAR_9, VAR_10);
 struct qib_pportdata *VAR_13 = FUNC_1(VAR_12);
 u64 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 FUNC_2(VAR_13, &VAR_14, &VAR_15, &VAR_16, &VAR_17, &VAR_18);

 if (VAR_11->counter_select & VAR_6)
  VAR_12->z_port_xmit_data = VAR_14;

 if (VAR_11->counter_select & VAR_2)
  VAR_12->z_port_rcv_data = VAR_15;

 if (VAR_11->counter_select & VAR_7)
  VAR_12->z_port_xmit_packets = VAR_16;

 if (VAR_11->counter_select & VAR_3)
  VAR_12->z_port_rcv_packets = VAR_17;

 if (VAR_11->counter_select & VAR_5)
  VAR_12->n_unicast_xmit = 0;

 if (VAR_11->counter_select & VAR_4)
  VAR_12->n_unicast_rcv = 0;

 if (VAR_11->counter_select & VAR_1)
  VAR_12->n_multicast_xmit = 0;

 if (VAR_11->counter_select & VAR_0)
  VAR_12->n_multicast_rcv = 0;

 return FUNC_0(VAR_8, VAR_9, VAR_10);
}
