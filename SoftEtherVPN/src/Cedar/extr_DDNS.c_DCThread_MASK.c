
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int last_t ;
typedef int ip ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {TYPE_1__* AzureClient; } ;
struct TYPE_10__ {int Halt; scalar_t__ NextRegisterTick_IPv4; scalar_t__ NextRegisterTick_IPv6; scalar_t__ NextGetMyIpTick_IPv4; scalar_t__ NextGetMyIpTick_IPv6; scalar_t__ Err_IPv4_GetMyIp; char* LastMyIPv4; scalar_t__ Err_IPv6_GetMyIp; char* LastMyIPv6; scalar_t__ Err_IPv4; scalar_t__ Err_IPv6; int KeyChanged; int Event; TYPE_2__* Cedar; int InternetSetting; } ;
struct TYPE_9__ {TYPE_4__* Server; } ;
struct TYPE_8__ {scalar_t__ DDnsTriggerInt; int IpStatusRevision; } ;
typedef int THREAD ;
typedef int INTERRUPT_MANAGER ;
typedef char INTERNET_SETTING ;
typedef int DDNS_CLIENT_STATUS ;
typedef TYPE_3__ DDNS_CLIENT ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*,int *,int) ;
 void* FUNC_3 (TYPE_3__*,int,char*,int,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 void* FUNC_5 (TYPE_3__*,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (void*) ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 int * FUNC_15 () ;
 void* FUNC_16 () ;
 int FUNC_17 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,int,char*) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (int ,scalar_t__) ;
 int FUNC_22 (char*,int) ;

void FUNC_23(THREAD *VAR_10, void *VAR_11)
{
 DDNS_CLIENT *VAR_12;
 INTERRUPT_MANAGER *VAR_13;
 UINT VAR_14 = 0;
 void *VAR_15 = ((void*)0);
 bool VAR_16 = 0;
 UINT VAR_17 = 0;
 UINT VAR_18 = 0;
 UINT VAR_19;
 INTERNET_SETTING VAR_20;

 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return;
 }

 VAR_12 = (DDNS_CLIENT *)VAR_11;

 VAR_13 = FUNC_15();

 VAR_15 = FUNC_16();
 FUNC_13(VAR_15);

 FUNC_22(&VAR_20, sizeof(VAR_20));

 VAR_19 = 0;

 while (VAR_12->Halt == 0)
 {
  UINT VAR_21 = FUNC_10();
  UINT VAR_22;
  UINT64 VAR_23 = FUNC_20();
  bool VAR_24 = 0;
  bool VAR_25 = 0;
  bool VAR_26 = 0;
  bool VAR_27 = 0;


  if (VAR_12->Cedar->Server != ((void*)0) && VAR_12->Cedar->Server->AzureClient != ((void*)0))
  {
   if (VAR_12->Cedar->Server->AzureClient->DDnsTriggerInt != VAR_17)
   {
    VAR_25 = 1;
    VAR_17 = VAR_12->Cedar->Server->AzureClient->DDnsTriggerInt;
    VAR_16 = 0;
    FUNC_6("DDNS Thread Triggered by AzureClient.\n");
   }
  }

  if (FUNC_1(&VAR_20, &VAR_12->InternetSetting, sizeof(INTERNET_SETTING)) != 0)
  {
   FUNC_2(&VAR_20, &VAR_12->InternetSetting, sizeof(INTERNET_SETTING));
   VAR_26 = 1;
   VAR_16 = 0;
  }

  if (VAR_21 != VAR_14)
  {
   VAR_16 = 0;
   FUNC_6("DDNS Thread Triggered by IP Hash Changed.\n");
  }

  if ((VAR_21 != VAR_14) || (FUNC_13(VAR_15)) || VAR_25 || VAR_26 || VAR_27)
  {
   if (VAR_16 == 0)
   {


    VAR_12->NextRegisterTick_IPv4 = 0;
    VAR_12->NextRegisterTick_IPv6 = 0;
    VAR_12->NextGetMyIpTick_IPv4 = 0;
    VAR_12->NextGetMyIpTick_IPv6 = 0;

    VAR_14 = VAR_21;

    VAR_16 = 1;

    VAR_24 = 1;

    FUNC_6("DDNS Internet Condition Changed.\n");
   }
  }
  else
  {
   VAR_16 = 0;
  }

  if ((VAR_19++) >= 1)
  {

   if (VAR_12->NextGetMyIpTick_IPv4 == 0 || VAR_23 >= VAR_12->NextGetMyIpTick_IPv4)
   {
    UINT VAR_28;
    char VAR_29[VAR_9];

    FUNC_22(VAR_29, sizeof(VAR_29));
    VAR_12->Err_IPv4_GetMyIp = FUNC_3(VAR_12, 0, VAR_29, sizeof(VAR_29), ((void*)0));

    if (VAR_12->Err_IPv4_GetMyIp == VAR_8)
    {
     if (FUNC_18(VAR_12->LastMyIPv4, VAR_29) != 0)
     {
      VAR_24 = 1;
      FUNC_19(VAR_12->LastMyIPv4, sizeof(VAR_12->LastMyIPv4), VAR_29);
     }

     VAR_28 = FUNC_9(VAR_3, VAR_2);
    }
    else
    {
     if (FUNC_12(VAR_12->LastMyIPv4) == 0)
     {
      VAR_24 = 1;
     }

     FUNC_22(VAR_12->LastMyIPv4, sizeof(VAR_12->LastMyIPv4));
     VAR_28 = FUNC_9(VAR_1, VAR_0);
    }

    VAR_12->NextGetMyIpTick_IPv4 = FUNC_20() + (UINT64)VAR_28;

    FUNC_0(VAR_13, VAR_12->NextGetMyIpTick_IPv4);
   }


   if (VAR_12->NextGetMyIpTick_IPv6 == 0 || VAR_23 >= VAR_12->NextGetMyIpTick_IPv6)
   {
    UINT VAR_30;
    char VAR_31[VAR_9];

    FUNC_22(VAR_31, sizeof(VAR_31));
    VAR_12->Err_IPv6_GetMyIp = FUNC_3(VAR_12, 1, VAR_31, sizeof(VAR_31), ((void*)0));

    if (VAR_12->Err_IPv6_GetMyIp == VAR_8)
    {
     if (FUNC_18(VAR_12->LastMyIPv6, VAR_31) != 0)
     {
      VAR_24 = 1;
      FUNC_19(VAR_12->LastMyIPv6, sizeof(VAR_12->LastMyIPv6), VAR_31);
     }

     VAR_30 = FUNC_9(VAR_3, VAR_2);
    }
    else
    {
     if (FUNC_12(VAR_12->LastMyIPv6) == 0)
     {
      VAR_24 = 1;
     }

     FUNC_22(VAR_12->LastMyIPv6, sizeof(VAR_12->LastMyIPv6));
     VAR_30 = FUNC_9(VAR_1, VAR_0);
    }

    VAR_12->NextGetMyIpTick_IPv6 = FUNC_20() + (UINT64)VAR_30;

    FUNC_0(VAR_13, VAR_12->NextGetMyIpTick_IPv6);
   }
  }

  if (VAR_24)
  {
   VAR_12->NextRegisterTick_IPv4 = 0;
   VAR_12->NextRegisterTick_IPv6 = 0;
  }


  if (VAR_12->NextRegisterTick_IPv4 == 0 || VAR_23 >= VAR_12->NextRegisterTick_IPv4)
  {
   UINT VAR_32;

   VAR_12->Err_IPv4 = FUNC_5(VAR_12, 0, ((void*)0), ((void*)0));

   if (VAR_12->Err_IPv4 == VAR_8)
   {
    VAR_32 = FUNC_9(VAR_7, VAR_6);
   }
   else
   {
    VAR_32 = FUNC_9(VAR_5, VAR_4);
   }


   VAR_12->NextRegisterTick_IPv4 = FUNC_20() + (UINT64)VAR_32;

   if (1)
   {
    DDNS_CLIENT_STATUS VAR_33;

    FUNC_4(VAR_12, &VAR_33);

    FUNC_17(VAR_12->Cedar->Server, &VAR_33);
   }

   FUNC_0(VAR_13, VAR_12->NextRegisterTick_IPv4);
  }

  if (VAR_12->Halt)
  {
   break;
  }


  if (VAR_12->NextRegisterTick_IPv6 == 0 || VAR_23 >= VAR_12->NextRegisterTick_IPv6)
  {
   UINT VAR_34;

   VAR_12->Err_IPv6 = FUNC_5(VAR_12, 1, ((void*)0), ((void*)0));

   if (VAR_12->Err_IPv6 == VAR_8)
   {
    VAR_34 = FUNC_9(VAR_7, VAR_6);
   }
   else
   {
    VAR_34 = FUNC_9(VAR_5, VAR_4);
   }

   VAR_12->NextRegisterTick_IPv6 = FUNC_20() + (UINT64)VAR_34;

   if (1)
   {
    DDNS_CLIENT_STATUS VAR_35;

    FUNC_4(VAR_12, &VAR_35);

    FUNC_17(VAR_12->Cedar->Server, &VAR_35);
   }

   FUNC_0(VAR_13, VAR_12->NextRegisterTick_IPv6);
  }

  VAR_22 = FUNC_11(VAR_13);
  VAR_22 = FUNC_14(VAR_22, 1234);

  if (VAR_19 == 1)
  {
   VAR_22 = 0;
  }

  if (VAR_12->Halt)
  {
   break;
  }

  if (VAR_12->KeyChanged)
  {
   VAR_12->KeyChanged = 0;
   VAR_12->NextRegisterTick_IPv4 = VAR_12->NextRegisterTick_IPv6 = 0;

   VAR_22 = 0;
  }

  if (VAR_16)
  {
   if (VAR_12->Cedar->Server != ((void*)0) && VAR_12->Cedar->Server->AzureClient != ((void*)0))
   {
    VAR_12->Cedar->Server->AzureClient->IpStatusRevision++;
   }
  }

  FUNC_21(VAR_12->Event, VAR_22);
 }

 FUNC_8(VAR_15);
 FUNC_7(VAR_13);
}
