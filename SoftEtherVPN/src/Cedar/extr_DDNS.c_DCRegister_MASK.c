
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int url3 ;
typedef int url2 ;
typedef int t ;
typedef int snat_t ;
typedef int machine_name ;
typedef int machine_key_str ;
typedef int machine_key ;
typedef int key_str ;
typedef int key_hash_str ;
typedef int key_hash ;
typedef int current_region ;
typedef int current_azure_ip ;
typedef int cert_hash ;
typedef int add_header_value ;
typedef int add_header_name ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_18__ {int OsType; } ;
struct TYPE_17__ {TYPE_4__* AzureClient; } ;
struct TYPE_16__ {scalar_t__ Build; char* CurrentDDnsFqdn; TYPE_7__* Server; } ;
struct TYPE_15__ {char* ConnectingAzureIp; int Lock; } ;
struct TYPE_14__ {int Size; int * Buf; } ;
struct TYPE_13__ {int Err_IPv4_GetMyIp; int Err_IPv6_GetMyIp; char* CurrentHostName; char* CurrentFqdn; char* CurrentIPv4; char* CurrentIPv6; char* DnsSuffix; char* CurrentAzureIp; char* CurrentAzureSignature; char* AzureCertHash; int KeyChanged; int * Key; int Lock; TYPE_6__* Cedar; int CurrentAzureTimestamp; int InternetSetting; } ;
struct TYPE_12__ {char* NewHostname; } ;
typedef int PACK ;
typedef char INTERNET_SETTING ;
typedef TYPE_1__ DDNS_REGISTER_PARAM ;
typedef TYPE_2__ DDNS_CLIENT ;
typedef TYPE_3__ BUF ;
typedef TYPE_4__ AZURE_CLIENT ;


 int FUNC_0 (char*,int,int *,int) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_6 (char*,int,char*,...) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char*,int) ;
 TYPE_8__* FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int VAR_22 ;
 int FUNC_17 () ;
 int * FUNC_18 () ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int *,char*,int) ;
 int FUNC_21 (int *,char*,int) ;
 int FUNC_22 (int *,char*,char*) ;
 int FUNC_23 (int *,char*) ;
 int FUNC_24 (int *,char*,char*,int) ;
 int FUNC_25 () ;
 int FUNC_26 (char*,int,char*,char*,char*) ;
 int VAR_23 ;
 int FUNC_27 (char*) ;
 int FUNC_28 (int *,char*,int ) ;
 int FUNC_29 (TYPE_7__*) ;
 int FUNC_30 (TYPE_6__*,char*,int) ;
 int FUNC_31 (char*,int,char*) ;
 int FUNC_32 (char*) ;
 int FUNC_33 (char*) ;
 TYPE_3__* FUNC_34 (int ) ;
 int FUNC_35 (char*) ;
 int FUNC_36 (char*,int ) ;
 int FUNC_37 (int ) ;
 int * FUNC_38 (char*,char*,int ,int ,char*,int *,int *,int *,int *,int,int *,int ,char*,char*,int ) ;
 int FUNC_39 (char*,int) ;
 int FUNC_40 (scalar_t__) ;

