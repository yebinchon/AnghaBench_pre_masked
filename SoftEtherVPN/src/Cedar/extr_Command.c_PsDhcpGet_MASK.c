
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
struct TYPE_11__ {int DhcpPushRoutes; scalar_t__ ApplyDhcpPushRoutes; scalar_t__ SaveLog; int DhcpDomainName; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; int DhcpExpireTimeSpan; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; scalar_t__ UseDhcp; int HubName; } ;
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
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int *) ;
 int VAR_2 ;
 int * FUNC_7 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int * FUNC_14 (char*) ;
 int FUNC_15 (TYPE_3__*,int *) ;

UINT FUNC_16(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 VH_OPTION VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_14("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_13(&VAR_10, sizeof(VAR_10));
 FUNC_9(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_8(VAR_8->Rpc, &VAR_10);

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


  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_USE"), VAR_10.UseDhcp ? FUNC_14("SEC_YES") : FUNC_14("SEC_NO"));


  FUNC_6(VAR_11, sizeof(VAR_11), &VAR_10.DhcpLeaseIPStart);
  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_IP1"), VAR_11);


  FUNC_6(VAR_11, sizeof(VAR_11), &VAR_10.DhcpLeaseIPEnd);
  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_IP2"), VAR_11);


  FUNC_6(VAR_11, sizeof(VAR_11), &VAR_10.DhcpSubnetMask);
  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_MASK"), VAR_11);


  FUNC_12(VAR_11, VAR_10.DhcpExpireTimeSpan);
  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_LEASE"), VAR_11);


  FUNC_11(VAR_11, sizeof(VAR_11), FUNC_14("SEC_NONE"));
  if (FUNC_5(&VAR_10.DhcpGatewayAddress) != 0)
  {
   FUNC_6(VAR_11, sizeof(VAR_11), &VAR_10.DhcpGatewayAddress);
  }
  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_GW"), VAR_11);


  FUNC_11(VAR_11, sizeof(VAR_11), FUNC_14("SEC_NONE"));
  if (FUNC_5(&VAR_10.DhcpDnsServerAddress) != 0)
  {
   FUNC_6(VAR_11, sizeof(VAR_11), &VAR_10.DhcpDnsServerAddress);
  }
  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_DNS"), VAR_11);


  FUNC_11(VAR_11, sizeof(VAR_11), FUNC_14("SEC_NONE"));
  if (FUNC_5(&VAR_10.DhcpDnsServerAddress2) != 0)
  {
   FUNC_6(VAR_11, sizeof(VAR_11), &VAR_10.DhcpDnsServerAddress2);
  }
  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_DNS2"), VAR_11);


  FUNC_10(VAR_11, sizeof(VAR_11), VAR_10.DhcpDomainName);
  FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_DOMAIN"), VAR_11);


  FUNC_2(VAR_12, FUNC_14("CMD_SecureNatHostGet_Column_LOG"), VAR_10.SaveLog ? FUNC_14("SEC_YES") : FUNC_14("SEC_NO"));


  if (VAR_10.ApplyDhcpPushRoutes)
  {
   FUNC_10(VAR_11, sizeof(VAR_11), VAR_10.DhcpPushRoutes);
   FUNC_2(VAR_12, FUNC_14("CMD_DhcpGet_Column_PUSHROUTE"), VAR_11);
  }

  FUNC_1(VAR_12, VAR_3);
 }

 FUNC_4(VAR_7);

 return 0;
}
