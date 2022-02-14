
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
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int p ;
typedef int filter ;
typedef int UINT64 ;
typedef int UINT32 ;
typedef scalar_t__ UINT ;
struct TYPE_31__ {scalar_t__ DeviceExtension; } ;
struct TYPE_30__ {TYPE_1__* FileObject; } ;
struct TYPE_25__ {int Status; } ;
struct TYPE_29__ {TYPE_3__ IoStatus; } ;
struct TYPE_24__ {int Size; int Revision; int Type; } ;
struct TYPE_28__ {int fAllocateNetBuffer; int ContextSize; char PoolTag; int DataSize; int ProtocolId; TYPE_2__ Header; } ;
struct TYPE_27__ {int Halting; TYPE_13__* Adapter; int OpenCloseLock; int FileList; scalar_t__ IsBasicDevice; } ;
struct TYPE_26__ {int NetBufferListPool; int RecvLock; int EventNameWin32; int * Event; TYPE_1__* FileObject; TYPE_13__* Adapter; TYPE_5__* Device; } ;
struct TYPE_23__ {TYPE_4__* FsContext; } ;
struct TYPE_22__ {int Halt; scalar_t__ NumPendingOidRequests; scalar_t__ Ready; } ;
struct TYPE_21__ {scalar_t__ IntCounter1; } ;
typedef TYPE_4__ SL_FILE ;
typedef int SL_EVENT ;
typedef TYPE_5__ SL_DEVICE ;
typedef int NTSTATUS ;
typedef TYPE_6__ NET_BUFFER_LIST_POOL_PARAMETERS ;
typedef int LARGE_INTEGER ;
typedef TYPE_7__ IRP ;
typedef TYPE_8__ IO_STACK_LOCATION ;
typedef TYPE_9__ DEVICE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 TYPE_8__* FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,TYPE_6__*) ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_13__*,int,int ,scalar_t__*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_6__*,int) ;
 TYPE_4__* FUNC_16 (int) ;
 TYPE_10__* VAR_13 ;
 int FUNC_17 (char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_18 (int ,char*) ;

NTSTATUS FUNC_19(DEVICE_OBJECT *VAR_14, IRP *VAR_15)
{
 SL_DEVICE *VAR_16 = *((SL_DEVICE **)VAR_14->DeviceExtension);
 NTSTATUS VAR_17 = VAR_12;
 IO_STACK_LOCATION *VAR_18 = FUNC_2(VAR_15);

 if (VAR_16->IsBasicDevice)
 {

  VAR_17 = VAR_11;
 }
 else
 {
  bool VAR_19 = 0;
  volatile UINT *VAR_20 = ((void*)0);
  UINT64 VAR_21;
  char VAR_22[VAR_8];
  char VAR_23[VAR_8];
  SL_EVENT *VAR_24 = ((void*)0);
  LARGE_INTEGER VAR_25;
  LARGE_INTEGER VAR_26;

  VAR_25 = FUNC_3(&VAR_26);

  FUNC_0(&VAR_13->IntCounter1);


  VAR_21 = (UINT64)VAR_14 + (UINT64)(++VAR_13->IntCounter1) + *((UINT64 *)(&VAR_25));
  FUNC_17(VAR_22, VAR_7, (UINT)VAR_21, (UINT)(VAR_21 >> 32) + VAR_13->IntCounter1);
  FUNC_17(VAR_23, VAR_9, (UINT)VAR_21, (UINT)(VAR_21 >> 32) + VAR_13->IntCounter1);
  VAR_24 = FUNC_9(VAR_22);

  FUNC_7(VAR_16->OpenCloseLock);
  {

   FUNC_8(VAR_16->FileList);
   {
    if (VAR_16->Halting == 0 && VAR_16->Adapter != ((void*)0) && VAR_16->Adapter->Ready && VAR_16->Adapter->Halt == 0)
    {

     SL_FILE *VAR_27 = FUNC_16(sizeof(SL_FILE));
     NET_BUFFER_LIST_POOL_PARAMETERS VAR_28;

     VAR_27->Device = VAR_16;
     VAR_27->Adapter = VAR_16->Adapter;
     VAR_27->FileObject = VAR_18->FileObject;

     VAR_18->FileObject->FsContext = VAR_27;

     FUNC_5(VAR_16->FileList, VAR_27);

     VAR_17 = VAR_11;
     VAR_19 = 1;


     VAR_27->Event = VAR_24;
     VAR_24 = ((void*)0);
     FUNC_18(VAR_27->EventNameWin32, VAR_23);


     VAR_27->RecvLock = FUNC_10();


     FUNC_15(&VAR_28, sizeof(VAR_28));
     VAR_28.Header.Type = VAR_1;
     VAR_28.Header.Revision = VAR_5;
     VAR_28.Header.Size = VAR_4;
     VAR_28.ProtocolId = VAR_3;
     VAR_28.fAllocateNetBuffer = 1;
     VAR_28.ContextSize = 32 + sizeof(UINT32) * 12;
     VAR_28.DataSize = VAR_10;
     VAR_28.PoolTag = 'SETH';

     VAR_27->NetBufferListPool = FUNC_4(((void*)0), &VAR_28);

     VAR_20 = &VAR_16->Adapter->NumPendingOidRequests;
    }
   }
   FUNC_14(VAR_16->FileList);
  }
  FUNC_13(VAR_16->OpenCloseLock);

  if (VAR_24 != ((void*)0))
  {
   FUNC_6(VAR_24);
  }

  if (VAR_19)
  {

   UINT VAR_29 = VAR_2;
   FUNC_11(VAR_16->Adapter, 1, VAR_6, &VAR_29, sizeof(VAR_29));


   while ((*VAR_20) != 0)
   {
    FUNC_12(50);
   }
  }
 }

 VAR_15->IoStatus.Status = VAR_17;
 FUNC_1(VAR_15, VAR_0);

 return VAR_17;
}
