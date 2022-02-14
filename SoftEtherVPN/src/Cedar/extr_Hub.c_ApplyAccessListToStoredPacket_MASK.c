
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int redirect_url ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
struct TYPE_31__ {int AccessList; TYPE_1__* Option; } ;
struct TYPE_27__ {TYPE_4__* IPv4Header; } ;
struct TYPE_25__ {TYPE_6__* TCPHeader; } ;
struct TYPE_30__ {scalar_t__ TypeL3; int AccessChecked; scalar_t__ TypeL4; scalar_t__ PayloadSize; TYPE_5__ L3; TYPE_3__ L4; int Loss; int Jitter; int Delay; TYPE_2__* MacHeader; } ;
struct TYPE_29__ {int FirstTimeHttpRedirect; scalar_t__ FirstTimeHttpAccessCheckIp; scalar_t__* FirstTimeHttpRedirectUrl; scalar_t__ NormalClient; } ;
struct TYPE_28__ {int Flag; int DstPort; } ;
struct TYPE_26__ {int Protocol; scalar_t__ DstIP; } ;
struct TYPE_24__ {int Protocol; } ;
struct TYPE_23__ {scalar_t__ FilterBPDU; scalar_t__ FilterNonIP; scalar_t__ FilterIPv6; scalar_t__ FilterIPv4; scalar_t__ FilterOSPF; scalar_t__ FilterPPPoE; } ;
struct TYPE_22__ {scalar_t__ DestUsernameHash; scalar_t__* RedirectUrl; int Loss; int Jitter; int Delay; scalar_t__ Discard; } ;
typedef TYPE_6__ TCP_HEADER ;
typedef TYPE_7__ SESSION ;
typedef TYPE_8__ PKT ;
typedef TYPE_9__ HUB ;
typedef TYPE_10__ ACCESS ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_9__*,TYPE_7__*,TYPE_8__*,char*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*,TYPE_8__*,TYPE_10__*,int ,int ,int *) ;
 int FUNC_4 (TYPE_8__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_10__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (char*,int,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ) ;

bool FUNC_10(HUB *VAR_9, SESSION *VAR_10, PKT *VAR_11)
{
 UINT VAR_12;
 bool VAR_13 = 1;
 bool VAR_14 = 0;
 char VAR_15[VAR_4 + 1];

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return 0;
 }

 if (VAR_9->Option != ((void*)0) && VAR_9->Option->FilterPPPoE)
 {
  if (VAR_11->MacHeader != ((void*)0))
  {
   USHORT VAR_16 = FUNC_0(VAR_11->MacHeader->Protocol);
   if (VAR_16 == 0x8863 || VAR_16 == 0x8864)
   {

    return 0;
   }
  }
 }

 if (VAR_9->Option != ((void*)0) && VAR_9->Option->FilterOSPF)
 {
  if (VAR_11->TypeL3 == VAR_1)
  {
   if (VAR_11->L3.IPv4Header != ((void*)0))
   {
    if (VAR_11->L3.IPv4Header->Protocol == 89)
    {

     return 0;
    }
   }
  }
 }

 if (VAR_9->Option != ((void*)0) && VAR_9->Option->FilterIPv4)
 {
  if (VAR_11->MacHeader != ((void*)0))
  {
   USHORT VAR_17 = FUNC_0(VAR_11->MacHeader->Protocol);
   if (VAR_17 == 0x0800 || VAR_17 == 0x0806)
   {

    return 0;
   }
  }
 }

 if (VAR_9->Option != ((void*)0) && VAR_9->Option->FilterIPv6)
 {
  if (VAR_11->MacHeader != ((void*)0))
  {
   USHORT VAR_18 = FUNC_0(VAR_11->MacHeader->Protocol);
   if (VAR_18 == 0x86dd)
   {

    return 0;
   }
  }
 }

 if (VAR_9->Option != ((void*)0) && VAR_9->Option->FilterNonIP)
 {
  if (VAR_11->MacHeader != ((void*)0))
  {
   USHORT VAR_19 = FUNC_0(VAR_11->MacHeader->Protocol);
   if (!(VAR_19 == 0x86dd || VAR_19 == 0x0800 || VAR_19 == 0x0806))
   {

    return 0;
   }
  }
 }

 if (VAR_9->Option != ((void*)0) && VAR_9->Option->FilterBPDU)
 {
  if (VAR_11->MacHeader != ((void*)0))
  {
   if (VAR_11->TypeL3 == VAR_0)
   {

    return 0;
   }
  }
 }

 FUNC_7(VAR_9->AccessList);
 {
  for (VAR_12 = 0;VAR_12 < FUNC_6(VAR_9->AccessList);VAR_12++)
  {
   ACCESS *VAR_20 = FUNC_5(VAR_9->AccessList, VAR_12);

   if (VAR_20->DestUsernameHash != 0)
   {

    break;
   }

   if (FUNC_3(VAR_10, VAR_11, VAR_20, 0, 0, ((void*)0)))
   {

    VAR_13 = VAR_20->Discard ? 0 : 1;


    VAR_11->AccessChecked = 1;


    VAR_11->Delay = VAR_20->Delay;
    VAR_11->Jitter = VAR_20->Jitter;
    VAR_11->Loss = VAR_20->Loss;

    if (VAR_20->RedirectUrl[0] != 0)
    {

     if ((VAR_11->TypeL3 == VAR_1 || VAR_11->TypeL3 == VAR_2) &&
      VAR_11->TypeL4 == VAR_3)
     {
      TCP_HEADER *VAR_21 = VAR_11->L4.TCPHeader;


      if (VAR_21 != ((void*)0))
      {
       if (VAR_21->Flag & VAR_5)
       {
        if ((VAR_21->Flag & VAR_7) == 0 &&
         (VAR_21->Flag & VAR_6) == 0 &&
         (VAR_21->Flag & VAR_8) == 0)
        {
         if (VAR_11->PayloadSize != 0)
         {

          VAR_14 = 1;
          FUNC_8(VAR_15, sizeof(VAR_15), VAR_20->RedirectUrl);
         }
        }
       }
      }
     }
    }


    break;
   }
  }
 }
 FUNC_9(VAR_9->AccessList);

 if (VAR_13)
 {
  if (VAR_10->FirstTimeHttpRedirect && VAR_10->FirstTimeHttpAccessCheckIp != 0)
  {
   if ((VAR_11->TypeL3 == VAR_1 || VAR_11->TypeL3 == VAR_2) &&
    VAR_11->TypeL4 == VAR_3)
   {
    TCP_HEADER *VAR_22 = VAR_11->L4.TCPHeader;


    if (VAR_22 != ((void*)0))
    {
     if (VAR_22->DstPort == FUNC_0(80))
     {
      if (VAR_11->L3.IPv4Header->DstIP == VAR_10->FirstTimeHttpAccessCheckIp)
      {
       VAR_10->FirstTimeHttpRedirect = 0;
      }
      else if (VAR_22->Flag & VAR_5)
      {
       if ((VAR_22->Flag & VAR_7) == 0 &&
        (VAR_22->Flag & VAR_6) == 0 &&
        (VAR_22->Flag & VAR_8) == 0)
       {
        if (VAR_11->PayloadSize != 0)
        {
         if (FUNC_4(VAR_11) == 0)
         {




          if (FUNC_2(VAR_10->FirstTimeHttpRedirectUrl) == 0)
          {
           VAR_14 = 1;
           FUNC_8(VAR_15, sizeof(VAR_15), VAR_10->FirstTimeHttpRedirectUrl);
          }
         }
        }
       }
      }
     }
    }
   }
  }
 }

 if (VAR_14)
 {
  if (VAR_10->NormalClient)
  {


   FUNC_1(VAR_9, VAR_10, VAR_11, VAR_15);
  }
  else
  {


  }

  VAR_13 = 0;
 }

 return VAR_13;
}
