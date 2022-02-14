
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_20__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_19__ ;
typedef struct TYPE_40__ TYPE_18__ ;
typedef struct TYPE_39__ TYPE_17__ ;
typedef struct TYPE_38__ TYPE_16__ ;
typedef struct TYPE_37__ TYPE_15__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


struct TYPE_51__ {scalar_t__ PhysicalScanActive; } ;
struct TYPE_49__ {TYPE_6__* ScatterGatherSegments; } ;
struct TYPE_47__ {int DataTransferControllerToHost; int NoAutoRequestSense; } ;
struct TYPE_50__ {int DataTransferSize; TYPE_7__ DataTransferMemoryAddress; int IOCTL_Opcode; scalar_t__ ControllerNumber; TYPE_5__ CommandControlBits; void* CommandOpcode; } ;
struct TYPE_48__ {int SegmentByteCount; int SegmentDataPointer; } ;
struct TYPE_45__ {unsigned char LogicalDeviceNumber; } ;
struct TYPE_46__ {int RestoreConsistency; int InitializedAreaOnly; int IOCTL_Opcode; TYPE_3__ LogicalDevice; } ;
struct TYPE_42__ {unsigned short LogicalDeviceNumber; } ;
struct TYPE_44__ {int IOCTL_Opcode; TYPE_1__ LogicalDevice; } ;
struct TYPE_33__ {int DataTransferControllerToHost; int NoAutoRequestSense; } ;
struct TYPE_34__ {int IOCTL_Opcode; TYPE_11__ CommandControlBits; void* CommandOpcode; } ;
struct TYPE_36__ {int PhysicalDeviceState; } ;
struct TYPE_38__ {unsigned short LogicalDeviceNumber; } ;
struct TYPE_39__ {TYPE_14__ DeviceState; void* IOCTL_Opcode; TYPE_16__ LogicalDevice; } ;
struct TYPE_35__ {int OperationDevice; int IOCTL_Opcode; } ;
struct TYPE_40__ {TYPE_8__ ControllerInfo; TYPE_12__ Common; TYPE_4__ ConsistencyCheck; TYPE_2__ LogicalDeviceInfo; TYPE_17__ SetDeviceState; TYPE_13__ DeviceOperation; } ;
struct TYPE_37__ {scalar_t__ CommandStatus; TYPE_18__ CommandMailbox; } ;
struct TYPE_43__ {TYPE_15__ V2; int CommandType; } ;
struct TYPE_32__ {TYPE_9__* NewControllerInformation; int NewControllerInformationDMA; } ;
struct TYPE_41__ {int SuppressEnclosureMessages; int queue_lock; int CommandWaitQueue; TYPE_10__ V2; int ControllerNumber; scalar_t__ UserStatusLength; } ;
typedef int DAC960_V2_ControllerInfo_T ;
typedef TYPE_18__ DAC960_V2_CommandMailbox_T ;
typedef TYPE_19__ DAC960_Controller_T ;
typedef TYPE_20__ DAC960_Command_T ;


 TYPE_20__* FUNC_0 (TYPE_19__*) ;
 int FUNC_1 (TYPE_20__*) ;
 int FUNC_2 (TYPE_20__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_19__*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_4 (TYPE_19__*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_5 (char*,TYPE_19__*,...) ;
 int FUNC_6 (TYPE_20__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (TYPE_20__*,unsigned char,unsigned char,unsigned short*) ;
 int FUNC_8 (TYPE_19__*) ;
 int VAR_15 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (unsigned char*,char*) ;
 scalar_t__ FUNC_13 (unsigned char*,char*,int) ;

__attribute__((used)) static bool FUNC_14(DAC960_Controller_T *VAR_16,
         unsigned char *VAR_17)
{
  DAC960_Command_T *VAR_18;
  DAC960_V2_CommandMailbox_T *VAR_19;
  unsigned long VAR_20;
  unsigned char VAR_21, VAR_22, VAR_23;
  unsigned short VAR_24;

  FUNC_10(&VAR_16->queue_lock, VAR_20);
  while ((VAR_18 = FUNC_0(VAR_16)) == ((void*)0))
    FUNC_8(VAR_16);
  FUNC_11(&VAR_16->queue_lock, VAR_20);
  VAR_16->UserStatusLength = 0;
  FUNC_6(VAR_18);
  VAR_18->CommandType = VAR_0;
  VAR_19 = &VAR_18->V2.CommandMailbox;
  VAR_19->Common.CommandOpcode = VAR_7;
  VAR_19->Common.CommandControlBits.DataTransferControllerToHost = 1;
  VAR_19->Common.CommandControlBits.NoAutoRequestSense = 1;
  if (FUNC_12(VAR_17, "flush-cache") == 0)
    {
      VAR_19->DeviceOperation.IOCTL_Opcode = VAR_9;
      VAR_19->DeviceOperation.OperationDevice =
 VAR_10;
      FUNC_2(VAR_18);
      FUNC_5("Cache Flush Completed\n", VAR_16);
    }
  else if (FUNC_13(VAR_17, "kill", 4) == 0 &&
    FUNC_4(VAR_16, &VAR_17[4],
          &VAR_21, &VAR_22) &&
    FUNC_7(VAR_18, VAR_21, VAR_22,
          &VAR_24))
    {
      VAR_19->SetDeviceState.LogicalDevice.LogicalDeviceNumber =
 VAR_24;
      VAR_19->SetDeviceState.IOCTL_Opcode =
 VAR_13;
      VAR_19->SetDeviceState.DeviceState.PhysicalDeviceState =
 VAR_3;
      FUNC_2(VAR_18);
      FUNC_5("Kill of Physical Device %d:%d %s\n",
     VAR_16, VAR_21, VAR_22,
     (VAR_18->V2.CommandStatus
      == VAR_8
      ? "Succeeded" : "Failed"));
    }
  else if (FUNC_13(VAR_17, "make-online", 11) == 0 &&
    FUNC_4(VAR_16, &VAR_17[11],
          &VAR_21, &VAR_22) &&
    FUNC_7(VAR_18, VAR_21, VAR_22,
          &VAR_24))
    {
      VAR_19->SetDeviceState.LogicalDevice.LogicalDeviceNumber =
 VAR_24;
      VAR_19->SetDeviceState.IOCTL_Opcode =
 VAR_13;
      VAR_19->SetDeviceState.DeviceState.PhysicalDeviceState =
 VAR_4;
      FUNC_2(VAR_18);
      FUNC_5("Make Online of Physical Device %d:%d %s\n",
     VAR_16, VAR_21, VAR_22,
     (VAR_18->V2.CommandStatus
      == VAR_8
      ? "Succeeded" : "Failed"));
    }
  else if (FUNC_13(VAR_17, "make-standby", 12) == 0 &&
    FUNC_4(VAR_16, &VAR_17[12],
          &VAR_21, &VAR_22) &&
    FUNC_7(VAR_18, VAR_21, VAR_22,
          &VAR_24))
    {
      VAR_19->SetDeviceState.LogicalDevice.LogicalDeviceNumber =
 VAR_24;
      VAR_19->SetDeviceState.IOCTL_Opcode =
 VAR_13;
      VAR_19->SetDeviceState.DeviceState.PhysicalDeviceState =
 VAR_5;
      FUNC_2(VAR_18);
      FUNC_5("Make Standby of Physical Device %d:%d %s\n",
     VAR_16, VAR_21, VAR_22,
     (VAR_18->V2.CommandStatus
      == VAR_8
      ? "Succeeded" : "Failed"));
    }
  else if (FUNC_13(VAR_17, "rebuild", 7) == 0 &&
    FUNC_4(VAR_16, &VAR_17[7],
          &VAR_21, &VAR_22) &&
    FUNC_7(VAR_18, VAR_21, VAR_22,
          &VAR_24))
    {
      VAR_19->LogicalDeviceInfo.LogicalDevice.LogicalDeviceNumber =
 VAR_24;
      VAR_19->LogicalDeviceInfo.IOCTL_Opcode =
 VAR_11;
      FUNC_2(VAR_18);
      FUNC_5("Rebuild of Physical Device %d:%d %s\n",
     VAR_16, VAR_21, VAR_22,
     (VAR_18->V2.CommandStatus
      == VAR_8
      ? "Initiated" : "Not Initiated"));
    }
  else if (FUNC_13(VAR_17, "cancel-rebuild", 14) == 0 &&
    FUNC_4(VAR_16, &VAR_17[14],
          &VAR_21, &VAR_22) &&
    FUNC_7(VAR_18, VAR_21, VAR_22,
          &VAR_24))
    {
      VAR_19->LogicalDeviceInfo.LogicalDevice.LogicalDeviceNumber =
 VAR_24;
      VAR_19->LogicalDeviceInfo.IOCTL_Opcode =
 VAR_12;
      FUNC_2(VAR_18);
      FUNC_5("Rebuild of Physical Device %d:%d %s\n",
     VAR_16, VAR_21, VAR_22,
     (VAR_18->V2.CommandStatus
      == VAR_8
      ? "Cancelled" : "Not Cancelled"));
    }
  else if (FUNC_13(VAR_17, "check-consistency", 17) == 0 &&
    FUNC_3(VAR_16, &VAR_17[17],
        &VAR_23))
    {
      VAR_19->ConsistencyCheck.LogicalDevice.LogicalDeviceNumber =
 VAR_23;
      VAR_19->ConsistencyCheck.IOCTL_Opcode =
 VAR_1;
      VAR_19->ConsistencyCheck.RestoreConsistency = 1;
      VAR_19->ConsistencyCheck.InitializedAreaOnly = 0;
      FUNC_2(VAR_18);
      FUNC_5("Consistency Check of Logical Drive %d "
     "(/dev/rd/c%dd%d) %s\n",
     VAR_16, VAR_23,
     VAR_16->ControllerNumber,
     VAR_23,
     (VAR_18->V2.CommandStatus
      == VAR_8
      ? "Initiated" : "Not Initiated"));
    }
  else if (FUNC_13(VAR_17, "cancel-consistency-check", 24) == 0 &&
    FUNC_3(VAR_16, &VAR_17[24],
        &VAR_23))
    {
      VAR_19->ConsistencyCheck.LogicalDevice.LogicalDeviceNumber =
 VAR_23;
      VAR_19->ConsistencyCheck.IOCTL_Opcode =
 VAR_2;
      FUNC_2(VAR_18);
      FUNC_5("Consistency Check of Logical Drive %d "
     "(/dev/rd/c%dd%d) %s\n",
     VAR_16, VAR_23,
     VAR_16->ControllerNumber,
     VAR_23,
     (VAR_18->V2.CommandStatus
      == VAR_8
      ? "Cancelled" : "Not Cancelled"));
    }
  else if (FUNC_12(VAR_17, "perform-discovery") == 0)
    {
      VAR_19->Common.IOCTL_Opcode = VAR_14;
      FUNC_2(VAR_18);
      FUNC_5("Discovery %s\n", VAR_16,
     (VAR_18->V2.CommandStatus
      == VAR_8
      ? "Initiated" : "Not Initiated"));
      if (VAR_18->V2.CommandStatus == VAR_8)
 {
   VAR_19->ControllerInfo.CommandOpcode = VAR_7;
   VAR_19->ControllerInfo.CommandControlBits
     .DataTransferControllerToHost = 1;
   VAR_19->ControllerInfo.CommandControlBits
     .NoAutoRequestSense = 1;
   VAR_19->ControllerInfo.DataTransferSize =
     sizeof(DAC960_V2_ControllerInfo_T);
   VAR_19->ControllerInfo.ControllerNumber = 0;
   VAR_19->ControllerInfo.IOCTL_Opcode =
     VAR_6;




   VAR_19->ControllerInfo.DataTransferMemoryAddress
     .ScatterGatherSegments[0]
     .SegmentDataPointer =
     VAR_16->V2.NewControllerInformationDMA;
   VAR_19->ControllerInfo.DataTransferMemoryAddress
     .ScatterGatherSegments[0]
     .SegmentByteCount =
     VAR_19->ControllerInfo.DataTransferSize;
   FUNC_2(VAR_18);
   while (VAR_16->V2.NewControllerInformation->PhysicalScanActive)
     {
       FUNC_2(VAR_18);
       FUNC_9(&VAR_16->CommandWaitQueue, VAR_15);
     }
   FUNC_5("Discovery Completed\n", VAR_16);
  }
    }
  else if (FUNC_12(VAR_17, "suppress-enclosure-messages") == 0)
    VAR_16->SuppressEnclosureMessages = 1;
  else FUNC_5("Illegal User Command: '%s'\n",
      VAR_16, VAR_17);

  FUNC_10(&VAR_16->queue_lock, VAR_20);
  FUNC_1(VAR_18);
  FUNC_11(&VAR_16->queue_lock, VAR_20);
  return 1;
}
