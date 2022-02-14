
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct scatterlist {int dummy; } ;
struct TYPE_15__ {int * LogicalDriveToVirtualDevice; } ;
struct TYPE_23__ {TYPE_1__ V2; } ;
struct TYPE_17__ {int ScatterGatherList0Length; int ScatterGatherList0Address; } ;
struct TYPE_19__ {TYPE_7__* ScatterGatherSegments; TYPE_3__ ExtendedScatterGather; } ;
struct TYPE_16__ {int DataTransferControllerToHost; int AdditionalScatterGatherListMemory; } ;
struct TYPE_20__ {int DataTransferSize; int RequestSenseSize; int CDBLength; int* SCSI_CDB; TYPE_5__ DataTransferMemoryAddress; TYPE_2__ CommandControlBits; int PhysicalDevice; int RequestSenseBusAddress; int CommandOpcode; } ;
struct TYPE_22__ {TYPE_6__ SCSI_10; } ;
struct TYPE_21__ {int SegmentByteCount; void* SegmentDataPointer; } ;
struct TYPE_18__ {int ScatterGatherListDMA; TYPE_7__* ScatterGatherList; int RequestSenseDMA; struct scatterlist* ScatterList; TYPE_8__ CommandMailbox; } ;
struct TYPE_14__ {scalar_t__ DmaDirection; int BlockCount; size_t LogicalDriveNumber; int BlockNumber; int SegmentCount; TYPE_4__ V2; TYPE_9__* Controller; } ;
typedef TYPE_7__ DAC960_V2_ScatterGatherSegment_T ;
typedef TYPE_8__ DAC960_V2_CommandMailbox_T ;
typedef int DAC960_SCSI_RequestSense_T ;
typedef TYPE_9__ DAC960_Controller_T ;
typedef TYPE_10__ DAC960_Command_T ;
typedef int DAC960_ByteCount64_T ;
typedef void* DAC960_BusAddress64_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(DAC960_Command_T *VAR_3)
{
  DAC960_Controller_T *VAR_4 = VAR_3->Controller;
  DAC960_V2_CommandMailbox_T *VAR_5 = &VAR_3->V2.CommandMailbox;
  struct scatterlist *VAR_6 = VAR_3->V2.ScatterList;

  FUNC_1(VAR_3);

  VAR_5->SCSI_10.CommandOpcode = VAR_1;
  VAR_5->SCSI_10.CommandControlBits.DataTransferControllerToHost =
    (VAR_3->DmaDirection == VAR_2);
  VAR_5->SCSI_10.DataTransferSize =
    VAR_3->BlockCount << VAR_0;
  VAR_5->SCSI_10.RequestSenseBusAddress = VAR_3->V2.RequestSenseDMA;
  VAR_5->SCSI_10.PhysicalDevice =
    VAR_4->V2.LogicalDriveToVirtualDevice[VAR_3->LogicalDriveNumber];
  VAR_5->SCSI_10.RequestSenseSize = sizeof(DAC960_SCSI_RequestSense_T);
  VAR_5->SCSI_10.CDBLength = 10;
  VAR_5->SCSI_10.SCSI_CDB[0] =
    (VAR_3->DmaDirection == VAR_2 ? 0x28 : 0x2A);
  VAR_5->SCSI_10.SCSI_CDB[2] = VAR_3->BlockNumber >> 24;
  VAR_5->SCSI_10.SCSI_CDB[3] = VAR_3->BlockNumber >> 16;
  VAR_5->SCSI_10.SCSI_CDB[4] = VAR_3->BlockNumber >> 8;
  VAR_5->SCSI_10.SCSI_CDB[5] = VAR_3->BlockNumber;
  VAR_5->SCSI_10.SCSI_CDB[7] = VAR_3->BlockCount >> 8;
  VAR_5->SCSI_10.SCSI_CDB[8] = VAR_3->BlockCount;

  if (VAR_3->SegmentCount == 1)
    {
      VAR_5->SCSI_10.DataTransferMemoryAddress
        .ScatterGatherSegments[0]
        .SegmentDataPointer =
 (DAC960_BusAddress64_T)FUNC_2(VAR_6);
      VAR_5->SCSI_10.DataTransferMemoryAddress
        .ScatterGatherSegments[0]
        .SegmentByteCount =
 VAR_5->SCSI_10.DataTransferSize;
    }
  else
    {
      DAC960_V2_ScatterGatherSegment_T *VAR_7;
      int VAR_8;

      if (VAR_3->SegmentCount > 2)
 {
          VAR_7 = VAR_3->V2.ScatterGatherList;
   VAR_5->SCSI_10.CommandControlBits
    .AdditionalScatterGatherListMemory = 1;
   VAR_5->SCSI_10.DataTransferMemoryAddress
  .ExtendedScatterGather.ScatterGatherList0Length = VAR_3->SegmentCount;
   VAR_5->SCSI_10.DataTransferMemoryAddress
    .ExtendedScatterGather.ScatterGatherList0Address =
     VAR_3->V2.ScatterGatherListDMA;
 }
      else
 VAR_7 = VAR_5->SCSI_10.DataTransferMemoryAddress
     .ScatterGatherSegments;

      for (VAR_8 = 0; VAR_8 < VAR_3->SegmentCount; VAR_8++, VAR_6++, VAR_7++) {
  VAR_7->SegmentDataPointer =
   (DAC960_BusAddress64_T)FUNC_2(VAR_6);
  VAR_7->SegmentByteCount =
   (DAC960_ByteCount64_T)FUNC_3(VAR_6);
      }
    }
  FUNC_0(VAR_3);
}
