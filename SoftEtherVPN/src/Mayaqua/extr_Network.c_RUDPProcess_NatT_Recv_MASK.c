
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tmp ;
typedef int new_hostname ;
typedef int myip ;
typedef int client_ip_str ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int Size; int Data; } ;
typedef TYPE_1__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_8__ {char* NatT_Registered_IPAndPort; int NatT_Token_Ok; char* NatT_Token; int NatT_Register_Ok; scalar_t__ NatT_TranId; scalar_t__ Now; char* CurrentRegisterHostname; scalar_t__ NumChangedHostname; scalar_t__ NumChangedHostnameValueResetTick; char NatT_IP; int NatT_EnableSourceIpValidation; scalar_t__ NatT_SessionKey; scalar_t__ NatT_RegisterNextTick; int Interrupt; scalar_t__* NatTGlobalUdpPort; scalar_t__ NatT_RegisterFailNum; scalar_t__ NatT_GetTokenNextTick; int Lock; int HaltEvent; scalar_t__ NatT_GetTokenFailNum; scalar_t__ ServerMode; } ;
typedef TYPE_2__ RUDP_STACK ;
typedef int PACK ;
typedef int IP ;
typedef int BUF ;


 int FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_0 ;
 int FUNC_13 (int,int) ;
 int * FUNC_14 (scalar_t__) ;
 int * FUNC_15 () ;
 scalar_t__ FUNC_16 (int *,char*,char*) ;
 void* FUNC_17 (int *,char*) ;
 scalar_t__ FUNC_18 (int *,char*) ;
 scalar_t__ FUNC_19 (int *,char*) ;
 scalar_t__ FUNC_20 (int *,char*,char*,int) ;
 int FUNC_21 (TYPE_2__*,int *) ;
 int FUNC_22 (char*,int,int *) ;
 scalar_t__ FUNC_23 (int ,int,int *,scalar_t__*) ;
 int FUNC_24 (TYPE_2__*,int *,scalar_t__,int *,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_25 (int *,scalar_t__) ;
 int FUNC_26 () ;
 int FUNC_27 (int *,int ,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int *,int) ;
 scalar_t__ FUNC_30 (char*,char*) ;
 scalar_t__ FUNC_31 (char*,char*) ;
 int FUNC_32 (char*,int,char*) ;
 int FUNC_33 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int *,int ,int) ;
 int FUNC_36 (char*,int) ;
 int VAR_7 ;

