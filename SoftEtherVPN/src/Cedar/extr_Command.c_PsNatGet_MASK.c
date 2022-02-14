
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
struct TYPE_11__ {scalar_t__ SaveLog; int NatUdpTimeout; int NatTcpTimeout; int Mtu; scalar_t__ UseNat; int HubName; } ;
typedef TYPE_1__ VH_OPTION ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int (* Write ) (TYPE_3__*,int *) ;} ;
struct TYPE_12__ {int Rpc; int * HubName; } ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int * FUNC_5 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (TYPE_3__*,int *) ;

UINT FUNC_12(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 VH_OPTION VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_10("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_9(&VAR_10, sizeof(VAR_10));
 FUNC_7(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_6(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_4(VAR_7);
  return VAR_9;
 }
 else
 {
  wchar_t VAR_11[VAR_2];
  CT *VAR_12 = FUNC_3();


  FUNC_2(VAR_12, FUNC_10("CMD_NatGet_Column_USE"), VAR_10.UseNat ? FUNC_10("SEC_YES") : FUNC_10("SEC_NO"));


  FUNC_8(VAR_11, VAR_10.Mtu);
  FUNC_2(VAR_12, FUNC_10("CMD_NetGet_Column_MTU"), VAR_11);


  FUNC_8(VAR_11, VAR_10.NatTcpTimeout);
  FUNC_2(VAR_12, FUNC_10("CMD_NatGet_Column_TCP"), VAR_11);


  FUNC_8(VAR_11, VAR_10.NatUdpTimeout);
  FUNC_2(VAR_12, FUNC_10("CMD_NatGet_Column_UDP"), VAR_11);


  FUNC_2(VAR_12, FUNC_10("CMD_SecureNatHostGet_Column_LOG"), VAR_10.SaveLog ? FUNC_10("SEC_YES") : FUNC_10("SEC_NO"));

  FUNC_1(VAR_12, VAR_3);
 }

 FUNC_4(VAR_7);

 return 0;
}
