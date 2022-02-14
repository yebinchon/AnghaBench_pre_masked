
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int region ;
typedef int machine_name ;
struct TYPE_17__ {char* ProxyHostName; char* ProxyUsername; char* CustomHttpHeader; int ProxyPassword; int ProxyPort; int ProxyType; } ;
struct TYPE_16__ {scalar_t__ UpdatedServerType; int LedSpecial; int IPsecMessageDisplayed; TYPE_1__* DDnsClient; TYPE_12__* Cedar; scalar_t__ Led; int ConfigRevision; } ;
struct TYPE_15__ {TYPE_3__ InternetSetting; int Key; } ;
struct TYPE_14__ {int Bridge; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ INTERNET_SETTING ;
typedef int FOLDER ;
typedef int BUF ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,char*) ;
 int * FUNC_5 (int *,char*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (TYPE_12__*,char*,int) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int *,TYPE_2__*) ;
 int FUNC_14 (int *,TYPE_2__*) ;
 int FUNC_15 (int *,TYPE_2__*) ;
 int FUNC_16 (int *,TYPE_2__*) ;
 int FUNC_17 (int *,TYPE_2__*) ;
 int FUNC_18 (int *,TYPE_2__*) ;
 char* VAR_3 ;

FOLDER *FUNC_19(SERVER *VAR_4)
{
 FOLDER *VAR_5;
 char VAR_6[128];

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_5(((void*)0), VAR_3);

 FUNC_11(VAR_4->Cedar, VAR_6, sizeof(VAR_6));

 FUNC_4(VAR_5, "Region", VAR_6);

 FUNC_3(VAR_5, "ConfigRevision", VAR_4->ConfigRevision);

 FUNC_16(FUNC_5(VAR_5, "ListenerList"), VAR_4);

 FUNC_17(FUNC_5(VAR_5, "LocalBridgeList"), VAR_4);

 FUNC_18(FUNC_5(VAR_5, "ServerConfiguration"), VAR_4);


 if (VAR_4->UpdatedServerType != VAR_1)
 {
  FUNC_12(FUNC_5(VAR_5, "VirtualHUB"), VAR_4);
 }

 if (VAR_4->Cedar->Bridge == 0)
 {
  FUNC_14(FUNC_5(VAR_5, "VirtualLayer3SwitchList"), VAR_4);

  if (FUNC_9(VAR_4, "b_support_license"))
  {
   FUNC_15(FUNC_5(VAR_5, "LicenseManager"), VAR_4);
  }
 }

 if (VAR_4->Led)
 {
  FUNC_0(VAR_5, "Led", 1);
  FUNC_0(VAR_5, "LedSpecial", VAR_4->LedSpecial);
 }

 if (FUNC_9(VAR_4, "b_support_ipsec"))
 {
  FUNC_13(FUNC_5(VAR_5, "IPsec"), VAR_4);
 }

 if (VAR_4->Cedar->Bridge == 0)
 {
  FOLDER *VAR_7 = FUNC_5(VAR_5, "DDnsClient");

  if (VAR_4->DDnsClient == ((void*)0))
  {

   FUNC_0(VAR_7, "Disabled", 1);
  }
  else
  {
   char VAR_8[VAR_0];
   BUF *VAR_9;
   INTERNET_SETTING *VAR_10;

   FUNC_0(VAR_7, "Disabled", 0);
   FUNC_2(VAR_7, "Key", VAR_4->DDnsClient->Key, VAR_2);

   FUNC_8(VAR_8, sizeof(VAR_8));
   FUNC_4(VAR_7, "LocalHostname", VAR_8);

   VAR_10 = &VAR_4->DDnsClient->InternetSetting;

   FUNC_3(VAR_7, "ProxyType", VAR_10->ProxyType);
   FUNC_4(VAR_7, "ProxyHostName", VAR_10->ProxyHostName);
   FUNC_3(VAR_7, "ProxyPort", VAR_10->ProxyPort);
   FUNC_4(VAR_7, "ProxyUsername", VAR_10->ProxyUsername);

   if (FUNC_10(VAR_10->ProxyPassword) == 0)
   {
    VAR_9 = FUNC_6(VAR_10->ProxyPassword);

    FUNC_1(VAR_7, "ProxyPassword", VAR_9);

    FUNC_7(VAR_9);
   }

   FUNC_4(VAR_7, "CustomHttpHeader", VAR_10->CustomHttpHeader);
  }
 }

 FUNC_0(VAR_5, "IPsecMessageDisplayed", VAR_4->IPsecMessageDisplayed);


 return VAR_5;
}
