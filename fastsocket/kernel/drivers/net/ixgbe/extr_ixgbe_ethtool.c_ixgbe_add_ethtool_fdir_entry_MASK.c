
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_19__ {int flow_type; unsigned char vm_pool; int flex_bytes; int vlan_id; int dst_port; int src_port; int * dst_ip; int * src_ip; } ;
union ixgbe_atr_input {TYPE_7__ formatted; } ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_17__ {scalar_t__ flow_type; unsigned char vm_pool; int flex_bytes; int vlan_id; int dst_port; int src_port; int * dst_ip; int * src_ip; } ;
struct TYPE_12__ {TYPE_5__ formatted; } ;
struct ixgbe_fdir_filter {int sw_idx; scalar_t__ action; TYPE_10__ filter; } ;
struct ixgbe_adapter {int flags; scalar_t__ num_rx_queues; int fdir_pballoc; int fdir_perfect_lock; TYPE_9__** rx_ring; int fdir_mask; int fdir_filter_list; struct ixgbe_hw hw; } ;
struct ethtool_rxnfc {int fs; } ;
struct TYPE_20__ {int vlan_etype; int vlan_tci; int * data; } ;
struct TYPE_18__ {int vlan_etype; int vlan_tci; int * data; } ;
struct TYPE_15__ {int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_16__ {TYPE_3__ tcp_ip4_spec; } ;
struct TYPE_13__ {int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_14__ {TYPE_1__ tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {scalar_t__ ring_cookie; int location; int flow_type; TYPE_8__ m_ext; TYPE_6__ h_ext; TYPE_4__ m_u; TYPE_2__ h_u; } ;
typedef int mask ;
struct TYPE_21__ {scalar_t__ reg_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_10__*,union ixgbe_atr_input*) ;
 int FUNC_3 (struct ixgbe_hw*,union ixgbe_atr_input*) ;
 int FUNC_4 (struct ixgbe_hw*,TYPE_10__*,int,scalar_t__) ;
 int FUNC_5 (struct ethtool_rx_flow_spec*,scalar_t__*) ;
 int FUNC_6 (struct ixgbe_adapter*,struct ixgbe_fdir_filter*,int) ;
 int FUNC_7 (struct ixgbe_fdir_filter*) ;
 struct ixgbe_fdir_filter* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int *,union ixgbe_atr_input*,int) ;
 int FUNC_10 (int *,union ixgbe_atr_input*,int) ;
 int FUNC_11 (union ixgbe_atr_input*,int ,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct ixgbe_adapter *VAR_12,
     struct ethtool_rxnfc *VAR_13)
{
 struct ethtool_rx_flow_spec *VAR_14 =
  (struct ethtool_rx_flow_spec *)&VAR_13->fs;
 struct ixgbe_hw *VAR_15 = &VAR_12->hw;
 struct ixgbe_fdir_filter *VAR_16;
 union ixgbe_atr_input VAR_17;
 int VAR_18;

 if (!(VAR_12->flags & VAR_9))
  return -VAR_2;





 if ((VAR_14->ring_cookie != VAR_10) &&
     (VAR_14->ring_cookie >= VAR_12->num_rx_queues))
  return -VAR_0;


 if (VAR_14->location >= ((1024 << VAR_12->fdir_pballoc) - 2)) {
  FUNC_0(VAR_11, "Location out of range\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_8(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_1;

 FUNC_11(&VAR_17, 0, sizeof(union ixgbe_atr_input));


 VAR_16->sw_idx = VAR_14->location;


 if (!FUNC_5(VAR_14,
      &VAR_16->filter.formatted.flow_type)) {
  FUNC_0(VAR_11, "Unrecognized flow type\n");
  goto err_out;
 }

 VAR_17.formatted.flow_type = VAR_6 |
       VAR_7;

 if (VAR_16->filter.formatted.flow_type == VAR_5)
  VAR_17.formatted.flow_type &= VAR_6;


 VAR_16->filter.formatted.src_ip[0] = VAR_14->h_u.tcp_ip4_spec.ip4src;
 VAR_17.formatted.src_ip[0] = VAR_14->m_u.tcp_ip4_spec.ip4src;
 VAR_16->filter.formatted.dst_ip[0] = VAR_14->h_u.tcp_ip4_spec.ip4dst;
 VAR_17.formatted.dst_ip[0] = VAR_14->m_u.tcp_ip4_spec.ip4dst;
 VAR_16->filter.formatted.src_port = VAR_14->h_u.tcp_ip4_spec.psrc;
 VAR_17.formatted.src_port = VAR_14->m_u.tcp_ip4_spec.psrc;
 VAR_16->filter.formatted.dst_port = VAR_14->h_u.tcp_ip4_spec.pdst;
 VAR_17.formatted.dst_port = VAR_14->m_u.tcp_ip4_spec.pdst;

 if (VAR_14->flow_type & VAR_3) {
  VAR_16->filter.formatted.vm_pool =
    (unsigned char)FUNC_12(VAR_14->h_ext.data[1]);
  VAR_17.formatted.vm_pool =
    (unsigned char)FUNC_12(VAR_14->m_ext.data[1]);
  VAR_16->filter.formatted.vlan_id = VAR_14->h_ext.vlan_tci;
  VAR_17.formatted.vlan_id = VAR_14->m_ext.vlan_tci;
  VAR_16->filter.formatted.flex_bytes =
      VAR_14->h_ext.vlan_etype;
  VAR_17.formatted.flex_bytes = VAR_14->m_ext.vlan_etype;
 }


 if (VAR_14->ring_cookie == VAR_10)
  VAR_16->action = VAR_8;
 else
  VAR_16->action = VAR_14->ring_cookie;

 FUNC_13(&VAR_12->fdir_perfect_lock);

 if (FUNC_1(&VAR_12->fdir_filter_list)) {

  FUNC_10(&VAR_12->fdir_mask, &VAR_17, sizeof(VAR_17));
  VAR_18 = FUNC_3(VAR_15, &VAR_17);
  if (VAR_18) {
   FUNC_0(VAR_11, "Error writing mask\n");
   goto err_out_w_lock;
  }
 } else if (FUNC_9(&VAR_12->fdir_mask, &VAR_17, sizeof(VAR_17))) {
  FUNC_0(VAR_11, "Only one mask supported per port\n");
  goto err_out_w_lock;
 }


 FUNC_2(&VAR_16->filter, &VAR_17);


 VAR_18 = FUNC_4(VAR_15,
    &VAR_16->filter, VAR_16->sw_idx,
    (VAR_16->action == VAR_8) ?
    VAR_8 :
    VAR_12->rx_ring[VAR_16->action]->reg_idx);
 if (VAR_18)
  goto err_out_w_lock;

 FUNC_6(VAR_12, VAR_16, VAR_16->sw_idx);

 FUNC_14(&VAR_12->fdir_perfect_lock);

 return VAR_18;
err_out_w_lock:
 FUNC_14(&VAR_12->fdir_perfect_lock);
err_out:
 FUNC_7(VAR_16);
 return -VAR_0;
}
