
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_24__ {TYPE_4__* ScatterGatherSegments; } ;
struct TYPE_25__ {int DataTransferSize; TYPE_5__ DataTransferMemoryAddress; } ;
struct TYPE_21__ {unsigned char TargetID; unsigned char Channel; } ;
struct TYPE_20__ {int DataTransferControllerToHost; int NoAutoRequestSense; } ;
struct TYPE_22__ {int DataTransferSize; int IOCTL_Opcode; TYPE_2__ PhysicalDevice; TYPE_1__ CommandControlBits; int CommandOpcode; } ;
struct TYPE_17__ {TYPE_6__ Common; TYPE_3__ PhysicalDeviceInfo; } ;
struct TYPE_28__ {scalar_t__ CommandStatus; TYPE_10__ CommandMailbox; } ;
struct TYPE_27__ {TYPE_7__* PhysicalToLogicalDevice; int PhysicalToLogicalDeviceDMA; } ;
struct TYPE_26__ {unsigned short LogicalDeviceNumber; } ;
struct TYPE_23__ {int SegmentByteCount; int SegmentDataPointer; } ;
struct TYPE_19__ {TYPE_9__ V2; TYPE_11__* Controller; } ;
struct TYPE_18__ {TYPE_8__ V2; } ;
typedef int DAC960_V2_PhysicalToLogicalDevice_T ;
typedef TYPE_10__ DAC960_V2_CommandMailbox_T ;
typedef TYPE_11__ DAC960_Controller_T ;
typedef TYPE_12__ DAC960_Command_T ;


 int FUNC_0 (TYPE_12__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_10__*,TYPE_10__*,int) ;

__attribute__((used)) static bool FUNC_2(DAC960_Command_T *VAR_3,
       unsigned char VAR_4,
       unsigned char VAR_5,
       unsigned short
         *VAR_6)
{
  DAC960_V2_CommandMailbox_T VAR_7, *VAR_8;
  DAC960_Controller_T *VAR_9 = VAR_3->Controller;

  VAR_8 = &VAR_3->V2.CommandMailbox;
  FUNC_1(&VAR_7, VAR_8,
  sizeof(DAC960_V2_CommandMailbox_T));

  VAR_8->PhysicalDeviceInfo.CommandOpcode = VAR_0;
  VAR_8->PhysicalDeviceInfo.CommandControlBits
        .DataTransferControllerToHost = 1;
  VAR_8->PhysicalDeviceInfo.CommandControlBits
        .NoAutoRequestSense = 1;
  VAR_8->PhysicalDeviceInfo.DataTransferSize =
    sizeof(DAC960_V2_PhysicalToLogicalDevice_T);
  VAR_8->PhysicalDeviceInfo.PhysicalDevice.TargetID = VAR_5;
  VAR_8->PhysicalDeviceInfo.PhysicalDevice.Channel = VAR_4;
  VAR_8->PhysicalDeviceInfo.IOCTL_Opcode =
    VAR_2;
  VAR_8->Common.DataTransferMemoryAddress
   .ScatterGatherSegments[0]
   .SegmentDataPointer =
      VAR_9->V2.PhysicalToLogicalDeviceDMA;
  VAR_8->Common.DataTransferMemoryAddress
   .ScatterGatherSegments[0]
   .SegmentByteCount =
      VAR_8->Common.DataTransferSize;

  FUNC_0(VAR_3);
  *VAR_6 = VAR_9->V2.PhysicalToLogicalDevice->LogicalDeviceNumber;

  FUNC_1(VAR_8, &VAR_7,
  sizeof(DAC960_V2_CommandMailbox_T));
  return (VAR_3->V2.CommandStatus == VAR_1);
}
