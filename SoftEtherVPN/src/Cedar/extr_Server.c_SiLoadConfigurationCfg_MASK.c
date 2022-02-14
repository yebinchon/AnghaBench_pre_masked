
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int t ;
typedef int machine_name2 ;
typedef int machine_name ;
typedef int key ;
typedef int UCHAR ;
struct TYPE_23__ {int Bridge; } ;
struct TYPE_22__ {char* ProxyHostName; char* ProxyUsername; char* CustomHttpHeader; int ProxyPassword; void* ProxyPort; void* ProxyType; } ;
struct TYPE_21__ {scalar_t__ ServerType; void* IPsecMessageDisplayed; TYPE_4__* Cedar; void* DDnsClient; void* ConfigRevision; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ INTERNET_SETTING ;
typedef int HUB ;
typedef int FOLDER ;
typedef int BUF ;


 void* FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int *,int) ;
 int * FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,char*,int) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (char*,int) ;
 scalar_t__ FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_4__*) ;
 int VAR_0 ;
 void* FUNC_17 (TYPE_4__*,int *,TYPE_2__*) ;
 int FUNC_18 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_19 (TYPE_4__*,char*) ;
 int FUNC_20 (TYPE_1__*,int *) ;
 int FUNC_21 (TYPE_1__*,int *) ;
 int FUNC_22 (TYPE_1__*,int *) ;
 int FUNC_23 (TYPE_1__*,int *) ;
 int FUNC_24 (TYPE_1__*,int *) ;
 int FUNC_25 (TYPE_1__*,int *) ;
 int FUNC_26 (TYPE_1__*,int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (char*,char*) ;
 int FUNC_29 (int ,int,char*) ;
 int FUNC_30 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_31 (int) ;
 int FUNC_32 (TYPE_2__*,int) ;

bool FUNC_33(SERVER *VAR_4, FOLDER *VAR_5)
{
 FOLDER *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 VAR_14 = ((void*)0);


 VAR_6 = FUNC_3(VAR_5, "ServerConfiguration");
 VAR_7 = FUNC_3(VAR_5, "VirtualHUB");
 VAR_8 = FUNC_3(VAR_5, "ListenerList");
 VAR_9 = FUNC_3(VAR_5, "LocalBridgeList");
 VAR_10 = FUNC_3(VAR_5, "VirtualLayer3SwitchList");
 VAR_11 = FUNC_3(VAR_5, "LicenseManager");
 VAR_12 = FUNC_3(VAR_5, "IPsec");
 VAR_13 = FUNC_3(VAR_5, "DDnsClient");

 if (VAR_6 == ((void*)0))
 {
  FUNC_19(VAR_4->Cedar, "LS_BAD_CONFIG");
  return 0;
 }
 FUNC_15();

 VAR_4->ConfigRevision = FUNC_4(VAR_5, "ConfigRevision");

 if (VAR_4->Cedar->Bridge == 0 && VAR_11 != ((void*)0))
 {
  if (FUNC_14(VAR_4, "b_support_license"))
  {
   FUNC_23(VAR_4, VAR_11);
  }
 }

 FUNC_9(VAR_4);

 FUNC_26(VAR_4, VAR_6);

 if (VAR_4->ServerType != VAR_1)
 {
  FUNC_20(VAR_4, VAR_7);
 }

 FUNC_24(VAR_4, VAR_8);

 if (VAR_9 != ((void*)0))
 {
  FUNC_25(VAR_4, VAR_9);
 }

 if (VAR_4->Cedar->Bridge == 0 && VAR_10 != ((void*)0))
 {
  FUNC_22(VAR_4, VAR_10);
 }

 if (VAR_12 != ((void*)0) && FUNC_14(VAR_4, "b_support_ipsec"))
 {
  FUNC_21(VAR_4, VAR_12);
 }

 if (VAR_4->Cedar->Bridge == 0)
 {
  if (VAR_13 == ((void*)0))
  {

   VAR_4->DDnsClient = FUNC_17(VAR_4->Cedar, ((void*)0), ((void*)0));
  }
  else
  {

   UCHAR VAR_15[VAR_2];
   if (FUNC_0(VAR_13, "Disabled"))
   {

   }
   else
   {
    char VAR_16[VAR_0];
    char VAR_17[VAR_0];
    INTERNET_SETTING VAR_18;
    BUF *VAR_19;


    FUNC_32(&VAR_18, sizeof(VAR_18));
    VAR_18.ProxyType = FUNC_4(VAR_13, "ProxyType");
    FUNC_5(VAR_13, "ProxyHostName", VAR_18.ProxyHostName, sizeof(VAR_18.ProxyHostName));
    VAR_18.ProxyPort = FUNC_4(VAR_13, "ProxyPort");
    FUNC_5(VAR_13, "ProxyUsername", VAR_18.ProxyUsername, sizeof(VAR_18.ProxyUsername));
    VAR_19 = FUNC_1(VAR_13, "ProxyPassword");
    if (VAR_19 != ((void*)0))
    {
     char *VAR_20 = FUNC_7(VAR_19);
     FUNC_29(VAR_18.ProxyPassword, sizeof(VAR_18.ProxyPassword), VAR_20);

     FUNC_10(VAR_20);
     FUNC_11(VAR_19);
    }

    FUNC_5(VAR_13, "CustomHttpHeader", VAR_18.CustomHttpHeader, sizeof(VAR_18.CustomHttpHeader));

    FUNC_13(VAR_16, sizeof(VAR_16));

    FUNC_5(VAR_13, "LocalHostname", VAR_17, sizeof(VAR_17));

    if (FUNC_2(VAR_13, "Key", VAR_15, sizeof(VAR_15)) != sizeof(VAR_15) || FUNC_28(VAR_16, VAR_17) != 0)
    {

     VAR_4->DDnsClient = FUNC_17(VAR_4->Cedar, ((void*)0), &VAR_18);
    }
    else
    {

     VAR_4->DDnsClient = FUNC_17(VAR_4->Cedar, VAR_15, &VAR_18);
    }
   }
  }
 }


 {
  HUB *VAR_21 = ((void*)0);


  FUNC_16(VAR_4->Cedar);
  {
   VAR_21 = FUNC_12(VAR_4->Cedar, VAR_3);
  }
  FUNC_30(VAR_4->Cedar);

  if (VAR_21 != ((void*)0))
  {
   FUNC_27(VAR_21);
   FUNC_8(VAR_4->Cedar, VAR_21);
   FUNC_18(VAR_21);
  }
 }

 VAR_4->IPsecMessageDisplayed = FUNC_0(VAR_5, "IPsecMessageDisplayed");


 return 1;
}
