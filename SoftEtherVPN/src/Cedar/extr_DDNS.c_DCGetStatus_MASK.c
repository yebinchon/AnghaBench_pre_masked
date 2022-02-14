
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Lock; int InternetSetting; int AzureCertHash; int CurrentAzureSignature; int CurrentAzureTimestamp; int CurrentAzureIp; int CurrentIPv6; int CurrentIPv4; int DnsSuffix; int CurrentFqdn; int CurrentHostName; int Err_IPv6; int Err_IPv4; } ;
struct TYPE_6__ {int Err_IPv6; int ErrStr_IPv6; int Err_IPv4; int ErrStr_IPv4; int InternetSetting; int AzureCertHash; int CurrentAzureSignature; int CurrentAzureTimestamp; int CurrentAzureIp; int CurrentIPv6; int CurrentIPv4; int DnsSuffix; int CurrentFqdn; int CurrentHostName; } ;
typedef int INTERNET_SETTING ;
typedef TYPE_1__ DDNS_CLIENT_STATUS ;
typedef TYPE_2__ DDNS_CLIENT ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;

void FUNC_7(DDNS_CLIENT *VAR_0, DDNS_CLIENT_STATUS *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_1, sizeof(DDNS_CLIENT_STATUS));

 FUNC_1(VAR_0->Lock);
 {
  VAR_1->Err_IPv4 = VAR_0->Err_IPv4;
  VAR_1->Err_IPv6 = VAR_0->Err_IPv6;

  FUNC_2(VAR_1->CurrentHostName, sizeof(VAR_1->CurrentHostName), VAR_0->CurrentHostName);
  FUNC_2(VAR_1->CurrentFqdn, sizeof(VAR_1->CurrentFqdn), VAR_0->CurrentFqdn);
  FUNC_2(VAR_1->DnsSuffix, sizeof(VAR_1->DnsSuffix), VAR_0->DnsSuffix);
  FUNC_2(VAR_1->CurrentIPv4, sizeof(VAR_1->CurrentIPv4), VAR_0->CurrentIPv4);
  FUNC_2(VAR_1->CurrentIPv6, sizeof(VAR_1->CurrentIPv6), VAR_0->CurrentIPv6);

  FUNC_2(VAR_1->CurrentAzureIp, sizeof(VAR_1->CurrentAzureIp), VAR_0->CurrentAzureIp);
  VAR_1->CurrentAzureTimestamp = VAR_0->CurrentAzureTimestamp;
  FUNC_2(VAR_1->CurrentAzureSignature, sizeof(VAR_1->CurrentAzureSignature), VAR_0->CurrentAzureSignature);
  FUNC_2(VAR_1->AzureCertHash, sizeof(VAR_1->AzureCertHash), VAR_0->AzureCertHash);

  FUNC_0(&VAR_1->InternetSetting, &VAR_0->InternetSetting, sizeof(INTERNET_SETTING));
 }
 FUNC_4(VAR_0->Lock);

 FUNC_3(VAR_1->ErrStr_IPv4, sizeof(VAR_1->ErrStr_IPv4), FUNC_6(VAR_1->Err_IPv4));
 FUNC_3(VAR_1->ErrStr_IPv6, sizeof(VAR_1->ErrStr_IPv6), FUNC_6(VAR_1->Err_IPv6));
}
