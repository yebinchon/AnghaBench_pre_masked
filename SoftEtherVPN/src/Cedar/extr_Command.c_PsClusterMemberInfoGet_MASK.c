
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef int t ;
typedef int str ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {char* member_0; int * member_4; int * member_3; int * member_2; int member_1; } ;
struct TYPE_11__ {int Rpc; } ;
struct TYPE_10__ {char* Hostname; scalar_t__ Point; scalar_t__ Weight; scalar_t__ NumPort; scalar_t__* Ports; scalar_t__ NumFarmHub; scalar_t__ NumSessions; scalar_t__ NumTcpConnections; TYPE_1__* FarmHubs; int Ip; int ConnectedTime; scalar_t__ Controller; int Id; } ;
struct TYPE_9__ {scalar_t__ HubName; scalar_t__ DynamicHub; } ;
typedef TYPE_2__ RPC_FARM_INFO ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int,int ,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,int,int ) ;
 int VAR_3 ;
 int * FUNC_9 (int *,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int *,int,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int,int *,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int * FUNC_17 (char*) ;

UINT FUNC_18(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_FARM_INFO VAR_11;
 CT *VAR_12;

 PARAM VAR_13[] =
 {

  {"[id]", &VAR_0, FUNC_17("CMD_ClusterMemberInfoGet_PROMPT_ID"), ((void*)0), ((void*)0)},
 };

 VAR_8 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_16(&VAR_11, sizeof(VAR_11));
 VAR_11.Id = FUNC_14(FUNC_7(VAR_8, "[id]"));


 VAR_10 = FUNC_10(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_2)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_4(VAR_8);
  return VAR_10;
 }

 VAR_12 = FUNC_3();

 {
  wchar_t VAR_14[VAR_3];
  char VAR_15[VAR_3];
  UINT VAR_16;

  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_TYPE"),
   VAR_11.Controller ? FUNC_17("SM_FARM_CONTROLLER") : FUNC_17("SM_FARM_MEMBER"));

  FUNC_6(VAR_14, sizeof(VAR_14), FUNC_12(VAR_11.ConnectedTime), ((void*)0));
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_CONNECT_TIME"), VAR_14);

  FUNC_8(VAR_15, sizeof(VAR_15), VAR_11.Ip);
  FUNC_11(VAR_14, sizeof(VAR_14), VAR_15);
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_IP"), VAR_14);

  FUNC_11(VAR_14, sizeof(VAR_14), VAR_11.Hostname);
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_HOSTNAME"), VAR_14);

  FUNC_15(VAR_14, VAR_11.Point);
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_POINT"), VAR_14);

  FUNC_15(VAR_14, VAR_11.Weight);
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_WEIGHT"), VAR_14);

  FUNC_15(VAR_14, VAR_11.NumPort);
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_NUM_PORT"), VAR_14);

  for (VAR_16 = 0;VAR_16 < VAR_11.NumPort;VAR_16++)
  {
   wchar_t VAR_17[VAR_3];
   FUNC_13(VAR_14, sizeof(VAR_14), FUNC_17("SM_FMINFO_PORT"), VAR_16 + 1);
   FUNC_15(VAR_17, VAR_11.Ports[VAR_16]);
   FUNC_2(VAR_12, VAR_14, VAR_17);
  }

  FUNC_15(VAR_14, VAR_11.NumFarmHub);
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_NUM_HUB"), VAR_14);

  for (VAR_16 = 0;VAR_16 < VAR_11.NumFarmHub;VAR_16++)
  {
   wchar_t VAR_18[VAR_3];
   FUNC_13(VAR_14, sizeof(VAR_14), FUNC_17("SM_FMINFO_HUB"), VAR_16 + 1);
   FUNC_13(VAR_18, sizeof(VAR_18),
    VAR_11.FarmHubs[VAR_16].DynamicHub ? FUNC_17("SM_FMINFO_HUB_TAG_2") : FUNC_17("SM_FMINFO_HUB_TAG_1"),
    VAR_11.FarmHubs[VAR_16].HubName);
   FUNC_2(VAR_12, VAR_14, VAR_18);
  }

  FUNC_15(VAR_14, VAR_11.NumSessions);
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_NUM_SESSION"), VAR_14);

  FUNC_15(VAR_14, VAR_11.NumTcpConnections);
  FUNC_2(VAR_12, FUNC_17("SM_FMINFO_NUN_CONNECTION"), VAR_14);
 }

 FUNC_1(VAR_12, VAR_4);

 FUNC_5(&VAR_11);

 FUNC_4(VAR_8);

 return 0;
}