void FUNC_37(RUDP_STACK *VAR_8, UDPPACKET *VAR_9)
{
 BUF *VAR_10;
 PACK *VAR_11;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }

 if (VAR_9->Size >= 8)
 {
  char VAR_12[128];

  FUNC_36(VAR_12, sizeof(VAR_12));
  FUNC_3(VAR_12, VAR_9->Data, FUNC_13(VAR_9->Size, sizeof(VAR_12) - 1));

  if (FUNC_30(VAR_12, "IP="))
  {
   IP VAR_13;
   UINT VAR_14;


   if (FUNC_10(VAR_8->NatT_Registered_IPAndPort) == 0)
   {
    if (FUNC_31(VAR_8->NatT_Registered_IPAndPort, VAR_12) != 0)
    {

     FUNC_2(VAR_8->NatT_Registered_IPAndPort, sizeof(VAR_8->NatT_Registered_IPAndPort));

     VAR_8->NatT_GetTokenNextTick = 0;
     VAR_8->NatT_GetTokenFailNum = 0;
     VAR_8->NatT_Token_Ok = 0;
     FUNC_36(VAR_8->NatT_Token, sizeof(VAR_8->NatT_Token));

     VAR_8->NatT_RegisterNextTick = 0;
     VAR_8->NatT_RegisterFailNum = 0;
     VAR_8->NatT_Register_Ok = 0;
    }
   }

   if (FUNC_23(VAR_9->Data, VAR_9->Size, &VAR_13, &VAR_14))
   {
    if (VAR_8->NatTGlobalUdpPort != ((void*)0))
    {
     *VAR_8->NatTGlobalUdpPort = VAR_14;
    }
   }

   return;
  }
 }


 VAR_10 = FUNC_15();
 FUNC_35(VAR_10, VAR_9->Data, VAR_9->Size);
 FUNC_27(VAR_10, 0, 0);

 VAR_11 = FUNC_1(VAR_10);

 if (VAR_11 != ((void*)0))
 {
  bool VAR_15 = FUNC_17(VAR_11, "ok");
  UINT64 VAR_16 = FUNC_19(VAR_11, "tran_id");

  FUNC_5(VAR_11);

  if (VAR_8->ServerMode)
  {
   if (FUNC_16(VAR_11, "opcode", "get_token"))
   {

    if (VAR_15 && (VAR_16 == VAR_8->NatT_TranId))
    {
     char VAR_17[VAR_0];

     if (FUNC_20(VAR_11, "token", VAR_17, sizeof(VAR_17)) && FUNC_10(VAR_17) == 0)
     {
      char VAR_18[VAR_0];

      FUNC_32(VAR_8->NatT_Token, sizeof(VAR_8->NatT_Token), VAR_17);
      VAR_8->NatT_Token_Ok = 1;
      VAR_8->NatT_GetTokenNextTick = VAR_8->Now + (UINT64)FUNC_9(VAR_4, VAR_3);
      VAR_8->NatT_GetTokenFailNum = 0;



      if (FUNC_20(VAR_11, "your_ip", VAR_18, sizeof(VAR_18)))
      {
       IP VAR_19;
       char VAR_20[VAR_0];

       FUNC_33(&VAR_19, VAR_18);

       FUNC_29(&VAR_19, 0);

       FUNC_22(VAR_20,
        sizeof(VAR_20), &VAR_19);

       FUNC_12(VAR_8->Lock);
       {
        if (FUNC_31(VAR_8->CurrentRegisterHostname, VAR_20) != 0)
        {
         VAR_8->NumChangedHostname++;

         if (VAR_8->NumChangedHostname <= VAR_2)
         {
          if (VAR_8->NumChangedHostnameValueResetTick == 0)
          {
           VAR_8->NumChangedHostnameValueResetTick = VAR_8->Now + (UINT64)VAR_1;
          }


          FUNC_4("CurrentRegisterHostname Changed: New=%s\n", VAR_20);
          FUNC_32(VAR_8->CurrentRegisterHostname, sizeof(VAR_8->CurrentRegisterHostname), VAR_20);

          FUNC_36(&VAR_8->NatT_IP, sizeof(VAR_8->NatT_IP));


          FUNC_28(VAR_8->HaltEvent);
         }
         else
         {
          if (VAR_8->NumChangedHostnameValueResetTick == 0)
          {
           VAR_8->NumChangedHostnameValueResetTick = VAR_8->Now + (UINT64)VAR_1;
          }

          if (VAR_8->Now >= VAR_8->NumChangedHostnameValueResetTick)
          {
           VAR_8->NumChangedHostname = 0;
           VAR_8->NumChangedHostnameValueResetTick = 0;
          }
         }
        }
        else
        {
         VAR_8->NumChangedHostname = 0;
         VAR_8->NumChangedHostnameValueResetTick = 0;
        }
       }
       FUNC_34(VAR_8->Lock);
      }

      FUNC_0(VAR_8->Interrupt, VAR_8->NatT_GetTokenNextTick);
     }
    }
   }
   else if (FUNC_16(VAR_11, "opcode", "nat_t_register"))
   {

    if (VAR_15 && (VAR_16 == VAR_8->NatT_TranId))
    {
     UINT VAR_21;

     VAR_8->NatT_Register_Ok = 1;
     VAR_8->NatT_RegisterNextTick = VAR_8->Now + (UINT64)FUNC_9(VAR_6, VAR_5);
     VAR_8->NatT_RegisterFailNum = 0;

     FUNC_4("NAT-T Registered.\n");


     FUNC_20(VAR_11, "your_ip_and_port", VAR_8->NatT_Registered_IPAndPort, sizeof(VAR_8->NatT_Registered_IPAndPort));

     if (VAR_7 == 0)
     {

      VAR_8->NatT_EnableSourceIpValidation = FUNC_17(VAR_11, "enable_source_ip_validation");

     }
     else
     {

      VAR_8->NatT_EnableSourceIpValidation = 0;
     }


     VAR_21 = FUNC_18(VAR_11, "your_port");

     if (VAR_21 != 0)
     {
      if (VAR_8->NatTGlobalUdpPort != ((void*)0))
      {
       *VAR_8->NatTGlobalUdpPort = VAR_21;
      }
     }

     FUNC_0(VAR_8->Interrupt, VAR_8->NatT_RegisterNextTick);
    }
   }
   else if (FUNC_16(VAR_11, "opcode", "nat_t_connect_relay"))
   {

    if (VAR_15 && (FUNC_19(VAR_11, "session_key") == VAR_8->NatT_SessionKey))
    {
     char VAR_22[VAR_0];
     UINT VAR_23;
     IP VAR_24;

     FUNC_20(VAR_11, "client_ip", VAR_22, sizeof(VAR_22));
     VAR_23 = FUNC_18(VAR_11, "client_port");
     FUNC_33(&VAR_24, VAR_22);

     if (FUNC_11(&VAR_24) == 0 && VAR_23 != 0)
     {
      UCHAR *VAR_25;
      UINT VAR_26;

      if (VAR_8->NatT_EnableSourceIpValidation)
      {
       FUNC_21(VAR_8, &VAR_24);
      }

      VAR_26 = FUNC_26() % 19;
      VAR_25 = FUNC_14(VAR_26);

      FUNC_25(VAR_25, VAR_26);

      FUNC_24(VAR_8, &VAR_24, VAR_23, VAR_25, VAR_26, 0);

      FUNC_6(VAR_25);
     }
    }
   }
  }

  FUNC_8(VAR_11);
 }

 FUNC_7(VAR_10);
}
