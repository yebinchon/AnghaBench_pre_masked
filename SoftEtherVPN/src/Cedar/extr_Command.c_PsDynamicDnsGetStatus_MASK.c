
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Err_IPv4; scalar_t__ Err_IPv6; int CurrentIPv6; int CurrentIPv4; int DnsSuffix; int CurrentHostName; int CurrentFqdn; } ;
struct TYPE_5__ {int Rpc; } ;
typedef TYPE_1__ PS ;
typedef int LIST ;
typedef TYPE_2__ DDNS_CLIENT_STATUS ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int * FUNC_6 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*) ;

UINT FUNC_13(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 DDNS_CLIENT_STATUS VAR_10;

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_10(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_7(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_4(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_11 = FUNC_3();
  wchar_t VAR_12[VAR_2];


  if (FUNC_5(VAR_10.CurrentFqdn) == 0)
  {
   FUNC_8(VAR_12, sizeof(VAR_12), VAR_10.CurrentFqdn);
  }
  else
  {
   FUNC_9(VAR_12, sizeof(VAR_12), FUNC_12("SM_DDNS_FQDN_EMPTY"));
  }
  FUNC_2(VAR_11, FUNC_12("CMD_DynamicDnsGetStatus_PRINT_FQDN"), VAR_12);


  if (FUNC_5(VAR_10.CurrentHostName) == 0)
  {
   FUNC_8(VAR_12, sizeof(VAR_12), VAR_10.CurrentHostName);
  }
  else
  {
   FUNC_9(VAR_12, sizeof(VAR_12), FUNC_12("SM_DDNS_FQDN_EMPTY"));
  }
  FUNC_2(VAR_11, FUNC_12("CMD_DynamicDnsGetStatus_PRINT_HOSTNAME"), VAR_12);


  if (FUNC_5(VAR_10.DnsSuffix) == 0)
  {
   FUNC_8(VAR_12, sizeof(VAR_12), VAR_10.DnsSuffix);
  }
  else
  {
   FUNC_9(VAR_12, sizeof(VAR_12), FUNC_12("SM_DDNS_FQDN_EMPTY"));
  }
  FUNC_2(VAR_11, FUNC_12("CMD_DynamicDnsGetStatus_PRINT_SUFFIX"), VAR_12);


  if (VAR_10.Err_IPv4 == VAR_1)
  {
   FUNC_8(VAR_12, sizeof(VAR_12), VAR_10.CurrentIPv4);
  }
  else
  {
   FUNC_9(VAR_12, sizeof(VAR_12), FUNC_11(VAR_10.Err_IPv4));
  }
  FUNC_2(VAR_11, FUNC_12("CMD_DynamicDnsGetStatus_PRINT_IPv4"), VAR_12);


  if (VAR_10.Err_IPv6 == VAR_1)
  {
   FUNC_8(VAR_12, sizeof(VAR_12), VAR_10.CurrentIPv6);
  }
  else
  {
   FUNC_9(VAR_12, sizeof(VAR_12), FUNC_11(VAR_10.Err_IPv6));
  }
  FUNC_2(VAR_11, FUNC_12("CMD_DynamicDnsGetStatus_PRINT_IPv6"), VAR_12);

  FUNC_1(VAR_11, VAR_3);
 }

 FUNC_4(VAR_7);

 return 0;
}
