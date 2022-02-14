
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_10__ {int LogicalDriveNumber; int TransferLength; } ;
struct TYPE_12__ {int ScatterGatherCount; void* BusAddress; int LogicalBlockAddress; TYPE_1__ LD; int CommandOpcode; } ;
struct TYPE_14__ {TYPE_3__ Type5; } ;
struct TYPE_11__ {void* ScatterGatherListDMA; struct scatterlist* ScatterList; TYPE_4__* ScatterGatherList; TYPE_5__ CommandMailbox; } ;
struct TYPE_15__ {int SegmentCount; scalar_t__ DmaDirection; TYPE_2__ V1; int BlockNumber; int LogicalDriveNumber; int BlockCount; int * Controller; } ;
struct TYPE_13__ {scalar_t__ SegmentByteCount; void* SegmentDataPointer; } ;
typedef TYPE_4__ DAC960_V1_ScatterGatherSegment_T ;
typedef TYPE_5__ DAC960_V1_CommandMailbox_T ;
typedef int DAC960_Controller_T ;
typedef TYPE_6__ DAC960_Command_T ;
typedef scalar_t__ DAC960_ByteCount32_T ;
typedef void* DAC960_BusAddress32_T ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(DAC960_Command_T *VAR_5)
{
  DAC960_Controller_T *VAR_6 = VAR_5->Controller;
  DAC960_V1_CommandMailbox_T *VAR_7 = &VAR_5->V1.CommandMailbox;
  DAC960_V1_ScatterGatherSegment_T *VAR_8 =
     VAR_5->V1.ScatterGatherList;
  struct scatterlist *VAR_9 = VAR_5->V1.ScatterList;

  FUNC_1(VAR_5);

  if (VAR_5->SegmentCount == 1)
    {
      if (VAR_5->DmaDirection == VAR_4)
 VAR_7->Type5.CommandOpcode = VAR_0;
      else
        VAR_7->Type5.CommandOpcode = VAR_2;

      VAR_7->Type5.LD.TransferLength = VAR_5->BlockCount;
      VAR_7->Type5.LD.LogicalDriveNumber = VAR_5->LogicalDriveNumber;
      VAR_7->Type5.LogicalBlockAddress = VAR_5->BlockNumber;
      VAR_7->Type5.BusAddress =
   (DAC960_BusAddress32_T)FUNC_2(VAR_9);
    }
  else
    {
      int VAR_10;

      if (VAR_5->DmaDirection == VAR_4)
 VAR_7->Type5.CommandOpcode = VAR_1;
      else
 VAR_7->Type5.CommandOpcode = VAR_3;

      VAR_7->Type5.LD.TransferLength = VAR_5->BlockCount;
      VAR_7->Type5.LD.LogicalDriveNumber = VAR_5->LogicalDriveNumber;
      VAR_7->Type5.LogicalBlockAddress = VAR_5->BlockNumber;
      VAR_7->Type5.BusAddress = VAR_5->V1.ScatterGatherListDMA;

      VAR_7->Type5.ScatterGatherCount = VAR_5->SegmentCount;

      for (VAR_10 = 0; VAR_10 < VAR_5->SegmentCount; VAR_10++, VAR_9++, VAR_8++) {
  VAR_8->SegmentDataPointer =
   (DAC960_BusAddress32_T)FUNC_2(VAR_9);
  VAR_8->SegmentByteCount =
   (DAC960_ByteCount32_T)FUNC_3(VAR_9);
      }
    }
  FUNC_0(VAR_5);
}
