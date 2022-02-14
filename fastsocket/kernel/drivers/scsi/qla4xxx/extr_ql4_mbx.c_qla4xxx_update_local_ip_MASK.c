
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* u6_addr8; } ;
struct TYPE_5__ {TYPE_1__ in6_u; } ;
struct TYPE_6__ {int* ip_address; int* subnet_mask; int* gateway; int ipv6_addr0; int ipv6_addr1; int ipv6_default_router_addr; void* ipv6_port; void* ipv6_vlan_tag; TYPE_2__ ipv6_link_local_addr; void* ipv6_default_router_state; void* ipv6_addr1_state; void* ipv6_addr0_state; void* ipv6_link_local_state; void* ipv4_vlan_tag; void* ipv6_addl_options; void* ipv6_options; void* ipv4_port; void* eth_mtu_size; void* ipv4_addr_state; void* ipv4_options; void* tcp_options; } ;
struct scsi_qla_host {scalar_t__ acb_version; TYPE_3__ ip_config; } ;
struct addr_ctrl_blk {int ipv6_port; int ipv6_vlan_tag; int ipv6_dflt_rtr_addr; int ipv6_addr1; int ipv6_addr0; int ipv6_if_id; int ipv6_dflt_rtr_state; int ipv6_addr1_state; int ipv6_addr0_state; int ipv6_lnk_lcl_addr_state; int ipv4_vlan_tag; int ipv4_gw_addr; int ipv4_subnet; int ipv4_addr; int ipv6_addtl_opts; int ipv6_opts; int ipv4_port; int eth_mtu_size; int ipv4_addr_state; int ipv4_ip_opts; int ipv4_tcp_opts; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int*,int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5(struct scsi_qla_host *VAR_1,
   struct addr_ctrl_blk *VAR_2)
{
 VAR_1->ip_config.tcp_options = FUNC_2(VAR_2->ipv4_tcp_opts);
 VAR_1->ip_config.ipv4_options = FUNC_2(VAR_2->ipv4_ip_opts);
 VAR_1->ip_config.ipv4_addr_state =
    FUNC_2(VAR_2->ipv4_addr_state);
 VAR_1->ip_config.eth_mtu_size =
    FUNC_2(VAR_2->eth_mtu_size);
 VAR_1->ip_config.ipv4_port = FUNC_2(VAR_2->ipv4_port);

 if (VAR_1->acb_version == VAR_0) {
  VAR_1->ip_config.ipv6_options = FUNC_2(VAR_2->ipv6_opts);
  VAR_1->ip_config.ipv6_addl_options =
    FUNC_2(VAR_2->ipv6_addtl_opts);
 }


 FUNC_3(VAR_1->ip_config.ip_address, VAR_2->ipv4_addr,
        FUNC_4(sizeof(VAR_1->ip_config.ip_address),
     sizeof(VAR_2->ipv4_addr)));
 FUNC_3(VAR_1->ip_config.subnet_mask, VAR_2->ipv4_subnet,
        FUNC_4(sizeof(VAR_1->ip_config.subnet_mask),
     sizeof(VAR_2->ipv4_subnet)));
 FUNC_3(VAR_1->ip_config.gateway, VAR_2->ipv4_gw_addr,
        FUNC_4(sizeof(VAR_1->ip_config.gateway),
     sizeof(VAR_2->ipv4_gw_addr)));

 VAR_1->ip_config.ipv4_vlan_tag = FUNC_0(VAR_2->ipv4_vlan_tag);

 if (FUNC_1(VAR_1)) {

  VAR_1->ip_config.ipv6_link_local_state =
   FUNC_2(VAR_2->ipv6_lnk_lcl_addr_state);
  VAR_1->ip_config.ipv6_addr0_state =
    FUNC_2(VAR_2->ipv6_addr0_state);
  VAR_1->ip_config.ipv6_addr1_state =
    FUNC_2(VAR_2->ipv6_addr1_state);
  VAR_1->ip_config.ipv6_default_router_state =
    FUNC_2(VAR_2->ipv6_dflt_rtr_state);
  VAR_1->ip_config.ipv6_link_local_addr.in6_u.u6_addr8[0] = 0xFE;
  VAR_1->ip_config.ipv6_link_local_addr.in6_u.u6_addr8[1] = 0x80;

  FUNC_3(&VAR_1->ip_config.ipv6_link_local_addr.in6_u.u6_addr8[8],
         VAR_2->ipv6_if_id,
         FUNC_4(sizeof(VAR_1->ip_config.ipv6_link_local_addr)/2,
      sizeof(VAR_2->ipv6_if_id)));
  FUNC_3(&VAR_1->ip_config.ipv6_addr0, VAR_2->ipv6_addr0,
         FUNC_4(sizeof(VAR_1->ip_config.ipv6_addr0),
      sizeof(VAR_2->ipv6_addr0)));
  FUNC_3(&VAR_1->ip_config.ipv6_addr1, VAR_2->ipv6_addr1,
         FUNC_4(sizeof(VAR_1->ip_config.ipv6_addr1),
      sizeof(VAR_2->ipv6_addr1)));
  FUNC_3(&VAR_1->ip_config.ipv6_default_router_addr,
         VAR_2->ipv6_dflt_rtr_addr,
         FUNC_4(sizeof(VAR_1->ip_config.ipv6_default_router_addr),
      sizeof(VAR_2->ipv6_dflt_rtr_addr)));
  VAR_1->ip_config.ipv6_vlan_tag =
    FUNC_0(VAR_2->ipv6_vlan_tag);
  VAR_1->ip_config.ipv6_port = FUNC_2(VAR_2->ipv6_port);
 }
}
