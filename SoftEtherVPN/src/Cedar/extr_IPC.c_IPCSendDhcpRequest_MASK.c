
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_25__ {int Size; int Buf; } ;
struct TYPE_24__ {int Size; int Buf; } ;
struct TYPE_23__ {scalar_t__ OpCode; TYPE_1__* Header; } ;
struct TYPE_22__ {int Interrupt; TYPE_2__* Sock; } ;
struct TYPE_21__ {int * SendTube; int * RecvTube; } ;
struct TYPE_20__ {int TransactionId; } ;
typedef int TUBE ;
typedef int PKT ;
typedef TYPE_3__ IPC ;
typedef int IP ;
typedef int DHCP_OPTION_LIST ;
typedef TYPE_4__ DHCPV4_DATA ;
typedef TYPE_5__ BUF ;
typedef TYPE_6__ BLOCK ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (TYPE_3__*,int *,scalar_t__,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_6__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int,scalar_t__) ;
 TYPE_4__* FUNC_14 (int *) ;
 int * FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int **,scalar_t__,int ) ;

DHCPV4_DATA *FUNC_18(IPC *VAR_0, IP *VAR_1, UINT VAR_2, DHCP_OPTION_LIST *VAR_3, UINT VAR_4, UINT VAR_5, TUBE *VAR_6)
{
 UINT VAR_7;
 UINT64 VAR_8;
 UINT64 VAR_9 = 0;
 TUBE *VAR_10[3];
 UINT VAR_11 = 0;

 if (VAR_0 == ((void*)0) || VAR_3 == ((void*)0) || (VAR_4 != 0 && VAR_5 == 0))
 {
  return ((void*)0);
 }


 VAR_7 = FUNC_13(1, (VAR_5 / 3) - 100);


 VAR_8 = FUNC_16() + (UINT64)VAR_5;

 FUNC_0(VAR_0->Interrupt, VAR_8);

 VAR_10[VAR_11++] = VAR_0->Sock->RecvTube;
 VAR_10[VAR_11++] = VAR_0->Sock->SendTube;

 if (VAR_6 != ((void*)0))
 {
  VAR_10[VAR_11++] = VAR_6;
 }

 while (1)
 {
  UINT64 VAR_12 = FUNC_16();
  BUF *VAR_13;

  FUNC_8(VAR_0);


  if ((VAR_4 != 0) && (VAR_12 >= VAR_8))
  {
   return ((void*)0);
  }


  if (VAR_9 == 0 || VAR_9 <= VAR_12)
  {
   VAR_13 = FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3);
   if (VAR_13 == ((void*)0))
   {
    return ((void*)0);
   }

   FUNC_11(VAR_0, VAR_13->Buf, VAR_13->Size);

   FUNC_3(VAR_13);

   if (VAR_4 == 0)
   {
    return ((void*)0);
   }

   VAR_9 = VAR_12 + (UINT64)VAR_7;

   FUNC_0(VAR_0->Interrupt, VAR_9);
  }


  FUNC_9(VAR_0);

  while (1)
  {

   BLOCK *VAR_14 = FUNC_10(VAR_0);
   PKT *VAR_15;
   DHCPV4_DATA *VAR_16;

   if (VAR_14 == ((void*)0))
   {
    break;
   }


   VAR_15 = FUNC_15(VAR_14->Buf, VAR_14->Size);

   VAR_16 = FUNC_14(VAR_15);

   if (VAR_16 != ((void*)0))
   {
    if (FUNC_1(VAR_16->Header->TransactionId) == VAR_2 && VAR_16->OpCode == VAR_4)
    {

     FUNC_5(VAR_15);
     FUNC_2(VAR_14);

     return VAR_16;
    }

    FUNC_4(VAR_16);
   }

   FUNC_5(VAR_15);

   FUNC_2(VAR_14);
  }

  if (FUNC_12(VAR_0->Sock->RecvTube) == 0 || FUNC_12(VAR_0->Sock->SendTube) == 0 ||
   (VAR_6 != ((void*)0) && FUNC_12(VAR_6) == 0))
  {

   return ((void*)0);
  }


  FUNC_17(VAR_10, VAR_11, FUNC_6(VAR_0->Interrupt));
 }

 return ((void*)0);
}
