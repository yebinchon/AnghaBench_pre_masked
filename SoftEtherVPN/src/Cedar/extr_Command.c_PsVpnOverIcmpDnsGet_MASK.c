
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int Rpc; } ;
struct TYPE_5__ {scalar_t__ VpnOverDnsListener; scalar_t__ VpnOverIcmpListener; } ;
typedef TYPE_1__ RPC_SPECIAL_LISTENER ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*) ;

UINT FUNC_9(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 RPC_SPECIAL_LISTENER VAR_9;

 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_7(&VAR_9, sizeof(VAR_9));


 VAR_8 = FUNC_6(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_4(VAR_6);
  return VAR_8;
 }
 else
 {
  CT *VAR_10 = FUNC_3();

  FUNC_2(VAR_10, FUNC_8("CMD_VpnOverIcmpDnsGet_PRINT_ICMP"), FUNC_8(VAR_9.VpnOverIcmpListener ? "SEC_YES" : "SEC_NO"));
  FUNC_2(VAR_10, FUNC_8("CMD_VpnOverIcmpDnsGet_PRINT_DNS"), FUNC_8(VAR_9.VpnOverDnsListener ? "SEC_YES" : "SEC_NO"));

  FUNC_1(VAR_10, VAR_2);
 }

 FUNC_4(VAR_6);

 return 0;
}
