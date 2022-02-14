
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {int PsrNumEntries; int Fbr0NumEntries; int Fbr1NumEntries; } ;
struct et131x_adapter {int RegistryJumboPacket; int Flags; TYPE_3__* netdev; TYPE_5__* pdev; TYPE_2__ RxRing; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int Fbr0BufferSize; int Fbr0NumEntries; int Fbr1BufferSize; int Fbr1NumEntries; int pFbr1RingPa; int Fbr1Realpa; int Fbr1offset; int pFbr0RingPa; int Fbr0Realpa; int Fbr0offset; int* Fbr1MemPa; int* Fbr0MemPa; int pPSRingPa; int pPSRingRealPa; int pPSRingOffset; int pRxStatusPa; int RxStatusRealPA; int RxStatusOffset; int RecvPendingList; int RecvList; int RecvLookaside; int NumRfd; void* pRxStatusVa; void* pPSRingVa; TYPE_1__** Fbr; void** Fbr0MemVa; void** Fbr1MemVa; void* pFbr0RingVa; void* pFbr1RingVa; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {int* PAHigh; int* PALow; int ** Va; int ** Buffer2; int ** Buffer1; } ;
typedef int RX_STATUS_BLOCK_t ;
typedef TYPE_4__ RX_RING_t ;
typedef int PKT_STAT_DESC_t ;
typedef int MP_RFD ;
typedef int FBR_DESC_t ;
typedef int FBRLOOKUPTABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct et131x_adapter*,int*,int*,int) ;
 int VAR_6 ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int ,int,int *) ;
 void* FUNC_5 (TYPE_5__*,int,int*) ;

int FUNC_6(struct et131x_adapter *VAR_7)
{
 uint32_t VAR_8, VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11, VAR_12;
 RX_RING_t *VAR_13;


 VAR_13 = (RX_RING_t *) &VAR_7->RxRing;






 VAR_13->Fbr[1] = FUNC_3(sizeof(FBRLOOKUPTABLE), VAR_2);
 if (VAR_7->RegistryJumboPacket < 2048) {




  VAR_13->Fbr1BufferSize = 2048;
  VAR_13->Fbr1NumEntries = 512;
 } else if (VAR_7->RegistryJumboPacket < 4096) {




  VAR_13->Fbr1BufferSize = 4096;
  VAR_13->Fbr1NumEntries = 512;
 } else {




  VAR_13->Fbr1BufferSize = 16384;
  VAR_13->Fbr1NumEntries = 128;
 }





 VAR_7->RxRing.PsrNumEntries = VAR_7->RxRing.Fbr1NumEntries;



 VAR_10 = (sizeof(FBR_DESC_t) * VAR_13->Fbr1NumEntries) + 0xfff;
 VAR_13->pFbr1RingVa = FUNC_5(VAR_7->pdev,
          VAR_10,
          &VAR_13->pFbr1RingPa);
 if (!VAR_13->pFbr1RingVa) {
  FUNC_1(&VAR_7->pdev->dev,
     "Cannot alloc memory for Free Buffer Ring 1\n");
  return -VAR_0;
 }
 VAR_13->Fbr1Realpa = VAR_13->pFbr1RingPa;


 FUNC_2(VAR_7,
          &VAR_13->Fbr1Realpa,
          &VAR_13->Fbr1offset, 0x0FFF);

 VAR_13->pFbr1RingVa = (void *)((uint8_t *) VAR_13->pFbr1RingVa +
     VAR_13->Fbr1offset);
 for (VAR_8 = 0; VAR_8 < (VAR_13->Fbr1NumEntries / VAR_1);
      VAR_8++) {
  uint64_t VAR_14;
  uint64_t VAR_15;
  uint32_t VAR_16;
  if (VAR_13->Fbr1BufferSize > 4096)
   VAR_16 = 4096;
  else
   VAR_16 = VAR_13->Fbr1BufferSize;

  VAR_12 =
      (VAR_1 * VAR_13->Fbr1BufferSize) + VAR_16 - 1;
  VAR_13->Fbr1MemVa[VAR_8] =
      FUNC_5(VAR_7->pdev, VAR_12,
      &VAR_13->Fbr1MemPa[VAR_8]);

  if (!VAR_13->Fbr1MemVa[VAR_8]) {
  FUNC_1(&VAR_7->pdev->dev,
    "Could not alloc memory\n");
   return -VAR_0;
  }


  VAR_15 = VAR_13->Fbr1MemPa[VAR_8];

  FUNC_2(VAR_7,
           &VAR_15,
           &VAR_14, (VAR_16 - 1));

  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   uint32_t VAR_17 = (VAR_8 * VAR_1) + VAR_9;




   VAR_13->Fbr[1]->Va[VAR_17] =
       (uint8_t *) VAR_13->Fbr1MemVa[VAR_8] +
       (VAR_9 * VAR_13->Fbr1BufferSize) + VAR_14;




   VAR_13->Fbr[1]->PAHigh[VAR_17] =
       (uint32_t) (VAR_15 >> 32);
   VAR_13->Fbr[1]->PALow[VAR_17] = (uint32_t) VAR_15;

   VAR_15 += VAR_13->Fbr1BufferSize;

   VAR_13->Fbr[1]->Buffer1[VAR_17] =
       VAR_13->Fbr[1]->Va[VAR_17];
   VAR_13->Fbr[1]->Buffer2[VAR_17] =
       VAR_13->Fbr[1]->Va[VAR_17] - 4;
  }
 }
 VAR_11 =
     sizeof(PKT_STAT_DESC_t) * VAR_7->RxRing.PsrNumEntries;

 VAR_13->pPSRingVa = FUNC_5(VAR_7->pdev,
        VAR_11 + 0x0fff,
        &VAR_13->pPSRingPa);

 if (!VAR_13->pPSRingVa) {
  FUNC_1(&VAR_7->pdev->dev,
     "Cannot alloc memory for Packet Status Ring\n");
  return -VAR_0;
 }
 VAR_13->pPSRingRealPa = VAR_13->pPSRingPa;


 FUNC_2(VAR_7,
          &VAR_13->pPSRingRealPa,
          &VAR_13->pPSRingOffset, 0x0FFF);

 VAR_13->pPSRingVa = (void *)((uint8_t *) VAR_13->pPSRingVa +
          VAR_13->pPSRingOffset);


 VAR_13->pRxStatusVa = FUNC_5(VAR_7->pdev,
          sizeof(RX_STATUS_BLOCK_t) +
          0x7, &VAR_13->pRxStatusPa);
 if (!VAR_13->pRxStatusVa) {
  FUNC_1(&VAR_7->pdev->dev,
     "Cannot alloc memory for Status Block\n");
  return -VAR_0;
 }


 VAR_13->RxStatusRealPA = VAR_13->pRxStatusPa;


 FUNC_2(VAR_7,
          &VAR_13->RxStatusRealPA,
          &VAR_13->RxStatusOffset, 0x07);

 VAR_13->pRxStatusVa = (void *)((uint8_t *) VAR_13->pRxStatusVa +
     VAR_13->RxStatusOffset);
 VAR_13->NumRfd = VAR_3;







 VAR_13->RecvLookaside = FUNC_4(VAR_7->netdev->name,
         sizeof(MP_RFD),
         0,
         VAR_4 |
         VAR_5,
         ((void*)0));

 VAR_7->Flags |= VAR_6;




 FUNC_0(&VAR_13->RecvList);
 FUNC_0(&VAR_13->RecvPendingList);
 return 0;
}
