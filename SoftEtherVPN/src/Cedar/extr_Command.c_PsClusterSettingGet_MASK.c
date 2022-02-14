
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int Rpc; } ;
struct TYPE_6__ {scalar_t__ Weight; scalar_t__ ServerType; scalar_t__ NumPort; int ControllerPort; int ControllerName; int * Ports; int PublicIp; scalar_t__ ControllerOnly; } ;
typedef TYPE_1__ RPC_FARM ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__*,scalar_t__*) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*,int,int ) ;
 int VAR_3 ;
 int * FUNC_8 (int *,char*,scalar_t__*,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (scalar_t__*,char*) ;
 int FUNC_11 (scalar_t__*,int,char*,int ,...) ;
 int FUNC_12 (scalar_t__*,int,scalar_t__*) ;
 int FUNC_13 (scalar_t__*,int,scalar_t__*) ;
 int FUNC_14 (scalar_t__*) ;
 int FUNC_15 (scalar_t__*,scalar_t__) ;
 int FUNC_16 (TYPE_1__*,int) ;
 scalar_t__* FUNC_17 (char*) ;

UINT FUNC_18(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PS *VAR_12 = (PS *)VAR_10;
 UINT VAR_13;
 RPC_FARM VAR_14;
 CT *VAR_15;

 VAR_11 = FUNC_8(VAR_7, VAR_8, VAR_9, ((void*)0), 0);
 if (VAR_11 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_16(&VAR_14, sizeof(VAR_14));

 VAR_13 = FUNC_9(VAR_12->Rpc, &VAR_14);

 if (VAR_13 != VAR_1)
 {
  FUNC_0(VAR_7, VAR_13);
  FUNC_4(VAR_11);
  return VAR_13;
 }

 if (VAR_14.Weight == 0)
 {
  VAR_14.Weight = VAR_2;
 }


 VAR_15 = FUNC_3();

 FUNC_2(VAR_15, FUNC_17("CMD_ClusterSettingGet_Current"),
  FUNC_6(VAR_14.ServerType));

 if (VAR_14.ServerType == VAR_4)
 {
  FUNC_2(VAR_15, FUNC_17("CMD_ClusterSettingGet_ControllerOnly"), VAR_14.ControllerOnly ? FUNC_17("SEC_YES") : FUNC_17("SEC_NO"));
 }

 if (VAR_14.ServerType != VAR_6)
 {
  wchar_t VAR_16[VAR_3];

  FUNC_15(VAR_16, VAR_14.Weight);

  FUNC_2(VAR_15, FUNC_17("CMD_ClusterSettingGet_Weight"), VAR_16);
 }

 if (VAR_14.ServerType == VAR_5)
 {
  wchar_t VAR_17[VAR_3];
  UINT VAR_18;


  if (VAR_14.PublicIp != 0)
  {
   FUNC_7(VAR_17, sizeof(VAR_17), VAR_14.PublicIp);
  }
  else
  {
   FUNC_13(VAR_17, sizeof(VAR_17), FUNC_17("CMD_ClusterSettingGet_None"));
  }

  FUNC_2(VAR_15, FUNC_17("CMD_ClusterSettingGet_PublicIp"), VAR_17);


  VAR_17[0] = 0;
  for (VAR_18 = 0;VAR_18 < VAR_14.NumPort;VAR_18++)
  {
   wchar_t VAR_19[64];

   FUNC_11(VAR_19, sizeof(VAR_19), L"%u, ", VAR_14.Ports[VAR_18]);

   FUNC_12(VAR_17, sizeof(VAR_17), VAR_19);
  }

  if (FUNC_10(VAR_17, L", "))
  {
   VAR_17[FUNC_14(VAR_17) - 2] = 0;
  }

  FUNC_2(VAR_15, FUNC_17("CMD_ClusterSettingGet_PublicPorts"), VAR_17);


  FUNC_11(VAR_17, sizeof(VAR_17), L"%S:%u", VAR_14.ControllerName, VAR_14.ControllerPort);
  FUNC_2(VAR_15, FUNC_17("CMD_ClusterSettingGet_Controller"), VAR_17);
 }

 FUNC_1(VAR_15, VAR_7);

 FUNC_5(&VAR_14);
 FUNC_4(VAR_11);

 return 0;
}
