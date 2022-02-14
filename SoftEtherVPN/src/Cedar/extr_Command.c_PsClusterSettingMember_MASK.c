
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_9__ {int Rpc; } ;
struct TYPE_8__ {int NumPort; scalar_t__ Weight; scalar_t__* Ports; int ServerType; int PublicIp; int MemberPassword; scalar_t__ ControllerPort; int ControllerName; } ;
typedef TYPE_1__ RPC_FARM ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_9 (char*,char**,scalar_t__*,int ) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_10 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ,int,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int * FUNC_16 (char*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 scalar_t__* FUNC_18 (int) ;
 int * FUNC_19 (char*) ;

UINT FUNC_20(CONSOLE *VAR_11, char *VAR_12, wchar_t *VAR_13, void *VAR_14)
{
 LIST *VAR_15;
 PS *VAR_16 = (PS *)VAR_14;
 UINT VAR_17 = 0;
 RPC_FARM VAR_18;
 char *VAR_19;
 char *VAR_20;
 UINT VAR_21;
 UINT VAR_22;

 PARAM VAR_23[] =
 {

  {"[server:port]", VAR_3, FUNC_19("CMD_ClusterSettingMember_Prompt_HOST_1"), VAR_0, ((void*)0)},
  {"IP", VAR_8, ((void*)0), VAR_1, ((void*)0)},
  {"PORTS", VAR_9, ((void*)0), VAR_2, ((void*)0)},
  {"PASSWORD", VAR_4, ((void*)0), ((void*)0), ((void*)0)},
  {"WEIGHT", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_15 = FUNC_8(VAR_11, VAR_12, VAR_13, VAR_23, sizeof(VAR_23) / sizeof(VAR_23[0]));
 if (VAR_15 == ((void*)0))
 {
  return VAR_5;
 }

 VAR_22 = FUNC_4(VAR_15, "WEIGHT");

 if (VAR_22 == 0)
 {
  VAR_22 = VAR_7;
 }

 FUNC_17(&VAR_18, sizeof(VAR_18));
 VAR_19 = FUNC_5(VAR_15, "[server:port]");
 if (FUNC_9(VAR_19, &VAR_20, &VAR_21, 0))
 {
  char *VAR_24;
  char *VAR_25;
  LIST *VAR_26;
  UINT VAR_27;

  FUNC_13(VAR_18.ControllerName, sizeof(VAR_18.ControllerName), VAR_20);
  VAR_18.ControllerPort = VAR_21;
  FUNC_1(VAR_20);

  VAR_24 = FUNC_5(VAR_15, "PASSWORD");

  FUNC_12(VAR_18.MemberPassword, VAR_24, FUNC_14(VAR_24));
  VAR_18.PublicIp = FUNC_15(FUNC_5(VAR_15, "IP"));
  VAR_18.ServerType = VAR_10;

  VAR_25 = FUNC_5(VAR_15, "PORTS");

  VAR_26 = FUNC_16(VAR_25);

  VAR_18.NumPort = FUNC_7(VAR_26);
  VAR_18.Ports = FUNC_18(sizeof(UINT) * VAR_18.NumPort);

  for (VAR_27 = 0;VAR_27 < VAR_18.NumPort;VAR_27++)
  {
   VAR_18.Ports[VAR_27] = (UINT)FUNC_6(VAR_26, VAR_27);
  }

  VAR_18.Weight = VAR_22;

  FUNC_10(VAR_26);


  VAR_17 = FUNC_11(VAR_16->Rpc, &VAR_18);

  if (VAR_17 != VAR_6)
  {

   FUNC_0(VAR_11, VAR_17);
   FUNC_2(VAR_15);
   return VAR_17;
  }

  FUNC_3(&VAR_18);
 }

 FUNC_2(VAR_15);

 return 0;
}
