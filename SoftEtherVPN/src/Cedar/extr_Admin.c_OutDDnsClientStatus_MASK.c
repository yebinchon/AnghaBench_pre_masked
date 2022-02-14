
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ErrStr_IPv6; int ErrStr_IPv4; int CurrentIPv6; int CurrentIPv4; int DnsSuffix; int CurrentFqdn; int CurrentHostName; int Err_IPv6; int Err_IPv4; } ;
typedef int PACK ;
typedef TYPE_1__ DDNS_CLIENT_STATUS ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, DDNS_CLIENT_STATUS *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "Err_IPv4", VAR_1->Err_IPv4);
 FUNC_0(VAR_0, "Err_IPv6", VAR_1->Err_IPv6);
 FUNC_1(VAR_0, "CurrentHostName", VAR_1->CurrentHostName);
 FUNC_1(VAR_0, "CurrentFqdn", VAR_1->CurrentFqdn);
 FUNC_1(VAR_0, "DnsSuffix", VAR_1->DnsSuffix);
 FUNC_1(VAR_0, "CurrentIPv4", VAR_1->CurrentIPv4);
 FUNC_1(VAR_0, "CurrentIPv6", VAR_1->CurrentIPv6);
 FUNC_2(VAR_0, "ErrStr_IPv4", VAR_1->ErrStr_IPv4);
 FUNC_2(VAR_0, "ErrStr_IPv6", VAR_1->ErrStr_IPv6);
}
