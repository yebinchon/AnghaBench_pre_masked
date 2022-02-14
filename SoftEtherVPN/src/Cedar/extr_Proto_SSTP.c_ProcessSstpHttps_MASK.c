
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_23__ {scalar_t__* Buf; scalar_t__ Size; scalar_t__ PriorityQoS; } ;
struct TYPE_22__ {int size; int pos; scalar_t__ p; } ;
struct TYPE_21__ {int CipherName; int RemoteHostname; int LocalPort; int LocalIP; int RemotePort; int RemoteIP; } ;
struct TYPE_20__ {int EstablishedCount; int Interrupt; int SendQueue; scalar_t__ Disconnected; int RecvQueue; } ;
typedef TYPE_1__ SSTP_SERVER ;
typedef int SOCK_EVENT ;
typedef TYPE_2__ SOCK ;
typedef TYPE_3__ FIFO ;
typedef int CEDAR ;
typedef TYPE_4__ BLOCK ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_4__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__* FUNC_8 (scalar_t__) ;
 TYPE_4__* FUNC_9 (scalar_t__*,scalar_t__,int ) ;
 TYPE_3__* FUNC_10 () ;
 TYPE_1__* FUNC_11 (int *,int *,int ,int *,int ,int *,int ,int ) ;
 int FUNC_12 (scalar_t__*) ;
 int FUNC_13 (TYPE_3__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_2__*,scalar_t__*,scalar_t__,int) ;
 int FUNC_15 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_16 (TYPE_2__*,scalar_t__*,scalar_t__,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (TYPE_3__*,scalar_t__*,scalar_t__) ;
 int FUNC_20 () ;

bool FUNC_21(CEDAR *VAR_4, SOCK *VAR_5, SOCK_EVENT *VAR_6)
{
 UINT VAR_7 = 65536;
 UCHAR *VAR_8;
 FIFO *VAR_9;
 FIFO *VAR_10;
 SSTP_SERVER *VAR_11;
 bool VAR_12 = 0;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }

 VAR_8 = FUNC_8(VAR_7);
 VAR_9 = FUNC_10();
 VAR_10 = FUNC_10();

 VAR_11 = FUNC_11(VAR_4, &VAR_5->RemoteIP, VAR_5->RemotePort, &VAR_5->LocalIP, VAR_5->LocalPort, VAR_6,
  VAR_5->RemoteHostname, VAR_5->CipherName);

 while (1)
 {
  UINT VAR_13;
  bool VAR_14 = 0;
  bool VAR_15 = 0;


  while (1)
  {
   VAR_13 = FUNC_14(VAR_5, VAR_8, VAR_7, 1);
   if (VAR_13 == 0)
   {

    VAR_14 = 1;
    break;
   }
   else if (VAR_13 == VAR_2)
   {

    break;
   }
   else
   {

    FUNC_19(VAR_9, VAR_8, VAR_13);
    VAR_15 = 1;
   }
  }

  while (VAR_9->size >= 4)
  {
   UCHAR *VAR_16;
   UINT VAR_17 = 0;
   bool VAR_18 = 0;

   VAR_16 = ((UCHAR *)VAR_9->p) + VAR_9->pos;
   if (VAR_16[0] == VAR_3)
   {
    USHORT VAR_19 = FUNC_12(VAR_16 + 2) & 0xFFF;
    if (VAR_19 >= 4)
    {
     VAR_18 = 1;

     if (VAR_9->size >= VAR_19)
     {
      UCHAR *VAR_20;
      BLOCK *VAR_21;

      VAR_17 = VAR_19;
      VAR_20 = FUNC_8(VAR_17);

      FUNC_13(VAR_9, VAR_20, VAR_17);

      VAR_21 = FUNC_9(VAR_20, VAR_17, 0);

      FUNC_6(VAR_11->RecvQueue, VAR_21);
     }
    }
   }

   if (VAR_17 == 0)
   {
    break;
   }

   if (VAR_18 == 0)
   {

    VAR_14 = 1;
    break;
   }
  }


  FUNC_17(VAR_11);

  if (VAR_11->Disconnected)
  {
   VAR_14 = 1;
  }


  while (1)
  {
   BLOCK *VAR_22 = FUNC_4(VAR_11->SendQueue);

   if (VAR_22 == ((void*)0))
   {
    break;
   }



   if (VAR_22->PriorityQoS || (VAR_10->size <= VAR_0))
   {
    FUNC_19(VAR_10, VAR_22->Buf, VAR_22->Size);
   }

   FUNC_2(VAR_22);
  }


  while (VAR_10->size != 0)
  {
   VAR_13 = FUNC_16(VAR_5, ((UCHAR *)VAR_10->p) + VAR_10->pos, VAR_10->size, 1);
   if (VAR_13 == 0)
   {

    VAR_14 = 1;
    break;
   }
   else if (VAR_13 == VAR_2)
   {

    break;
   }
   else
   {

    FUNC_13(VAR_10, ((void*)0), VAR_13);
    VAR_15 = 1;
   }
  }

  if (VAR_14)
  {

   break;
  }


  if (VAR_15 == 0)
  {
   UINT VAR_23 = VAR_1;
   UINT VAR_24 = FUNC_5(VAR_11->Interrupt);
   FUNC_18(VAR_6, FUNC_7(VAR_24, VAR_23));
  }
 }

 if (VAR_11 != ((void*)0) && VAR_11->EstablishedCount >= 1)
 {
  VAR_12 = 1;
 }

 FUNC_3(VAR_11);

 FUNC_15(VAR_9);
 FUNC_15(VAR_10);
 FUNC_1(VAR_8);

 FUNC_20();
 FUNC_0(VAR_5);

 return VAR_12;
}
