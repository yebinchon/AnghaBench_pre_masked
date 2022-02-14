
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int src_port_msk; int src_port; int dst_port_msk; int dst_port; } ;
struct TYPE_14__ {int dst_ip_msk; int dst_ip; int src_ip_msk; int src_ip; } ;
struct TYPE_12__ {int dst_gid_msk; int dst_gid; int qpn_msk; int l3_qpn; } ;
struct TYPE_10__ {int vlan_id_msk; int vlan_id; int ether_type; int ether_type_enable; int * src_mac_msk; int * src_mac; int * dst_mac_msk; int * dst_mac; } ;
struct mlx4_spec_list {size_t id; TYPE_8__ tcp_udp; TYPE_6__ ipv4; TYPE_4__ ib; TYPE_2__ eth; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_15__ {int src_port_msk; int src_port; int dst_port_msk; int dst_port; } ;
struct TYPE_13__ {int dst_ip_msk; int dst_ip; int src_ip_msk; int src_ip; } ;
struct TYPE_11__ {int dst_gid_msk; int dst_gid; int qpn_mask; int l3_qpn; } ;
struct TYPE_9__ {int ether_type_enable; int vlan_tag_msk; int vlan_tag; int ether_type; int * src_mac_msk; int * src_mac; int * dst_mac_msk; int * dst_mac; } ;
struct _rule_hw {int size; TYPE_7__ tcp_udp; TYPE_5__ ipv4; TYPE_3__ ib; TYPE_1__ eth; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int* VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct _rule_hw*,int ,int) ;
 int FUNC_3 (struct mlx4_dev*,size_t) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_5, struct mlx4_spec_list *VAR_6,
       struct _rule_hw *VAR_7)
{
 if (FUNC_3(VAR_5, VAR_6->id) < 0)
  return -VAR_0;
 FUNC_2(VAR_7, 0, FUNC_3(VAR_5, VAR_6->id));
 VAR_7->id = FUNC_0(VAR_4[VAR_6->id]);
 VAR_7->size = FUNC_3(VAR_5, VAR_6->id) >> 2;

 switch (VAR_6->id) {
 case 133:
  FUNC_1(VAR_7->eth.dst_mac, VAR_6->eth.dst_mac, VAR_2);
  FUNC_1(VAR_7->eth.dst_mac_msk, VAR_6->eth.dst_mac_msk,
         VAR_2);
  FUNC_1(VAR_7->eth.src_mac, VAR_6->eth.src_mac, VAR_2);
  FUNC_1(VAR_7->eth.src_mac_msk, VAR_6->eth.src_mac_msk,
         VAR_2);
  if (VAR_6->eth.ether_type_enable) {
   VAR_7->eth.ether_type_enable = 1;
   VAR_7->eth.ether_type = VAR_6->eth.ether_type;
  }
  VAR_7->eth.vlan_tag = VAR_6->eth.vlan_id;
  VAR_7->eth.vlan_tag_msk = VAR_6->eth.vlan_id_msk;
  break;

 case 132:
  VAR_7->ib.l3_qpn = VAR_6->ib.l3_qpn;
  VAR_7->ib.qpn_mask = VAR_6->ib.qpn_msk;
  FUNC_1(&VAR_7->ib.dst_gid, &VAR_6->ib.dst_gid, 16);
  FUNC_1(&VAR_7->ib.dst_gid_msk, &VAR_6->ib.dst_gid_msk, 16);
  break;

 case 130:
  return -VAR_1;

 case 131:
  VAR_7->ipv4.src_ip = VAR_6->ipv4.src_ip;
  VAR_7->ipv4.src_ip_msk = VAR_6->ipv4.src_ip_msk;
  VAR_7->ipv4.dst_ip = VAR_6->ipv4.dst_ip;
  VAR_7->ipv4.dst_ip_msk = VAR_6->ipv4.dst_ip_msk;
  break;

 case 129:
 case 128:
  VAR_7->tcp_udp.dst_port = VAR_6->tcp_udp.dst_port;
  VAR_7->tcp_udp.dst_port_msk = VAR_6->tcp_udp.dst_port_msk;
  VAR_7->tcp_udp.src_port = VAR_6->tcp_udp.src_port;
  VAR_7->tcp_udp.src_port_msk = VAR_6->tcp_udp.src_port_msk;
  break;

 default:
  return -VAR_0;
 }

 return VAR_3[VAR_6->id];
}
