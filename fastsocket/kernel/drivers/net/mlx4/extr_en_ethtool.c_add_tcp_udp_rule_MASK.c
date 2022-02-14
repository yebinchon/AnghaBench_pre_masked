
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {void* dst_port_msk; void* src_port_msk; int dst_port; int src_port; } ;
struct TYPE_13__ {void* dst_ip_msk; void* src_ip_msk; int dst_ip; int src_ip; } ;
struct mlx4_spec_list {int list; TYPE_7__ tcp_udp; TYPE_6__ ipv4; int id; } ;
struct mlx4_en_priv {int dummy; } ;
struct list_head {int dummy; } ;
struct ethtool_tcpip4_spec {scalar_t__ pdst; scalar_t__ psrc; scalar_t__ ip4dst; scalar_t__ ip4src; } ;
struct TYPE_10__ {int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_9__ {int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_11__ {TYPE_3__ udp_ip4_spec; TYPE_2__ tcp_ip4_spec; } ;
struct TYPE_8__ {struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct TYPE_12__ {TYPE_4__ h_u; TYPE_1__ m_u; } ;
struct ethtool_rxnfc {TYPE_5__ fs; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_spec_list*) ;
 struct mlx4_spec_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (struct mlx4_en_priv*,struct ethtool_rxnfc*,struct list_head*,struct mlx4_spec_list*,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx4_en_priv *VAR_8,
        struct ethtool_rxnfc *VAR_9,
        struct list_head *VAR_10, int VAR_11)
{
 int VAR_12;
 struct mlx4_spec_list *VAR_13 = ((void*)0);
 struct mlx4_spec_list *VAR_14 = ((void*)0);
 struct mlx4_spec_list *VAR_15 = ((void*)0);
 struct ethtool_tcpip4_spec *VAR_16 = &VAR_9->fs.m_u.tcp_ip4_spec;

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_3);
 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_3);
 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_3);
 if (!VAR_13 || !VAR_14 || !VAR_15) {
  FUNC_0(VAR_8, "Fail to alloc ethtool rule.\n");
  VAR_12 = -VAR_0;
  goto free_spec;
 }

 VAR_14->id = VAR_4;

 if (VAR_11 == VAR_7) {
  VAR_12 = FUNC_4(VAR_8, VAR_9, VAR_10,
          VAR_13,
          VAR_9->fs.h_u.
          tcp_ip4_spec.ip4dst);
  if (VAR_12)
   goto free_spec;
  VAR_15->id = VAR_5;
  VAR_14->ipv4.src_ip = VAR_9->fs.h_u.tcp_ip4_spec.ip4src;
  VAR_14->ipv4.dst_ip = VAR_9->fs.h_u.tcp_ip4_spec.ip4dst;
  VAR_15->tcp_udp.src_port = VAR_9->fs.h_u.tcp_ip4_spec.psrc;
  VAR_15->tcp_udp.dst_port = VAR_9->fs.h_u.tcp_ip4_spec.pdst;
 } else {
  VAR_12 = FUNC_4(VAR_8, VAR_9, VAR_10,
          VAR_13,
          VAR_9->fs.h_u.
          udp_ip4_spec.ip4dst);
  if (VAR_12)
   goto free_spec;
  VAR_15->id = VAR_6;
  VAR_14->ipv4.src_ip = VAR_9->fs.h_u.udp_ip4_spec.ip4src;
  VAR_14->ipv4.dst_ip = VAR_9->fs.h_u.udp_ip4_spec.ip4dst;
  VAR_15->tcp_udp.src_port = VAR_9->fs.h_u.udp_ip4_spec.psrc;
  VAR_15->tcp_udp.dst_port = VAR_9->fs.h_u.udp_ip4_spec.pdst;
 }

 if (VAR_16->ip4src)
  VAR_14->ipv4.src_ip_msk = VAR_2;
 if (VAR_16->ip4dst)
  VAR_14->ipv4.dst_ip_msk = VAR_2;

 if (VAR_16->psrc)
  VAR_15->tcp_udp.src_port_msk = VAR_1;
 if (VAR_16->pdst)
  VAR_15->tcp_udp.dst_port_msk = VAR_1;

 FUNC_3(&VAR_14->list, VAR_10);
 FUNC_3(&VAR_15->list, VAR_10);

 return 0;

free_spec:
 FUNC_1(VAR_13);
 FUNC_1(VAR_14);
 FUNC_1(VAR_15);
 return VAR_12;
}
