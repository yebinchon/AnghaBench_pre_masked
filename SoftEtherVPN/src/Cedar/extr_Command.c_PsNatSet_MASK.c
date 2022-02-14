
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
struct TYPE_14__ {int HubName; int SaveLog; void* NatUdpTimeout; void* NatTcpTimeout; void* Mtu; } ;
typedef TYPE_1__ VH_OPTION ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {char* member_0; int member_1; int member_2; } ;
struct TYPE_17__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_16__ {char* member_0; TYPE_5__* member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ CMD_EVAL_MIN_MAX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_4 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int,int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__*,int ) ;

UINT FUNC_11(CONSOLE *VAR_13, char *VAR_14, wchar_t *VAR_15, void *VAR_16)
{
 LIST *VAR_17;
 PS *VAR_18 = (PS *)VAR_16;
 UINT VAR_19 = 0;
 VH_OPTION VAR_20;

 CMD_EVAL_MIN_MAX VAR_21 =
 {
  "CMD_NatSet_Eval_MTU", VAR_12 + VAR_5 + VAR_6 + 8, VAR_7,
 };
 CMD_EVAL_MIN_MAX VAR_22 =
 {
  "CMD_NatSet_Eval_TCP", VAR_9 / 1000, VAR_8 / 1000,
 };
 CMD_EVAL_MIN_MAX VAR_23 =
 {
  "CMD_NatSet_Eval_UDP", VAR_11 / 1000, VAR_10 / 1000,
 };
 PARAM VAR_24[] =
 {

  {"MTU", VAR_2, FUNC_9("CMD_NatSet_Prompt_MTU"), VAR_0, &VAR_21},
  {"TCPTIMEOUT", VAR_2, FUNC_9("CMD_NatSet_Prompt_TCPTIMEOUT"), VAR_0, &VAR_22},
  {"UDPTIMEOUT", VAR_2, FUNC_9("CMD_NatSet_Prompt_UDPTIMEOUT"), VAR_0, &VAR_23},
  {"LOG", VAR_2, FUNC_9("CMD_NatSet_Prompt_LOG"), VAR_1, ((void*)0)},
 };


 if (VAR_18->HubName == ((void*)0))
 {
  VAR_13->Write(VAR_13, FUNC_9("CMD_Hub_Not_Selected"));
  return VAR_3;
 }

 VAR_17 = FUNC_4(VAR_13, VAR_14, VAR_15, VAR_24, sizeof(VAR_24) / sizeof(VAR_24[0]));
 if (VAR_17 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_8(&VAR_20, sizeof(VAR_20));
 FUNC_7(VAR_20.HubName, sizeof(VAR_20.HubName), VAR_18->HubName);


 VAR_19 = FUNC_5(VAR_18->Rpc, &VAR_20);

 if (VAR_19 != VAR_4)
 {

  FUNC_0(VAR_13, VAR_19);
  FUNC_1(VAR_17);
  return VAR_19;
 }
 else
 {
  VAR_20.Mtu = FUNC_2(VAR_17, "MTU");
  VAR_20.NatTcpTimeout = FUNC_2(VAR_17, "TCPTIMEOUT");
  VAR_20.NatUdpTimeout = FUNC_2(VAR_17, "UDPTIMEOUT");
  VAR_20.SaveLog = FUNC_3(VAR_17, "LOG");

  FUNC_7(VAR_20.HubName, sizeof(VAR_20.HubName), VAR_18->HubName);
  VAR_19 = FUNC_6(VAR_18->Rpc, &VAR_20);

  if (VAR_19 != VAR_4)
  {

   FUNC_0(VAR_13, VAR_19);
   FUNC_1(VAR_17);
   return VAR_19;
  }
 }

 FUNC_1(VAR_17);

 return 0;
}
