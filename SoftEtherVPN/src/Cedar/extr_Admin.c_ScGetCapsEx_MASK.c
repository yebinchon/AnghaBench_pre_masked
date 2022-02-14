
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int info ;
typedef int b ;
typedef int UINT ;
struct TYPE_14__ {int Value; } ;
struct TYPE_13__ {int ServerBuildInt; scalar_t__ ServerType; int IsBridgeSupportedOs; int IsWinPcapNeeded; int ServerProductName; } ;
struct TYPE_12__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ RPC_SERVER_INFO ;
typedef TYPE_2__ RPC_BRIDGE_SUPPORT ;
typedef int RPC ;
typedef int CAPSLIST ;
typedef TYPE_4__ CAPS ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_4__* FUNC_5 (int *,char*) ;
 TYPE_1__* FUNC_6 (char*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_7 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_11 (int ,char*,int ,int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int * FUNC_13 (int) ;

CAPSLIST *FUNC_14(RPC *VAR_5)
{
 RPC_SERVER_INFO VAR_6;
 CAPSLIST *VAR_7;
 bool VAR_8 = 0;

 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_12(&VAR_6, sizeof(VAR_6));
 FUNC_10(VAR_5, &VAR_6);

 VAR_7 = FUNC_13(sizeof(CAPSLIST));


 if (FUNC_9(VAR_5, VAR_7) != VAR_0)
 {
  UINT VAR_9;

  FUNC_2(VAR_7);
  VAR_7 = FUNC_7();


  VAR_9 = VAR_6.ServerBuildInt;

  VAR_8 = (FUNC_11(VAR_6.ServerProductName, "bridge", 0, 0) == VAR_1) ? 0 : 1;

  FUNC_1(VAR_7, "i_max_packet_size", 1514);

  if (VAR_8 == 0)
  {
   FUNC_1(VAR_7, "i_max_hubs", 4096);
   FUNC_1(VAR_7, "i_max_sessions", 4096);

   if (VAR_6.ServerType != VAR_3)
   {
    FUNC_1(VAR_7, "i_max_users_per_hub", 10000);
    FUNC_1(VAR_7, "i_max_groups_per_hub", 10000);
    FUNC_1(VAR_7, "i_max_access_lists", 4096);
   }
   else
   {
    FUNC_1(VAR_7, "i_max_users_per_hub", 0);
    FUNC_1(VAR_7, "i_max_groups_per_hub", 0);
    FUNC_1(VAR_7, "i_max_access_lists", 0);
   }
  }
  else
  {
   FUNC_1(VAR_7, "i_max_hubs", 0);
   FUNC_1(VAR_7, "i_max_sessions", 0);
   FUNC_1(VAR_7, "i_max_users_per_hub", 0);
   FUNC_1(VAR_7, "i_max_groups_per_hub", 0);
   FUNC_1(VAR_7, "i_max_access_lists", 0);
  }

  FUNC_1(VAR_7, "i_max_mac_tables", 10000);
  FUNC_1(VAR_7, "i_max_ip_tables", 10000);

  if (VAR_6.ServerType == VAR_4)
  {
   FUNC_0(VAR_7, "b_support_securenat", (VAR_9 >= 3600) ? 1 : 0);
   FUNC_1(VAR_7, "i_max_secnat_tables", 4096);
  }
  else
  {
   FUNC_0(VAR_7, "b_support_securenat", 0);
   FUNC_1(VAR_7, "i_max_secnat_tables", 0);
  }

  if (VAR_8)
  {
   FUNC_0(VAR_7, "b_bridge", 1);
  }
  else if (VAR_6.ServerType == VAR_4)
  {
   FUNC_0(VAR_7, "b_standalone", 1);
  }
  else if (VAR_6.ServerType == VAR_2)
  {
   FUNC_0(VAR_7, "b_cluster_controller", 1);
  }
  else
  {
   FUNC_0(VAR_7, "b_cluster_member", 1);
  }

  FUNC_0(VAR_7, "b_support_config_hub", VAR_6.ServerType != VAR_3 &&
   VAR_8 == 0);

  FUNC_0(VAR_7, "b_vpn_client_connect", VAR_8 == 0 ? 1 : 0);

  FUNC_0(VAR_7, "b_support_radius", VAR_6.ServerType != VAR_3 &&
   VAR_8 == 0);

  if (VAR_9 >= 3600)
  {
   RPC_BRIDGE_SUPPORT VAR_10;
   FUNC_12(&VAR_10, sizeof(VAR_10));
   if (FUNC_8(VAR_5, &VAR_10) == VAR_0)
   {
    FUNC_0(VAR_7, "b_local_bridge", VAR_10.IsBridgeSupportedOs);
    FUNC_0(VAR_7, "b_must_install_pcap", VAR_10.IsWinPcapNeeded);
   }
   else
   {
    FUNC_0(VAR_7, "b_local_bridge", 0);
    FUNC_0(VAR_7, "b_must_install_pcap", 0);
   }
  }
  else
  {
   FUNC_0(VAR_7, "b_local_bridge", 0);
   FUNC_0(VAR_7, "b_must_install_pcap", 0);
  }

  FUNC_0(VAR_7, "b_tap_supported", 0);

  if (VAR_6.ServerType == VAR_4)
  {
   FUNC_0(VAR_7, "b_support_cascade", 1);
  }
  else
  {
   FUNC_0(VAR_7, "b_support_cascade", 0);
  }

  FUNC_0(VAR_7, "b_support_cascade_cert", 0);
  FUNC_0(VAR_7, "b_support_config_log", VAR_6.ServerType != VAR_3);
  FUNC_0(VAR_7, "b_support_autodelete", 0);
 }
 else
 {

  if (VAR_6.ServerBuildInt <= 4350)
  {
   if (VAR_8 == 0)
   {

    CAPS *VAR_11 = FUNC_5(VAR_7, "b_support_cluster");
    if (VAR_11 == ((void*)0))
    {
     FUNC_0(VAR_7, "b_support_cluster", 1);
    }
    else
    {
     VAR_11->Value = 1;
    }
   }
  }
 }

 if (1)
 {
  TOKEN_LIST *VAR_12;


  VAR_12 = FUNC_6("CT_b_");
  if (VAR_12 != ((void*)0))
  {
   UINT VAR_13;
   for (VAR_13 = 0;VAR_13 < VAR_12->NumTokens;VAR_13++)
   {
    char *VAR_14 = VAR_12->Token[VAR_13] + 3;

    if (FUNC_5(VAR_7, VAR_14) == ((void*)0))
    {
     FUNC_0(VAR_7, VAR_14, 0);
    }
   }

   FUNC_4(VAR_12);
  }
 }

 FUNC_3(&VAR_6);

 return VAR_7;
}