UINT FUNC_41(DDNS_CLIENT *VAR_24, bool VAR_25, DDNS_REGISTER_PARAM *VAR_26, char *VAR_27)
{
 char *VAR_28;
 char VAR_29[VAR_22];
 char VAR_30[VAR_22];
 PACK *VAR_31, *VAR_32;
 char VAR_33[VAR_22];
 UCHAR VAR_34[VAR_23];
 char VAR_35[VAR_22];
 char VAR_36[VAR_22];
 BUF *VAR_37 = ((void*)0);
 UINT VAR_38 = VAR_17;
 UCHAR VAR_39[VAR_23];
 char VAR_40[VAR_22];
 bool VAR_41 = 0;
 char VAR_42[VAR_22];
 INTERNET_SETTING VAR_43;
 UINT VAR_44 = 0;
 char VAR_45[64];
 char VAR_46[64];

 if (VAR_24 == ((void*)0))
 {
  return VAR_17;
 }

 FUNC_39(VAR_45, sizeof(VAR_45));
 FUNC_39(VAR_46, sizeof(VAR_46));

 FUNC_39(VAR_42, sizeof(VAR_42));

 FUNC_9(VAR_34);
 FUNC_0(VAR_35, sizeof(VAR_35), VAR_34, sizeof(VAR_34));

 FUNC_11(VAR_36, sizeof(VAR_36));
 FUNC_33(VAR_36);

 if (VAR_25 == 0)
 {
  VAR_28 = VAR_9;

  if (FUNC_15())
  {
   VAR_28 = VAR_8;
  }
 }
 else
 {
  VAR_28 = VAR_11;

  if (FUNC_15())
  {
   VAR_28 = VAR_10;
  }

  if (VAR_27)
  {
   VAR_28 = VAR_27;
  }
 }

 FUNC_39(&VAR_43, sizeof(VAR_43));
 if (VAR_25 == 0)
 {

  FUNC_1(&VAR_43, &VAR_24->InternetSetting, sizeof(INTERNET_SETTING));
 }

 if (VAR_25 == 0)
 {

  if (VAR_24->Cedar->Server != ((void*)0))
  {
   AZURE_CLIENT *VAR_47 = VAR_24->Cedar->Server->AzureClient;

   if (VAR_47 != ((void*)0))
   {
    VAR_41 = FUNC_29(VAR_24->Cedar->Server);

    if (VAR_41)
    {
     FUNC_16(VAR_47->Lock);
     {
      FUNC_31(VAR_42, sizeof(VAR_42), VAR_47->ConnectingAzureIp);
     }
     FUNC_37(VAR_47->Lock);
    }
   }
  }
 }

 VAR_31 = FUNC_18();
 FUNC_0(VAR_33, sizeof(VAR_33), VAR_24->Key, sizeof(VAR_24->Key));
 FUNC_35(VAR_33);
 FUNC_22(VAR_31, "key", VAR_33);


 VAR_44 = VAR_24->Cedar->Build;


 FUNC_21(VAR_31, "build", VAR_44);
 FUNC_21(VAR_31, "osinfo", FUNC_12()->OsType);
 FUNC_21(VAR_31, "is_64bit", FUNC_13());



 FUNC_20(VAR_31, "is_softether", 1);
 FUNC_20(VAR_31, "is_packetix", 0);
 FUNC_22(VAR_31, "machine_key", VAR_35);
 FUNC_22(VAR_31, "machine_name", VAR_36);
 FUNC_21(VAR_31, "lasterror_ipv4", VAR_24->Err_IPv4_GetMyIp);
 FUNC_21(VAR_31, "lasterror_ipv6", VAR_24->Err_IPv6_GetMyIp);
 FUNC_20(VAR_31, "use_azure", VAR_41);
 FUNC_22(VAR_31, "product_str", "SoftEther OSS");
 FUNC_21(VAR_31, "ddns_protocol_version", VAR_12);
 FUNC_21(VAR_31, "ddns_oss", 1);


 if (VAR_41)
 {
  FUNC_3("current_azure_ip = %s\n", VAR_42);
  FUNC_22(VAR_31, "current_azure_ip", VAR_42);
 }

 FUNC_28(VAR_39, VAR_33, FUNC_32(VAR_33));
 FUNC_0(VAR_40, sizeof(VAR_40), VAR_39, sizeof(VAR_39));
 FUNC_33(VAR_40);

 if (VAR_26 != ((void*)0))
 {
  if (FUNC_14(VAR_26->NewHostname) == 0)
  {
   FUNC_22(VAR_31, "new_hostname", VAR_26->NewHostname);
  }
 }



 FUNC_6(VAR_29, sizeof(VAR_29), "%s?v=%I64u", VAR_28, FUNC_25());
 FUNC_6(VAR_30, sizeof(VAR_30), VAR_29, VAR_40[2], VAR_40[3]);

 FUNC_26(VAR_30, sizeof(VAR_30), VAR_30, "https://", "http://");

 FUNC_26(VAR_30, sizeof(VAR_30), VAR_30, ".servers", ".open.servers");

 VAR_37 = FUNC_34(VAR_0);

 FUNC_3("WpcCall: %s\n", VAR_30);
 VAR_32 = FUNC_38(VAR_30, &VAR_43, VAR_2, VAR_1, "register", VAR_31,
  ((void*)0), ((void*)0), ((VAR_37 != ((void*)0) && ((VAR_37->Size % VAR_23) == 0)) ? VAR_37->Buf : ((void*)0)),
  (VAR_37 != ((void*)0) ? VAR_37->Size / VAR_23 : 0),
  ((void*)0), VAR_6,
  VAR_45, VAR_46,
  VAR_7);
 FUNC_3("WpcCall Ret: %u\n", VAR_32);

 FUNC_7(VAR_37);

 FUNC_8(VAR_31);

 VAR_38 = FUNC_10(VAR_32);

 FUNC_5(VAR_32);


 FUNC_16(VAR_24->Lock);
 {
  if (VAR_38 == VAR_18)
  {
   char VAR_48[VAR_22];
   char VAR_49[128];


   FUNC_24(VAR_32, "current_hostname", VAR_24->CurrentHostName, sizeof(VAR_24->CurrentHostName));
   FUNC_24(VAR_32, "current_fqdn", VAR_24->CurrentFqdn, sizeof(VAR_24->CurrentFqdn));
   FUNC_24(VAR_32, "current_ipv4", VAR_24->CurrentIPv4, sizeof(VAR_24->CurrentIPv4));
   FUNC_24(VAR_32, "current_ipv6", VAR_24->CurrentIPv6, sizeof(VAR_24->CurrentIPv6));
   FUNC_24(VAR_32, "dns_suffix", VAR_24->DnsSuffix, sizeof(VAR_24->DnsSuffix));
   FUNC_24(VAR_32, "current_region", VAR_49, sizeof(VAR_49));


   FUNC_39(VAR_48, sizeof(VAR_48));
   FUNC_24(VAR_32, "snat_t", VAR_48, sizeof(VAR_48));
   FUNC_19(VAR_48);

   if (VAR_25 == 0)
   {
    char VAR_50[VAR_22];

    FUNC_24(VAR_32, "current_azure_ip", VAR_24->CurrentAzureIp, sizeof(VAR_24->CurrentAzureIp));
    VAR_24->CurrentAzureTimestamp = FUNC_23(VAR_32, "current_azure_timestamp");
    FUNC_24(VAR_32, "current_azure_signature", VAR_24->CurrentAzureSignature, sizeof(VAR_24->CurrentAzureSignature));

    FUNC_39(VAR_50, sizeof(VAR_50));
    FUNC_24(VAR_32, "azure_cert_hash", VAR_50, sizeof(VAR_50));

    if (FUNC_14(VAR_50) == 0)
    {
     FUNC_31(VAR_24->AzureCertHash, sizeof(VAR_24->AzureCertHash), VAR_50);
    }
   }

   FUNC_31(VAR_24->Cedar->CurrentDDnsFqdn, sizeof(VAR_24->Cedar->CurrentDDnsFqdn), VAR_24->CurrentFqdn);

   FUNC_3("current_hostname=%s, current_fqdn=%s, current_ipv4=%s, current_ipv6=%s, current_azure_ip=%s, CurrentAzureTimestamp=%I64u, CurrentAzureSignature=%s, CertHash=%s\n",
    VAR_24->CurrentHostName, VAR_24->CurrentFqdn,
    VAR_24->CurrentIPv4, VAR_24->CurrentIPv6,
    VAR_24->CurrentAzureIp, VAR_24->CurrentAzureTimestamp, VAR_24->CurrentAzureSignature, VAR_24->AzureCertHash);

   if (FUNC_14(VAR_49) == 0)
   {

    FUNC_30(VAR_24->Cedar, VAR_49, 0);
   }
  }
 }
 FUNC_37(VAR_24->Lock);

 if (FUNC_14(VAR_24->CurrentFqdn) == 0)
 {
  FUNC_27(VAR_24->CurrentFqdn);
 }


 FUNC_8(VAR_32);

 FUNC_36(L"DCRegister Error: %s\n", FUNC_40(VAR_38));

 if (VAR_38 == VAR_16)
 {

  FUNC_2(VAR_24->Key);
  VAR_24->KeyChanged = 1;
 }

 if (VAR_38 == VAR_15)
 {
  VAR_38 = VAR_14;
 }

 if (FUNC_15() == 0)
 {
  if (VAR_38 == VAR_13)
  {
   if (VAR_25 && VAR_27 == ((void*)0))
   {
    UINT VAR_51 = FUNC_4();

    if (VAR_51 & VAR_19 && VAR_38 != VAR_18)
    {
     VAR_38 = FUNC_41(VAR_24, VAR_25, VAR_26, VAR_3);
    }

    if (VAR_51 & VAR_20 && VAR_38 != VAR_18)
    {
     VAR_38 = FUNC_41(VAR_24, VAR_25, VAR_26, VAR_4);
    }

    if (VAR_51 & VAR_21 && VAR_38 != VAR_18)
    {
     VAR_38 = FUNC_41(VAR_24, VAR_25, VAR_26, VAR_5);
    }
   }
  }
 }

 return VAR_38;
}
