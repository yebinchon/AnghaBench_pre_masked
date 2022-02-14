
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ OsType; } ;
struct TYPE_8__ {int Bridge; scalar_t__ Beta; } ;
struct TYPE_7__ {scalar_t__ ServerType; int IsInVm; TYPE_3__* Cedar; int * DDnsClient; } ;
typedef TYPE_1__ SERVER ;
typedef int CAPSLIST ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 TYPE_6__* FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ const VAR_11 ;
 scalar_t__ const VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 () ;

void FUNC_17(SERVER *VAR_18, CAPSLIST *VAR_19)
{
 bool VAR_20 = 0;


 if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
 {
  return;
 }

 VAR_20 = FUNC_14(VAR_18->Cedar);


 FUNC_6(VAR_19);


 FUNC_1(VAR_19, "i_max_packet_size", VAR_8);

 if (VAR_18->Cedar->Bridge == 0)
 {
  UINT VAR_21, VAR_22, VAR_23, VAR_24;

  VAR_22 = VAR_0;
  VAR_23 = VAR_0;
  VAR_21 = VAR_14;
  VAR_24 = VAR_0;


  FUNC_1(VAR_19, "i_max_hubs", VAR_14);


  FUNC_1(VAR_19, "i_max_sessions", VAR_21);


  FUNC_1(VAR_19, "i_max_user_creation", VAR_24);


  FUNC_1(VAR_19, "i_max_clients", VAR_22);


  FUNC_1(VAR_19, "i_max_bridges", VAR_23);

  if (VAR_18->ServerType != VAR_16)
  {

   FUNC_1(VAR_19, "i_max_users_per_hub", VAR_9);


   FUNC_1(VAR_19, "i_max_groups_per_hub", VAR_2);


   FUNC_1(VAR_19, "i_max_access_lists", VAR_1);
  }
  else
  {

   FUNC_1(VAR_19, "i_max_users_per_hub", 0);


   FUNC_1(VAR_19, "i_max_groups_per_hub", 0);


   FUNC_1(VAR_19, "i_max_access_lists", 0);
  }


  FUNC_0(VAR_19, "b_support_limit_multilogin", 1);


  FUNC_0(VAR_19, "b_support_qos", 1);


  FUNC_0(VAR_19, "b_support_syslog", 1);



  FUNC_0(VAR_19, "b_support_ipsec", (VAR_18->ServerType == VAR_17));



  FUNC_0(VAR_19, "b_support_sstp", (VAR_18->ServerType == VAR_17));



  FUNC_0(VAR_19, "b_support_openvpn", (VAR_18->ServerType == VAR_17));


  FUNC_0(VAR_19, "b_support_ddns", (VAR_18->DDnsClient != ((void*)0)));

  if (VAR_18->DDnsClient != ((void*)0))
  {

   FUNC_0(VAR_19, "b_support_ddns_proxy", 1);
  }


  FUNC_0(VAR_19, "b_support_special_listener", 1);
 }
 else
 {

  FUNC_1(VAR_19, "i_max_hubs", 0);


  FUNC_1(VAR_19, "i_max_sessions", 0);


  FUNC_1(VAR_19, "i_max_clients", 0);


  FUNC_1(VAR_19, "i_max_bridges", 0);


  FUNC_1(VAR_19, "i_max_users_per_hub", 0);


  FUNC_1(VAR_19, "i_max_groups_per_hub", 0);


  FUNC_1(VAR_19, "i_max_access_lists", 0);


  FUNC_0(VAR_19, "b_support_qos", 1);


  FUNC_0(VAR_19, "b_support_syslog", 1);


  FUNC_0(VAR_19, "b_support_ipsec", 0);


  FUNC_0(VAR_19, "b_support_sstp", 0);


  FUNC_0(VAR_19, "b_support_openvpn", 0);


  FUNC_0(VAR_19, "b_support_ddns", 0);


  FUNC_0(VAR_19, "b_support_special_listener", 0);
 }


 FUNC_0(VAR_19, "b_cluster_hub_type_fixed", 1);


 FUNC_1(VAR_19, "i_max_mac_tables", VAR_4);


 FUNC_1(VAR_19, "i_max_ip_tables", VAR_3);


 FUNC_0(VAR_19, "b_support_securenat", 1);


 FUNC_0(VAR_19, "b_suppport_push_route", !VAR_20);
 FUNC_0(VAR_19, "b_suppport_push_route_config", 1);

 if (VAR_18->ServerType != VAR_17)
 {
  FUNC_0(VAR_19, "b_virtual_nat_disabled", 1);
 }


 FUNC_1(VAR_19, "i_max_secnat_tables", VAR_10);


 if (VAR_18->ServerType == VAR_17)
 {
  FUNC_0(VAR_19, "b_support_cascade", 1);
 }
 else
 {
  FUNC_0(VAR_19, "b_support_cascade", 0);
 }

 if (VAR_18->Cedar->Bridge)
 {

  FUNC_0(VAR_19, "b_bridge", 1);
 }
 else if (VAR_18->ServerType == VAR_17)
 {

  FUNC_0(VAR_19, "b_standalone", 1);
 }
 else if (VAR_18->ServerType == VAR_15)
 {

  FUNC_0(VAR_19, "b_cluster_controller", 1);
 }
 else
 {

  FUNC_0(VAR_19, "b_cluster_member", 1);
 }


 FUNC_0(VAR_19, "b_support_config_hub", VAR_18->ServerType != VAR_16 &&
  VAR_18->Cedar->Bridge == 0);


 FUNC_0(VAR_19, "b_vpn_client_connect", VAR_18->Cedar->Bridge == 0 ? 1 : 0);


 FUNC_0(VAR_19, "b_support_radius", VAR_18->ServerType != VAR_16 &&
  VAR_18->Cedar->Bridge == 0);


 FUNC_0(VAR_19, "b_local_bridge", FUNC_8());

 if (FUNC_11(FUNC_4()->OsType))
 {

  FUNC_0(VAR_19, "b_must_install_pcap", FUNC_9() == 0 ? 1 : 0);
 }
 else
 {

  FUNC_0(VAR_19, "b_must_install_pcap", 0);
 }

 if (FUNC_8())
 {

  const UINT VAR_25 = FUNC_4()->OsType;
  FUNC_0(VAR_19, "b_tap_supported", VAR_25 == VAR_12 || VAR_25 == VAR_11);
 }


 if (VAR_18->ServerType == VAR_17)
 {
  FUNC_0(VAR_19, "b_support_cascade", 1);
 }
 else
 {
  FUNC_0(VAR_19, "b_support_cascade", 0);
 }


 FUNC_0(VAR_19, "b_support_cascade_cert", 1);


 FUNC_0(VAR_19, "b_support_config_log", VAR_18->ServerType != VAR_16);


 FUNC_0(VAR_19, "b_support_autodelete", 1);


 FUNC_0(VAR_19, "b_support_config_rw", 1);


 FUNC_0(VAR_19, "b_support_hub_admin_option", 1);


 FUNC_0(VAR_19, "b_support_cascade_client_cert", 1);


 FUNC_0(VAR_19, "b_support_hide_hub", 1);


 FUNC_0(VAR_19, "b_support_cluster_admin", 1);


 FUNC_0(VAR_19, "b_is_softether", 1);

 if (VAR_18->Cedar->Bridge == 0)
 {


  FUNC_0(VAR_19, "b_support_layer3", 1);

  FUNC_1(VAR_19, "i_max_l3_sw", VAR_6);
  FUNC_1(VAR_19, "i_max_l3_if", VAR_5);
  FUNC_1(VAR_19, "i_max_l3_table", VAR_7);


  FUNC_0(VAR_19, "b_support_cluster", 1);
 }
 else
 {
  FUNC_0(VAR_19, "b_support_layer3", 0);

  FUNC_1(VAR_19, "i_max_l3_sw", 0);
  FUNC_1(VAR_19, "i_max_l3_if", 0);
  FUNC_1(VAR_19, "i_max_l3_table", 0);

  FUNC_0(VAR_19, "b_support_cluster", 0);
 }

 if (VAR_18->ServerType != VAR_16 && VAR_18->Cedar->Bridge == 0)
 {

  FUNC_0(VAR_19, "b_support_crl", 1);


  FUNC_0(VAR_19, "b_support_ac", 1);
 }


 FUNC_0(VAR_19, "b_support_read_log", 1);


 FUNC_0(VAR_19, "b_support_rename_cascade", 1);


 if (VAR_18->Cedar->Beta)
 {

  FUNC_0(VAR_19, "b_beta_version", 1);
 }


 FUNC_0(VAR_19, "b_is_in_vm", VAR_18->IsInVm);
 if (FUNC_8() && FUNC_2())
 {
  FUNC_0(VAR_19, "b_support_network_connection_name", 1);
 }



 FUNC_0(VAR_19, "b_support_check_mac", 1);


 FUNC_0(VAR_19, "b_support_check_tcp_state", 1);


 FUNC_0(VAR_19, "b_support_radius_retry_interval_and_several_servers", VAR_18->ServerType != VAR_16 &&
  VAR_18->Cedar->Bridge == 0);


 FUNC_0(VAR_19, "b_support_vlan", 1);


 if ((VAR_18->Cedar->Bridge == 0) &&
  (VAR_18->ServerType == VAR_17 || VAR_18->ServerType == VAR_15))
 {
  FUNC_0(VAR_19, "b_support_hub_ext_options", 1);
 }
 else
 {
  FUNC_0(VAR_19, "b_support_hub_ext_options", 0);
 }


 FUNC_0(VAR_19, "b_support_policy_ver_3", 1);


 FUNC_0(VAR_19, "b_support_ipv6_acl", 1);


 FUNC_0(VAR_19, "b_support_ex_acl", 1);


 FUNC_0(VAR_19, "b_support_redirect_url_acl", 1);


 FUNC_0(VAR_19, "b_support_acl_group", 1);


 FUNC_0(VAR_19, "b_support_ipv6_ac", 1);


 FUNC_0(VAR_19, "b_support_eth_vlan", (FUNC_12(FUNC_5()) && FUNC_3(FUNC_5(), 100) >= 2));


 FUNC_0(VAR_19, "b_support_msg", 1);


 FUNC_0(VAR_19, "b_support_udp_acceleration", 1);


 FUNC_0(VAR_19, "b_support_aes_ni", FUNC_7());







 FUNC_0(VAR_19, "b_support_azure", FUNC_13(VAR_18));


 FUNC_0(VAR_19, "b_vpn3", 1);


 FUNC_0(VAR_19, "b_vpn4", 1);


 FUNC_15(VAR_18, VAR_19);
}
