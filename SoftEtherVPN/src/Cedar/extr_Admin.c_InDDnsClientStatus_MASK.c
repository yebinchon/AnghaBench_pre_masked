
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ErrStr_IPv6; int ErrStr_IPv4; int CurrentIPv6; int CurrentIPv4; int DnsSuffix; int CurrentFqdn; int CurrentHostName; void* Err_IPv6; void* Err_IPv4; } ;
typedef int PACK ;
typedef TYPE_1__ DDNS_CLIENT_STATUS ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(DDNS_CLIENT_STATUS *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(DDNS_CLIENT_STATUS));

 VAR_0->Err_IPv4 = FUNC_0(VAR_1, "Err_IPv4");
 VAR_0->Err_IPv6 = FUNC_0(VAR_1, "Err_IPv6");

 FUNC_1(VAR_1, "CurrentHostName", VAR_0->CurrentHostName, sizeof(VAR_0->CurrentHostName));
 FUNC_1(VAR_1, "CurrentFqdn", VAR_0->CurrentFqdn, sizeof(VAR_0->CurrentFqdn));
 FUNC_1(VAR_1, "DnsSuffix", VAR_0->DnsSuffix, sizeof(VAR_0->DnsSuffix));
 FUNC_1(VAR_1, "CurrentIPv4", VAR_0->CurrentIPv4, sizeof(VAR_0->CurrentIPv4));
 FUNC_1(VAR_1, "CurrentIPv6", VAR_0->CurrentIPv6, sizeof(VAR_0->CurrentIPv6));
 FUNC_2(VAR_1, "ErrStr_IPv4", VAR_0->ErrStr_IPv4, sizeof(VAR_0->ErrStr_IPv4));
 FUNC_2(VAR_1, "ErrStr_IPv6", VAR_0->ErrStr_IPv6, sizeof(VAR_0->ErrStr_IPv6));
}
