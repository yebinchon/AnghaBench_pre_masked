
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_4__* ScatterGatherSegments; } ;
struct TYPE_14__ {int DataTransferControllerToHost; int NoAutoRequestSense; } ;
struct TYPE_18__ {int DataTransferSize; TYPE_5__ DataTransferMemoryAddress; int IOCTL_Opcode; scalar_t__ ControllerNumber; TYPE_2__ CommandControlBits; int CommandOpcode; } ;
struct TYPE_19__ {TYPE_6__ ControllerInfo; } ;
struct TYPE_13__ {TYPE_7__ CommandMailbox; } ;
struct TYPE_21__ {int CommandType; TYPE_1__ V2; TYPE_8__* Controller; } ;
struct TYPE_15__ {int NewControllerInformationDMA; } ;
struct TYPE_20__ {TYPE_3__ V2; } ;
struct TYPE_16__ {int SegmentByteCount; int SegmentDataPointer; } ;
typedef int DAC960_V2_ControllerInfo_T ;
typedef TYPE_7__ DAC960_V2_CommandMailbox_T ;
typedef TYPE_8__ DAC960_Controller_T ;
typedef TYPE_9__ DAC960_Command_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(DAC960_Command_T *VAR_3)
{
  DAC960_Controller_T *VAR_4 = VAR_3->Controller;
  DAC960_V2_CommandMailbox_T *VAR_5 = &VAR_3->V2.CommandMailbox;
  FUNC_1(VAR_3);
  VAR_3->CommandType = VAR_0;
  VAR_5->ControllerInfo.CommandOpcode = VAR_2;
  VAR_5->ControllerInfo.CommandControlBits
    .DataTransferControllerToHost = 1;
  VAR_5->ControllerInfo.CommandControlBits
    .NoAutoRequestSense = 1;
  VAR_5->ControllerInfo.DataTransferSize =
    sizeof(DAC960_V2_ControllerInfo_T);
  VAR_5->ControllerInfo.ControllerNumber = 0;
  VAR_5->ControllerInfo.IOCTL_Opcode = VAR_1;
  VAR_5->ControllerInfo.DataTransferMemoryAddress
    .ScatterGatherSegments[0]
    .SegmentDataPointer =
    VAR_4->V2.NewControllerInformationDMA;
  VAR_5->ControllerInfo.DataTransferMemoryAddress
    .ScatterGatherSegments[0]
    .SegmentByteCount =
    VAR_5->ControllerInfo.DataTransferSize;
  FUNC_0(VAR_3);
}
