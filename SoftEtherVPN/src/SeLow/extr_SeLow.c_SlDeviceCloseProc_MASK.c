
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int filter ;
typedef int UINT ;
struct TYPE_24__ {int NumPendingOidRequests; scalar_t__ Halt; } ;
struct TYPE_23__ {scalar_t__ DeviceExtension; } ;
struct TYPE_22__ {TYPE_1__* FileObject; } ;
struct TYPE_18__ {int Status; } ;
struct TYPE_21__ {TYPE_2__ IoStatus; } ;
struct TYPE_20__ {TYPE_9__* Adapter; int OpenCloseLock; int FileList; scalar_t__ IsBasicDevice; } ;
struct TYPE_19__ {scalar_t__ NumSendingPackets; int RecvLock; int NetBufferListPool; struct TYPE_19__* Next; struct TYPE_19__* RecvPacketHead; int Event; } ;
struct TYPE_17__ {TYPE_3__* FsContext; } ;
typedef TYPE_3__ SL_PACKET ;
typedef TYPE_3__ SL_FILE ;
typedef TYPE_5__ SL_DEVICE ;
typedef int NTSTATUS ;
typedef TYPE_6__ IRP ;
typedef TYPE_7__ IO_STACK_LOCATION ;
typedef TYPE_8__ DEVICE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 TYPE_7__* FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_9__*,int,int ,int *,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

NTSTATUS FUNC_16(DEVICE_OBJECT *VAR_4, IRP *VAR_5)
{
 SL_DEVICE *VAR_6 = *((SL_DEVICE **)VAR_4->DeviceExtension);
 NTSTATUS VAR_7 = VAR_3;
 IO_STACK_LOCATION *VAR_8 = FUNC_3(VAR_5);

 if (VAR_6->IsBasicDevice)
 {

  VAR_7 = VAR_2;
 }
 else
 {

  SL_FILE *VAR_9 = VAR_8->FileObject->FsContext;

  if (VAR_9 != ((void*)0))
  {
   bool VAR_10 = 0;


   while (1)
   {
    if (VAR_9->NumSendingPackets == 0)
    {
     break;
    }

    FUNC_13(50);
   }

   FUNC_10(VAR_6->OpenCloseLock);
   {

    FUNC_11(VAR_6->FileList);
    {
     FUNC_6(VAR_6->FileList, VAR_9);

     if (FUNC_5(VAR_6->FileList) == 0)
     {

      VAR_10 = 1;
     }
    }
    FUNC_15(VAR_6->FileList);

    if (VAR_6->Adapter->Halt)
    {
     VAR_10 = 0;
    }

    if (VAR_10)
    {
     FUNC_1(&VAR_6->Adapter->NumPendingOidRequests);
    }
   }
   FUNC_14(VAR_6->OpenCloseLock);

   if (VAR_10)
   {

    UINT VAR_11 = 0;
    FUNC_12(VAR_6->Adapter, 1, VAR_1, &VAR_11, sizeof(VAR_11));
    FUNC_0(&VAR_6->Adapter->NumPendingOidRequests);
   }


   FUNC_8(VAR_9->Event);


   if (1)
   {
    SL_PACKET *VAR_12 = VAR_9->RecvPacketHead;

    while (VAR_12 != ((void*)0))
    {
     SL_PACKET *VAR_13 = VAR_12->Next;

     FUNC_7(VAR_12);

     VAR_12 = VAR_13;
    }
   }


   FUNC_4(VAR_9->NetBufferListPool);


   FUNC_9(VAR_9->RecvLock);

   FUNC_7(VAR_9);

   VAR_7 = VAR_2;
  }
 }

 VAR_5->IoStatus.Status = VAR_7;
 FUNC_2(VAR_5, VAR_0);

 return VAR_7;
}
