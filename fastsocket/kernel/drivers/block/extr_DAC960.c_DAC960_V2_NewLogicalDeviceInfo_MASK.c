
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_20__ {int NewLogicalDeviceInformationDMA; } ;
struct TYPE_26__ {TYPE_3__ V2; } ;
struct TYPE_22__ {TYPE_4__* ScatterGatherSegments; } ;
struct TYPE_19__ {unsigned short LogicalDeviceNumber; } ;
struct TYPE_18__ {int DataTransferControllerToHost; int NoAutoRequestSense; } ;
struct TYPE_23__ {int DataTransferSize; TYPE_5__ DataTransferMemoryAddress; int IOCTL_Opcode; TYPE_2__ LogicalDevice; TYPE_1__ CommandControlBits; int CommandOpcode; } ;
struct TYPE_25__ {TYPE_6__ LogicalDeviceInfo; } ;
struct TYPE_24__ {scalar_t__ CommandStatus; TYPE_8__ CommandMailbox; } ;
struct TYPE_21__ {int SegmentByteCount; int SegmentDataPointer; } ;
struct TYPE_17__ {TYPE_7__ V2; int CommandType; } ;
typedef int DAC960_V2_LogicalDeviceInfo_T ;
typedef scalar_t__ DAC960_V2_CommandStatus_T ;
typedef TYPE_8__ DAC960_V2_CommandMailbox_T ;
typedef TYPE_9__ DAC960_Controller_T ;
typedef TYPE_10__ DAC960_Command_T ;


 TYPE_10__* FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_10__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_4(DAC960_Controller_T *VAR_4,
        unsigned short VAR_5)
{
  DAC960_Command_T *VAR_6 = FUNC_0(VAR_4);
  DAC960_V2_CommandMailbox_T *VAR_7 = &VAR_6->V2.CommandMailbox;
  DAC960_V2_CommandStatus_T VAR_8;

  FUNC_3(VAR_6);
  VAR_6->CommandType = VAR_0;
  VAR_7->LogicalDeviceInfo.CommandOpcode =
    VAR_2;
  VAR_7->LogicalDeviceInfo.CommandControlBits
       .DataTransferControllerToHost = 1;
  VAR_7->LogicalDeviceInfo.CommandControlBits
       .NoAutoRequestSense = 1;
  VAR_7->LogicalDeviceInfo.DataTransferSize =
    sizeof(DAC960_V2_LogicalDeviceInfo_T);
  VAR_7->LogicalDeviceInfo.LogicalDevice.LogicalDeviceNumber =
    VAR_5;
  VAR_7->LogicalDeviceInfo.IOCTL_Opcode = VAR_1;
  VAR_7->LogicalDeviceInfo.DataTransferMemoryAddress
       .ScatterGatherSegments[0]
       .SegmentDataPointer =
     VAR_4->V2.NewLogicalDeviceInformationDMA;
  VAR_7->LogicalDeviceInfo.DataTransferMemoryAddress
       .ScatterGatherSegments[0]
       .SegmentByteCount =
    VAR_7->LogicalDeviceInfo.DataTransferSize;
  FUNC_2(VAR_6);
  VAR_8 = VAR_6->V2.CommandStatus;
  FUNC_1(VAR_6);
  return (VAR_8 == VAR_3);
}
