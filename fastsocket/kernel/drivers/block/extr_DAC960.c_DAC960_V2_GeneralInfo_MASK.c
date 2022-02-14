
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_3__* ScatterGatherSegments; } ;
struct TYPE_16__ {int DataTransferControllerToHost; int NoAutoRequestSense; } ;
struct TYPE_20__ {int DataTransferSize; TYPE_4__ DataTransferMemoryAddress; int IOCTL_Opcode; TYPE_1__ CommandControlBits; int CommandOpcode; } ;
struct TYPE_22__ {TYPE_5__ Common; } ;
struct TYPE_21__ {scalar_t__ CommandStatus; TYPE_7__ CommandMailbox; } ;
struct TYPE_24__ {TYPE_6__ V2; int CommandType; } ;
struct TYPE_17__ {int HealthStatusBufferDMA; } ;
struct TYPE_23__ {TYPE_2__ V2; } ;
struct TYPE_18__ {int SegmentByteCount; int SegmentDataPointer; } ;
typedef int DAC960_V2_HealthStatusBuffer_T ;
typedef scalar_t__ DAC960_V2_CommandStatus_T ;
typedef TYPE_7__ DAC960_V2_CommandMailbox_T ;
typedef TYPE_8__ DAC960_Controller_T ;
typedef TYPE_9__ DAC960_Command_T ;


 TYPE_9__* FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_9__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_4(DAC960_Controller_T *VAR_4)
{
  DAC960_Command_T *VAR_5 = FUNC_0(VAR_4);
  DAC960_V2_CommandMailbox_T *VAR_6 = &VAR_5->V2.CommandMailbox;
  DAC960_V2_CommandStatus_T VAR_7;
  FUNC_3(VAR_5);
  VAR_5->CommandType = VAR_0;
  VAR_6->Common.CommandOpcode = VAR_2;
  VAR_6->Common.CommandControlBits
   .DataTransferControllerToHost = 1;
  VAR_6->Common.CommandControlBits
   .NoAutoRequestSense = 1;
  VAR_6->Common.DataTransferSize = sizeof(DAC960_V2_HealthStatusBuffer_T);
  VAR_6->Common.IOCTL_Opcode = VAR_1;
  VAR_6->Common.DataTransferMemoryAddress
   .ScatterGatherSegments[0]
   .SegmentDataPointer =
    VAR_4->V2.HealthStatusBufferDMA;
  VAR_6->Common.DataTransferMemoryAddress
   .ScatterGatherSegments[0]
   .SegmentByteCount =
    VAR_6->Common.DataTransferSize;
  FUNC_2(VAR_5);
  VAR_7 = VAR_5->V2.CommandStatus;
  FUNC_1(VAR_5);
  return (VAR_7 == VAR_3);
}
