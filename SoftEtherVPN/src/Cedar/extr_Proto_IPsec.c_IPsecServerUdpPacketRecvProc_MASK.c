
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {scalar_t__ Type; scalar_t__ SrcPort; int Size; void* Data; } ;
typedef TYPE_1__ UDPPACKET ;
struct TYPE_16__ {int HostIPAddressListChanged; int Event; int * Interrupts; scalar_t__ Param; } ;
typedef TYPE_2__ UDPLISTENER ;
typedef int UCHAR ;
struct TYPE_19__ {int * SendPacketList; void* Now; int * SockEvent; int * Interrupts; } ;
struct TYPE_18__ {int HostIPAddressListChanged; TYPE_5__* Ike; TYPE_3__* L2TP; int OsServiceCheckThreadEvent; } ;
struct TYPE_17__ {int * SendPacketList; void* Now; int * SockEvent; int * Interrupts; } ;
typedef int LIST ;
typedef TYPE_3__ L2TP_SERVER ;
typedef TYPE_4__ IPSEC_SERVER ;
typedef TYPE_5__ IKE_SERVER ;


 void* FUNC_0 (void*,int,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 void* FUNC_11 () ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int VAR_4 ;

void FUNC_13(UDPLISTENER *VAR_5, LIST *VAR_6)
{
 UINT VAR_7;
 IPSEC_SERVER *VAR_8;
 L2TP_SERVER *VAR_9;
 IKE_SERVER *VAR_10;
 UINT64 VAR_11;
 static UCHAR VAR_12[8] = {0, 0, 0, 0, 0, 0, 0, 0, };

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }
 VAR_8 = (IPSEC_SERVER *)VAR_5->Param;
 if (VAR_8 == ((void*)0))
 {
  return;
 }

 if (VAR_5->HostIPAddressListChanged)
 {
  VAR_5->HostIPAddressListChanged = 0;

  VAR_8->HostIPAddressListChanged = 1;

  FUNC_8(VAR_8->OsServiceCheckThreadEvent);
 }

 VAR_11 = FUNC_11();


 VAR_9 = VAR_8->L2TP;

 if (VAR_9->Interrupts == ((void*)0))
 {
  VAR_9->Interrupts = VAR_5->Interrupts;
 }

 if (VAR_9->SockEvent == ((void*)0))
 {
  FUNC_10(VAR_9, VAR_5->Event);
 }

 VAR_9->Now = VAR_11;


 VAR_10 = VAR_8->Ike;

 if (VAR_10->Interrupts == ((void*)0))
 {
  VAR_10->Interrupts = VAR_5->Interrupts;
 }

 if (VAR_10->SockEvent == ((void*)0))
 {
  FUNC_9(VAR_10, VAR_5->Event);
 }

 VAR_10->Now = VAR_11;

 if (VAR_4 == 0)
 {
  {

   for (VAR_7 = 0;VAR_7 < FUNC_6(VAR_6);VAR_7++)
   {
    UDPPACKET *VAR_13 = FUNC_5(VAR_6, VAR_7);

    FUNC_3(VAR_8, VAR_13);
   }
  }
 }


 FUNC_4(VAR_9);


 FUNC_12(VAR_5, VAR_9->SendPacketList);
 FUNC_1(VAR_9->SendPacketList);


 FUNC_7(VAR_10);


 for (VAR_7 = 0;VAR_7 < FUNC_6(VAR_10->SendPacketList);VAR_7++)
 {
  UDPPACKET *VAR_14 = FUNC_5(VAR_10->SendPacketList, VAR_7);

  if (VAR_14->Type == VAR_1 && VAR_14->SrcPort == VAR_2)
  {

   void *VAR_15 = VAR_14->Data;

   VAR_14->Data = FUNC_0(VAR_14->Data, VAR_14->Size, VAR_12, 4);
   VAR_14->Size += 4;

   FUNC_2(VAR_15);
  }
  else if (VAR_14->Type == VAR_0 && VAR_14->SrcPort == VAR_3)
  {

   void *VAR_16 = VAR_14->Data;

   VAR_14->Data = FUNC_0(VAR_14->Data, VAR_14->Size, VAR_12, 8);
   VAR_14->Size += 8;

   FUNC_2(VAR_16);
  }
 }


 FUNC_12(VAR_5, VAR_10->SendPacketList);
 FUNC_1(VAR_10->SendPacketList);
}
