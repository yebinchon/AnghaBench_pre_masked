
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_20__ {TYPE_1__* Server; } ;
struct TYPE_19__ {scalar_t__ Protocol; int ShadowIPv6; scalar_t__ Halt; int lock; TYPE_2__* Sock; void* Status; int Event; int Port; TYPE_6__* Cedar; int RandPortId; int * NatTGlobalUdpPort; int LocalOnly; int EnableConditionalAccept; } ;
struct TYPE_18__ {int ref; } ;
struct TYPE_17__ {int ListenIP; } ;
typedef TYPE_2__ SOCK ;
typedef TYPE_3__ LISTENER ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_5 (int ,int ,int ,int *) ;
 TYPE_2__* FUNC_6 (int ,int ) ;
 TYPE_2__* FUNC_7 () ;
 TYPE_2__* FUNC_8 (int ,int *,int ,int *,int,int,int,int *,int ,int *) ;
 TYPE_2__* FUNC_9 () ;
 int VAR_11 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_6__*,char*,int ,...) ;
 int FUNC_14 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_15 (int ) ;
 int VAR_12 ;
 int FUNC_16 (int ,int) ;

void FUNC_17(LISTENER *VAR_13)
{
 SOCK *VAR_14;
 SOCK *VAR_15;

 if (VAR_13 == ((void*)0))
 {
  return;
 }

 FUNC_2("ListenerTCPMainLoop Starts.\n");
 VAR_13->Status = VAR_7;

 while (1)
 {
  bool VAR_16 = 1;
  FUNC_2("Status = LISTENER_STATUS_TRYING\n");
  VAR_13->Status = VAR_7;


  while (1)
  {
   UINT VAR_17;

   if (VAR_13->Halt)
   {

    return;
   }

   VAR_15 = ((void*)0);

   if (VAR_13->Protocol == VAR_8)
   {
    if (VAR_13->ShadowIPv6 == 0)
    {
     if (VAR_13->Cedar->Server == ((void*)0))
     {
      VAR_15 = FUNC_5(VAR_13->Port, VAR_13->LocalOnly, VAR_13->EnableConditionalAccept, ((void*)0));
     }
     else
     {
      VAR_15 = FUNC_5(VAR_13->Port, VAR_13->LocalOnly, VAR_13->EnableConditionalAccept, &VAR_13->Cedar->Server->ListenIP);
     }
    }
    else
    {
     VAR_15 = FUNC_6(VAR_13->Port, VAR_13->LocalOnly);
    }
   }
   else if (VAR_13->Protocol == VAR_3)
   {
    VAR_15 = FUNC_7();
   }
   else if (VAR_13->Protocol == VAR_5)
   {
    VAR_15 = FUNC_8(VAR_12, ((void*)0), VAR_11, ((void*)0), 0, 0, 0, VAR_13->NatTGlobalUdpPort, VAR_13->RandPortId, &VAR_13->Cedar->Server->ListenIP);
   }
   else if (VAR_13->Protocol == VAR_2)
   {
    VAR_15 = FUNC_8(VAR_12, ((void*)0), VAR_11, ((void*)0), FUNC_11(VAR_0),
     1, 0, ((void*)0), 0, &VAR_13->Cedar->Server->ListenIP);
   }
   else if (VAR_13->Protocol == VAR_1)
   {
    VAR_15 = FUNC_8(VAR_12, ((void*)0), VAR_11, ((void*)0), 53, 1, 1, ((void*)0), 0, &VAR_13->Cedar->Server->ListenIP);
   }
   else if (VAR_13->Protocol == VAR_4)
   {
    VAR_15 = FUNC_9();
   }

   if (VAR_15 != ((void*)0))
   {

    FUNC_1(VAR_15->ref);

    FUNC_10(VAR_13->lock);
    {
     VAR_13->Sock = VAR_15;
    }
    FUNC_15(VAR_13->lock);

    if (VAR_13->ShadowIPv6 == 0 && VAR_13->Protocol == VAR_8)
    {
     FUNC_13(VAR_13->Cedar, "LS_LISTENER_START_2", VAR_13->Port);
    }
    break;
   }


   if (VAR_16)
   {
    VAR_16 = 0;
    if (VAR_13->ShadowIPv6 == 0 && VAR_13->Protocol == VAR_8)
    {
     FUNC_13(VAR_13->Cedar, "LS_LISTENER_START_3", VAR_13->Port, VAR_9 / 1000);
    }
   }

   VAR_17 = VAR_9;

   if (VAR_13->ShadowIPv6)
   {
    if (FUNC_4() == 0)
    {
     VAR_17 = VAR_10;

     FUNC_2("IPv6 is not supported.\n");
    }
   }

   FUNC_16(VAR_13->Event, VAR_17);


   if (VAR_13->Halt)
   {

    FUNC_2("Listener Halt.\n");
    return;
   }
  }

  VAR_13->Status = VAR_6;
  FUNC_2("Status = LISTENER_STATUS_LISTENING\n");


  if (VAR_13->Halt)
  {

   goto STOP;
  }


  while (1)
  {

   FUNC_2("Accept()\n");
   VAR_14 = FUNC_0(VAR_15);
   if (VAR_14 != ((void*)0))
   {

    FUNC_2("Accepted.\n");
    FUNC_14(VAR_13, VAR_14);
    FUNC_12(VAR_14);
   }
   else
   {
STOP:
    FUNC_2("Accept Canceled.\n");


    FUNC_3(VAR_15);
    FUNC_12(VAR_15);
    VAR_15 = ((void*)0);

    FUNC_10(VAR_13->lock);
    {
     if (VAR_13->Sock != ((void*)0))
     {
      VAR_15 = VAR_13->Sock;
      VAR_13->Sock = ((void*)0);
     }
    }
    FUNC_15(VAR_13->lock);

    if (VAR_15 != ((void*)0))
    {
     FUNC_12(VAR_15);
    }

    VAR_15 = ((void*)0);

    break;
   }
  }


  if (VAR_13->Halt)
  {

   FUNC_2("Listener Halt.\n");
   return;
  }
 }
}
