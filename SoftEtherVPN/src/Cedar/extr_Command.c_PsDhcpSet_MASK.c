
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
struct TYPE_14__ {int ApplyDhcpPushRoutes; int HubName; int DhcpPushRoutes; int SaveLog; int DhcpDomainName; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; int DhcpExpireTimeSpan; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; } ;
typedef TYPE_1__ VH_OPTION ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {char* member_0; int member_1; int member_2; } ;
struct TYPE_17__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_16__ {char* member_0; TYPE_5__* member_4; int * member_3; int member_2; int * member_1; } ;
struct TYPE_15__ {int CapsList; int Rpc; int * HubName; } ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ CMD_EVAL_MIN_MAX ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_7 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,int,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_4__*,int ) ;

UINT FUNC_15(CONSOLE *VAR_9, char *VAR_10, wchar_t *VAR_11, void *VAR_12)
{
 LIST *VAR_13;
 PS *VAR_14 = (PS *)VAR_12;
 UINT VAR_15 = 0;
 VH_OPTION VAR_16;

 CMD_EVAL_MIN_MAX VAR_17 =
 {
  "CMD_NatSet_Eval_UDP", VAR_8 / 1000, VAR_7 / 1000,
 };
 PARAM VAR_18[] =
 {

  {"START", VAR_3, FUNC_13("CMD_DhcpSet_Prompt_START"), *VAR_0, ((void*)0)},
  {"END", VAR_3, FUNC_13("CMD_DhcpSet_Prompt_END"), *VAR_0, ((void*)0)},
  {"MASK", VAR_3, FUNC_13("CMD_DhcpSet_Prompt_MASK"), *VAR_0, ((void*)0)},
  {"EXPIRE", VAR_3, FUNC_13("CMD_DhcpSet_Prompt_EXPIRE"), *VAR_1, &VAR_17},
  {"GW", VAR_3, FUNC_13("CMD_DhcpSet_Prompt_GW"), *VAR_0, ((void*)0)},
  {"DNS", VAR_3, FUNC_13("CMD_DhcpSet_Prompt_DNS"), *VAR_0, ((void*)0)},
  {"DNS2", VAR_3, FUNC_13("CMD_DhcpSet_Prompt_DNS2"), *VAR_0, ((void*)0)},
  {"DOMAIN", VAR_3, FUNC_13("CMD_DhcpSet_Prompt_DOMAIN"), ((void*)0), ((void*)0)},
  {"LOG", VAR_3, FUNC_13("CMD_NatSet_Prompt_LOG"), *VAR_2, ((void*)0)},
  {"PUSHROUTE", ((void*)0), FUNC_13("CMD_DhcpSet_PUSHROUTE"), ((void*)0), ((void*)0)},
 };


 if (VAR_14->HubName == ((void*)0))
 {
  VAR_9->Write(VAR_9, FUNC_13("CMD_Hub_Not_Selected"));
  return VAR_4;
 }

 VAR_13 = FUNC_7(VAR_9, VAR_10, VAR_11, VAR_18, sizeof(VAR_18) / sizeof(VAR_18[0]));
 if (VAR_13 == ((void*)0))
 {
  return VAR_4;
 }

 FUNC_12(&VAR_16, sizeof(VAR_16));
 FUNC_10(VAR_16.HubName, sizeof(VAR_16.HubName), VAR_14->HubName);


 VAR_15 = FUNC_8(VAR_14->Rpc, &VAR_16);

 if (VAR_15 != VAR_6)
 {

  FUNC_0(VAR_9, VAR_15);
  FUNC_1(VAR_13);
  return VAR_15;
 }
 else
 {

  FUNC_11(&VAR_16.DhcpLeaseIPStart, FUNC_4(VAR_13, "START"));
  FUNC_11(&VAR_16.DhcpLeaseIPEnd, FUNC_4(VAR_13, "END"));
  FUNC_11(&VAR_16.DhcpSubnetMask, FUNC_4(VAR_13, "MASK"));
  VAR_16.DhcpExpireTimeSpan = FUNC_3(VAR_13, "EXPIRE");
  FUNC_11(&VAR_16.DhcpGatewayAddress, FUNC_4(VAR_13, "GW"));
  FUNC_11(&VAR_16.DhcpDnsServerAddress, FUNC_4(VAR_13, "DNS"));
  FUNC_11(&VAR_16.DhcpDnsServerAddress2, FUNC_4(VAR_13, "DNS2"));
  FUNC_10(VAR_16.DhcpDomainName, sizeof(VAR_16.DhcpDomainName), FUNC_4(VAR_13, "DOMAIN"));
  VAR_16.SaveLog = FUNC_5(VAR_13, "LOG");

  FUNC_10(VAR_16.DhcpPushRoutes, sizeof(VAR_16.DhcpPushRoutes), FUNC_4(VAR_13, "PUSHROUTE"));
  VAR_16.ApplyDhcpPushRoutes = 1;

  FUNC_10(VAR_16.HubName, sizeof(VAR_16.HubName), VAR_14->HubName);
  VAR_15 = FUNC_9(VAR_14->Rpc, &VAR_16);

  if (VAR_15 != VAR_6)
  {

   FUNC_0(VAR_9, VAR_15);
   FUNC_1(VAR_13);
   return VAR_15;
  }

  if (FUNC_6(FUNC_4(VAR_13, "PUSHROUTE")) == 0)
  {
   if (FUNC_2(VAR_14->CapsList, "b_suppport_push_route") == 0 &&
    FUNC_2(VAR_14->CapsList, "b_suppport_push_route_config"))
   {
    FUNC_0(VAR_9, VAR_5);
   }
  }
 }

 FUNC_1(VAR_13);

 return 0;
}
