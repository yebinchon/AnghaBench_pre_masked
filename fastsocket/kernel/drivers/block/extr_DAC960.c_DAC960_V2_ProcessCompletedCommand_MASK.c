
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_71__ TYPE_9__ ;
typedef struct TYPE_70__ TYPE_8__ ;
typedef struct TYPE_69__ TYPE_7__ ;
typedef struct TYPE_68__ TYPE_6__ ;
typedef struct TYPE_67__ TYPE_5__ ;
typedef struct TYPE_66__ TYPE_4__ ;
typedef struct TYPE_65__ TYPE_3__ ;
typedef struct TYPE_64__ TYPE_33__ ;
typedef struct TYPE_63__ TYPE_2__ ;
typedef struct TYPE_62__ TYPE_26__ ;
typedef struct TYPE_61__ TYPE_25__ ;
typedef struct TYPE_60__ TYPE_23__ ;
typedef struct TYPE_59__ TYPE_21__ ;
typedef struct TYPE_58__ TYPE_1__ ;
typedef struct TYPE_57__ TYPE_19__ ;
typedef struct TYPE_56__ TYPE_18__ ;
typedef struct TYPE_55__ TYPE_17__ ;
typedef struct TYPE_54__ TYPE_16__ ;
typedef struct TYPE_53__ TYPE_15__ ;
typedef struct TYPE_52__ TYPE_14__ ;
typedef struct TYPE_51__ TYPE_13__ ;
typedef struct TYPE_50__ TYPE_12__ ;
typedef struct TYPE_49__ TYPE_11__ ;
typedef struct TYPE_48__ TYPE_10__ ;


struct TYPE_71__ {int SegmentByteCount; int SegmentDataPointer; } ;
struct TYPE_70__ {scalar_t__ LogicalUnit; scalar_t__ TargetID; scalar_t__ Channel; } ;
struct TYPE_68__ {TYPE_5__* ScatterGatherSegments; } ;
struct TYPE_69__ {int DataTransferSize; int EventSequenceNumberHigh16; int EventSequenceNumberLow16; TYPE_6__ DataTransferMemoryAddress; scalar_t__ IOCTL_Opcode; scalar_t__ ControllerNumber; void* CommandOpcode; } ;
struct TYPE_67__ {int SegmentByteCount; int SegmentDataPointer; } ;
struct TYPE_66__ {scalar_t__ NextEventSequenceNumber; } ;
struct TYPE_65__ {scalar_t__ LogicalDeviceInitialized; } ;
struct TYPE_64__ {scalar_t__ expires; } ;
struct TYPE_63__ {scalar_t__ SenseKey; } ;
struct TYPE_53__ {TYPE_14__* ScatterGatherSegments; } ;
struct TYPE_50__ {unsigned short LogicalDeviceNumber; } ;
struct TYPE_54__ {int DataTransferSize; TYPE_15__ DataTransferMemoryAddress; scalar_t__ IOCTL_Opcode; TYPE_12__ LogicalDevice; void* CommandOpcode; } ;
struct TYPE_48__ {TYPE_9__* ScatterGatherSegments; } ;
struct TYPE_49__ {int DataTransferSize; TYPE_10__ DataTransferMemoryAddress; scalar_t__ IOCTL_Opcode; TYPE_8__ PhysicalDevice; void* CommandOpcode; } ;
struct TYPE_58__ {scalar_t__ IOCTL_Opcode; } ;
struct TYPE_60__ {TYPE_16__ LogicalDeviceInfo; TYPE_11__ PhysicalDeviceInfo; TYPE_7__ GetEvent; TYPE_1__ Common; } ;
struct TYPE_55__ {scalar_t__ CommandStatus; TYPE_21__* KernelCommand; int DataTransferResidue; int RequestSenseLength; TYPE_2__* RequestSense; TYPE_23__ CommandMailbox; } ;
struct TYPE_62__ {scalar_t__ CommandType; TYPE_17__ V2; int * Completion; TYPE_25__* Controller; } ;
struct TYPE_57__ {scalar_t__ LogicalDevicesCritical; scalar_t__ LogicalDevicesOffline; scalar_t__ PhysicalDisksCritical; scalar_t__ PhysicalDisksOffline; scalar_t__ Channel; scalar_t__ TargetID; scalar_t__ LogicalUnit; scalar_t__ PhysicalDeviceState; int PeripheralDeviceType; scalar_t__ SoftErrors; scalar_t__ HardErrors; scalar_t__ MiscellaneousErrors; scalar_t__ Retries; scalar_t__ Aborts; scalar_t__ PredictedFailuresDetected; unsigned short LogicalDeviceNumber; unsigned long ConfigurableDeviceSize; scalar_t__ LogicalDeviceState; scalar_t__ CommandsFailed; scalar_t__ DeferredWriteErrors; TYPE_3__ LogicalDeviceControl; scalar_t__ BackgroundInitializationInProgress; int PatrolOperationBlockNumber; scalar_t__ PatrolOperationInProgress; int DataMigrationBlockNumber; scalar_t__ DataMigrationInProgress; int ForegroundInitializationBlockNumber; scalar_t__ ForegroundInitializationInProgress; int BackgroundInitializationBlockNumber; int RebuildBlockNumber; scalar_t__ RebuildInProgress; int ConsistencyCheckBlockNumber; scalar_t__ ConsistencyCheckInProgress; int CommandTimeouts; int ParityErrors; int LogicalDevicesPresent; } ;
struct TYPE_51__ {int NeedLogicalDeviceInformation; int NeedPhysicalDeviceInformation; int StartLogicalDeviceInformationScan; int StartPhysicalDeviceInformationScan; int NextEventSequenceNumber; unsigned int PhysicalDeviceIndex; int NeedDeviceSerialNumberInformation; int* LogicalDriveFoundDuringScan; int NewLogicalDeviceInformationDMA; TYPE_19__* NewLogicalDeviceInformation; int NewPhysicalDeviceInformationDMA; TYPE_19__* NewPhysicalDeviceInformation; TYPE_19__* NewInquiryUnitSerialNumber; int EventDMA; TYPE_4__* HealthStatusBuffer; TYPE_19__** InquiryUnitSerialNumber; TYPE_19__** LogicalDeviceInformation; TYPE_18__* LogicalDriveToVirtualDevice; TYPE_19__** PhysicalDeviceInformation; int Event; TYPE_19__ ControllerInformation; TYPE_19__* NewControllerInformation; } ;
struct TYPE_61__ {int MonitoringAlertMode; int* LogicalDriveInitiallyAccessible; int MonitoringCommandDeferred; int CommandWaitQueue; TYPE_33__ MonitoringTimer; int MonitoringTimerCount; TYPE_13__ V2; int ControllerNumber; int LogicalDriveCount; scalar_t__ ShutdownMonitoringTimer; } ;
struct TYPE_59__ {int (* CompletionFunction ) (TYPE_21__*) ;int DataTransferLength; int RequestSenseLength; scalar_t__ CommandStatus; } ;
struct TYPE_56__ {scalar_t__ Channel; scalar_t__ TargetID; scalar_t__ LogicalUnit; scalar_t__ Controller; } ;
struct TYPE_52__ {int SegmentByteCount; int SegmentDataPointer; } ;
typedef TYPE_18__ DAC960_V2_PhysicalDevice_T ;
typedef TYPE_19__ DAC960_V2_PhysicalDeviceInfo_T ;
typedef TYPE_19__ DAC960_V2_LogicalDeviceInfo_T ;
typedef TYPE_21__ DAC960_V2_KernelCommand_T ;
typedef scalar_t__ DAC960_V2_IOCTL_Opcode_T ;
typedef int DAC960_V2_Event_T ;
typedef TYPE_19__ DAC960_V2_ControllerInfo_T ;
typedef scalar_t__ DAC960_V2_CommandStatus_T ;
typedef TYPE_23__ DAC960_V2_CommandMailbox_T ;
typedef TYPE_19__ DAC960_SCSI_Inquiry_UnitSerialNumber_T ;
typedef TYPE_25__ DAC960_Controller_T ;
typedef TYPE_26__ DAC960_Command_T ;
typedef scalar_t__ DAC960_CommandType_T ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_25__*) ;
 int FUNC_2 (char*,TYPE_25__*,int,scalar_t__,...) ;
 int FUNC_3 (TYPE_26__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_26__*,int) ;
 int FUNC_5 (char*,TYPE_25__*,unsigned short,int ,unsigned short,char*) ;
 int FUNC_6 (TYPE_26__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (TYPE_25__*,TYPE_23__*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 void* VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_8 (TYPE_26__*) ;
 int FUNC_9 (TYPE_26__*) ;
 int FUNC_10 (TYPE_25__*,int ) ;
 int FUNC_11 (TYPE_25__*,char*,unsigned short,int ,unsigned long) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_12 (TYPE_26__*) ;
 int VAR_31 ;
 int FUNC_13 (TYPE_33__*) ;
 int FUNC_14 (int *) ;
 scalar_t__ VAR_32 ;
 int FUNC_15 (TYPE_19__*) ;
 TYPE_19__* FUNC_16 (int,int ) ;
 int FUNC_17 (TYPE_19__*,TYPE_19__*,int) ;
 int FUNC_18 (TYPE_19__*,int ,int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_21__*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static void FUNC_22(DAC960_Command_T *VAR_33)
{
  DAC960_Controller_T *VAR_34 = VAR_33->Controller;
  DAC960_CommandType_T VAR_35 = VAR_33->CommandType;
  DAC960_V2_CommandMailbox_T *VAR_36 = &VAR_33->V2.CommandMailbox;
  DAC960_V2_IOCTL_Opcode_T VAR_37 = VAR_36->Common.IOCTL_Opcode;
  DAC960_V2_CommandStatus_T VAR_38 = VAR_33->V2.CommandStatus;

  if (VAR_35 == VAR_5 ||
      VAR_35 == VAR_29)
    {




      VAR_33->V2.RequestSense->SenseKey = VAR_7;

      if (VAR_38 == VAR_27) {

  if (!FUNC_4(VAR_33, 1))
   FUNC_0();

      } else if (VAR_33->V2.RequestSense->SenseKey == VAR_7)
 {




    FUNC_12(VAR_33);
    return;
 }
      else
 {
   if (VAR_33->V2.RequestSense->SenseKey != VAR_8)
     FUNC_9(VAR_33);



          (void)FUNC_4(VAR_33, 0);
 }
    }
  else if (VAR_35 == VAR_6 ||
    VAR_35 == VAR_30)
    {
      bool VAR_39;
      VAR_39 = 1;
      if (VAR_38 != VAR_27) {
 VAR_39 = 0;
 if (VAR_33->V2.RequestSense->SenseKey != VAR_8)
     FUNC_9(VAR_33);
      }
      if (!FUNC_4(VAR_33, VAR_39)) {
  FUNC_12(VAR_33);
         return;
      }
    }
  else if (VAR_35 == VAR_3)
    {
      if (VAR_34->ShutdownMonitoringTimer)
       return;
      if (VAR_37 == VAR_19)
 {
   DAC960_V2_ControllerInfo_T *VAR_40 =
     VAR_34->V2.NewControllerInformation;
   DAC960_V2_ControllerInfo_T *VAR_41 =
     &VAR_34->V2.ControllerInformation;
   VAR_34->LogicalDriveCount =
     VAR_40->LogicalDevicesPresent;
   VAR_34->V2.NeedLogicalDeviceInformation = 1;
   VAR_34->V2.NeedPhysicalDeviceInformation = 1;
   VAR_34->V2.StartLogicalDeviceInformationScan = 1;
   VAR_34->V2.StartPhysicalDeviceInformationScan = 1;
   VAR_34->MonitoringAlertMode =
     (VAR_40->LogicalDevicesCritical > 0 ||
      VAR_40->LogicalDevicesOffline > 0 ||
      VAR_40->PhysicalDisksCritical > 0 ||
      VAR_40->PhysicalDisksOffline > 0);
   FUNC_17(VAR_41, VAR_40,
   sizeof(DAC960_V2_ControllerInfo_T));
 }
      else if (VAR_37 == VAR_20)
 {
   if (VAR_38 == VAR_27) {
     FUNC_10(VAR_34, VAR_34->V2.Event);
   }
   VAR_34->V2.NextEventSequenceNumber++;
 }
      else if (VAR_37 == VAR_22 &&
        VAR_38 == VAR_27)
 {
   DAC960_V2_PhysicalDeviceInfo_T *VAR_42 =
     VAR_34->V2.NewPhysicalDeviceInformation;
   unsigned int VAR_43 = VAR_34->V2.PhysicalDeviceIndex;
   DAC960_V2_PhysicalDeviceInfo_T *VAR_44 =
     VAR_34->V2.PhysicalDeviceInformation[VAR_43];
   DAC960_SCSI_Inquiry_UnitSerialNumber_T *VAR_45 =
     VAR_34->V2.InquiryUnitSerialNumber[VAR_43];
   unsigned int VAR_46;
   while (VAR_44 != ((void*)0) &&
   (VAR_42->Channel >
    VAR_44->Channel ||
    (VAR_42->Channel ==
     VAR_44->Channel &&
     (VAR_42->TargetID >
      VAR_44->TargetID ||
     (VAR_42->TargetID ==
      VAR_44->TargetID &&
      VAR_42->LogicalUnit >
      VAR_44->LogicalUnit)))))
     {
       FUNC_2("Physical Device %d:%d No Longer Exists\n",
         VAR_34,
         VAR_44->Channel,
         VAR_44->TargetID);
       VAR_34->V2.PhysicalDeviceInformation
        [VAR_43] = ((void*)0);
       VAR_34->V2.InquiryUnitSerialNumber
        [VAR_43] = ((void*)0);
       FUNC_15(VAR_44);
       FUNC_15(VAR_45);
       for (VAR_46 = VAR_43;
     VAR_46 < VAR_26 - 1;
     VAR_46++)
  {
    VAR_34->V2.PhysicalDeviceInformation[VAR_46] =
      VAR_34->V2.PhysicalDeviceInformation[VAR_46+1];
    VAR_34->V2.InquiryUnitSerialNumber[VAR_46] =
      VAR_34->V2.InquiryUnitSerialNumber[VAR_46+1];
  }
       VAR_34->V2.PhysicalDeviceInformation
        [VAR_26-1] = ((void*)0);
       VAR_34->V2.InquiryUnitSerialNumber
        [VAR_26-1] = ((void*)0);
       VAR_44 =
  VAR_34->V2.PhysicalDeviceInformation[VAR_43];
       VAR_45 =
  VAR_34->V2.InquiryUnitSerialNumber[VAR_43];
     }
   if (VAR_44 == ((void*)0) ||
       (VAR_42->Channel !=
        VAR_44->Channel) ||
       (VAR_42->TargetID !=
        VAR_44->TargetID) ||
       (VAR_42->LogicalUnit !=
        VAR_44->LogicalUnit))
     {
       VAR_44 =
  FUNC_16(sizeof(DAC960_V2_PhysicalDeviceInfo_T), VAR_31);
       VAR_45 =
    FUNC_16(sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T),
     VAR_31);
       if (VAR_45 == ((void*)0) ||
    VAR_44 == ((void*)0))
  {
    FUNC_15(VAR_45);
    VAR_45 = ((void*)0);
    FUNC_15(VAR_44);
    VAR_44 = ((void*)0);
  }
       FUNC_2("Physical Device %d:%d Now Exists%s\n",
         VAR_34,
         VAR_42->Channel,
         VAR_42->TargetID,
         (VAR_44 != ((void*)0)
          ? "" : " - Allocation Failed"));
       if (VAR_44 != ((void*)0))
  {
    FUNC_18(VAR_44, 0,
    sizeof(DAC960_V2_PhysicalDeviceInfo_T));
    VAR_44->PhysicalDeviceState =
      VAR_13;
    FUNC_18(VAR_45, 0,
    sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T));
    VAR_45->PeripheralDeviceType = 0x1F;
    for (VAR_46 = VAR_26 - 1;
         VAR_46 > VAR_43;
         VAR_46--)
      {
        VAR_34->V2.PhysicalDeviceInformation[VAR_46] =
   VAR_34->V2.PhysicalDeviceInformation[VAR_46-1];
        VAR_34->V2.InquiryUnitSerialNumber[VAR_46] =
   VAR_34->V2.InquiryUnitSerialNumber[VAR_46-1];
      }
    VAR_34->V2.PhysicalDeviceInformation
     [VAR_43] =
      VAR_44;
    VAR_34->V2.InquiryUnitSerialNumber
     [VAR_43] =
      VAR_45;
    VAR_34->V2.NeedDeviceSerialNumberInformation = 1;
  }
     }
   if (VAR_44 != ((void*)0))
     {
       if (VAR_42->PhysicalDeviceState !=
    VAR_44->PhysicalDeviceState)
  FUNC_2(
    "Physical Device %d:%d is now %s\n", VAR_34,
    VAR_42->Channel,
    VAR_42->TargetID,
    (VAR_42->PhysicalDeviceState
     == VAR_15
     ? "ONLINE"
     : VAR_42->PhysicalDeviceState
       == VAR_16
       ? "REBUILD"
       : VAR_42->PhysicalDeviceState
         == VAR_14
         ? "MISSING"
         : VAR_42->PhysicalDeviceState
    == VAR_11
    ? "CRITICAL"
    : VAR_42->PhysicalDeviceState
      == VAR_12
      ? "DEAD"
      : VAR_42->PhysicalDeviceState
        == VAR_18
        ? "SUSPECTED-DEAD"
        : VAR_42->PhysicalDeviceState
          == VAR_10
          ? "COMMANDED-OFFLINE"
          : VAR_42->PhysicalDeviceState
     == VAR_17
     ? "STANDBY" : "UNKNOWN"));
       if ((VAR_42->ParityErrors !=
     VAR_44->ParityErrors) ||
    (VAR_42->SoftErrors !=
     VAR_44->SoftErrors) ||
    (VAR_42->HardErrors !=
     VAR_44->HardErrors) ||
    (VAR_42->MiscellaneousErrors !=
     VAR_44->MiscellaneousErrors) ||
    (VAR_42->CommandTimeouts !=
     VAR_44->CommandTimeouts) ||
    (VAR_42->Retries !=
     VAR_44->Retries) ||
    (VAR_42->Aborts !=
     VAR_44->Aborts) ||
    (VAR_42->PredictedFailuresDetected !=
     VAR_44->PredictedFailuresDetected))
  {
    FUNC_2("Physical Device %d:%d Errors: "
      "Parity = %d, Soft = %d, "
      "Hard = %d, Misc = %d\n",
      VAR_34,
      VAR_42->Channel,
      VAR_42->TargetID,
      VAR_42->ParityErrors,
      VAR_42->SoftErrors,
      VAR_42->HardErrors,
      VAR_42->MiscellaneousErrors);
    FUNC_2("Physical Device %d:%d Errors: "
      "Timeouts = %d, Retries = %d, "
      "Aborts = %d, Predicted = %d\n",
      VAR_34,
      VAR_42->Channel,
      VAR_42->TargetID,
      VAR_42->CommandTimeouts,
      VAR_42->Retries,
      VAR_42->Aborts,
      VAR_42
      ->PredictedFailuresDetected);
  }
       if ((VAR_44->PhysicalDeviceState
     == VAR_12 ||
     VAR_44->PhysicalDeviceState
     == VAR_13) &&
    VAR_42->PhysicalDeviceState
    != VAR_12)
  VAR_34->V2.NeedDeviceSerialNumberInformation = 1;
       FUNC_17(VAR_44, VAR_42,
       sizeof(DAC960_V2_PhysicalDeviceInfo_T));
     }
   VAR_42->LogicalUnit++;
   VAR_34->V2.PhysicalDeviceIndex++;
 }
      else if (VAR_37 == VAR_22)
 {
   unsigned int VAR_47;
   for (VAR_47 = VAR_34->V2.PhysicalDeviceIndex;
        VAR_47 < VAR_26;
        VAR_47++)
     {
       DAC960_V2_PhysicalDeviceInfo_T *VAR_48 =
  VAR_34->V2.PhysicalDeviceInformation[VAR_47];
       DAC960_SCSI_Inquiry_UnitSerialNumber_T *VAR_49 =
  VAR_34->V2.InquiryUnitSerialNumber[VAR_47];
       if (VAR_48 == ((void*)0)) break;
       FUNC_2("Physical Device %d:%d No Longer Exists\n",
         VAR_34,
         VAR_48->Channel,
         VAR_48->TargetID);
       VAR_34->V2.PhysicalDeviceInformation[VAR_47] = ((void*)0);
       VAR_34->V2.InquiryUnitSerialNumber[VAR_47] = ((void*)0);
       FUNC_15(VAR_48);
       FUNC_15(VAR_49);
     }
   VAR_34->V2.NeedPhysicalDeviceInformation = 0;
 }
      else if (VAR_37 == VAR_21 &&
        VAR_38 == VAR_27)
 {
   DAC960_V2_LogicalDeviceInfo_T *VAR_50 =
     VAR_34->V2.NewLogicalDeviceInformation;
   unsigned short VAR_51 =
     VAR_50->LogicalDeviceNumber;
   DAC960_V2_LogicalDeviceInfo_T *VAR_52 =
     VAR_34->V2.LogicalDeviceInformation[VAR_51];
   if (VAR_52 == ((void*)0))
     {
       DAC960_V2_PhysicalDevice_T VAR_53;
       VAR_53.Controller = 0;
       VAR_53.Channel = VAR_50->Channel;
       VAR_53.TargetID = VAR_50->TargetID;
       VAR_53.LogicalUnit = VAR_50->LogicalUnit;
       VAR_34->V2.LogicalDriveToVirtualDevice[VAR_51] =
  VAR_53;
       VAR_52 = FUNC_16(sizeof(DAC960_V2_LogicalDeviceInfo_T),
       VAR_31);
       VAR_34->V2.LogicalDeviceInformation[VAR_51] =
  VAR_52;
       FUNC_2("Logical Drive %d (/dev/rd/c%dd%d) "
         "Now Exists%s\n", VAR_34,
         VAR_51,
         VAR_34->ControllerNumber,
         VAR_51,
         (VAR_52 != ((void*)0)
          ? "" : " - Allocation Failed"));
       if (VAR_52 != ((void*)0))
  {
    FUNC_18(VAR_52, 0,
    sizeof(DAC960_V2_LogicalDeviceInfo_T));
    FUNC_1(VAR_34);
  }
     }
   if (VAR_52 != ((void*)0))
     {
       unsigned long VAR_54 =
  VAR_50->ConfigurableDeviceSize;
       if (VAR_50->LogicalDeviceState !=
    VAR_52->LogicalDeviceState)
  FUNC_2("Logical Drive %d (/dev/rd/c%dd%d) "
    "is now %s\n", VAR_34,
    VAR_51,
    VAR_34->ControllerNumber,
    VAR_51,
    (VAR_50->LogicalDeviceState
     == VAR_25
     ? "ONLINE"
     : VAR_50->LogicalDeviceState
       == VAR_24
       ? "CRITICAL" : "OFFLINE"));
       if ((VAR_50->SoftErrors !=
     VAR_52->SoftErrors) ||
    (VAR_50->CommandsFailed !=
     VAR_52->CommandsFailed) ||
    (VAR_50->DeferredWriteErrors !=
     VAR_52->DeferredWriteErrors))
  FUNC_2("Logical Drive %d (/dev/rd/c%dd%d) Errors: "
    "Soft = %d, Failed = %d, Deferred Write = %d\n",
    VAR_34, VAR_51,
    VAR_34->ControllerNumber,
    VAR_51,
    VAR_50->SoftErrors,
    VAR_50->CommandsFailed,
    VAR_50->DeferredWriteErrors);
       if (VAR_50->ConsistencyCheckInProgress)
  FUNC_11(VAR_34,
      "Consistency Check",
      VAR_51,
      VAR_50
      ->ConsistencyCheckBlockNumber,
      VAR_54);
       else if (VAR_50->RebuildInProgress)
  FUNC_11(VAR_34,
      "Rebuild",
      VAR_51,
      VAR_50
      ->RebuildBlockNumber,
      VAR_54);
       else if (VAR_50->BackgroundInitializationInProgress)
  FUNC_11(VAR_34,
      "Background Initialization",
      VAR_51,
      VAR_50
      ->BackgroundInitializationBlockNumber,
      VAR_54);
       else if (VAR_50->ForegroundInitializationInProgress)
  FUNC_11(VAR_34,
      "Foreground Initialization",
      VAR_51,
      VAR_50
      ->ForegroundInitializationBlockNumber,
      VAR_54);
       else if (VAR_50->DataMigrationInProgress)
  FUNC_11(VAR_34,
      "Data Migration",
      VAR_51,
      VAR_50
      ->DataMigrationBlockNumber,
      VAR_54);
       else if (VAR_50->PatrolOperationInProgress)
  FUNC_11(VAR_34,
      "Patrol Operation",
      VAR_51,
      VAR_50
      ->PatrolOperationBlockNumber,
      VAR_54);
       if (VAR_52->BackgroundInitializationInProgress &&
    !VAR_50->BackgroundInitializationInProgress)
  FUNC_5("Logical Drive %d (/dev/rd/c%dd%d) "
    "Background Initialization %s\n",
    VAR_34,
    VAR_51,
    VAR_34->ControllerNumber,
    VAR_51,
    (VAR_50->LogicalDeviceControl
            .LogicalDeviceInitialized
     ? "Completed" : "Failed"));
       FUNC_17(VAR_52, VAR_50,
       sizeof(DAC960_V2_LogicalDeviceInfo_T));
     }
   VAR_34->V2.LogicalDriveFoundDuringScan
    [VAR_51] = 1;
   VAR_50->LogicalDeviceNumber++;
 }
      else if (VAR_37 == VAR_21)
 {
   int VAR_55;
   for (VAR_55 = 0;
        VAR_55 < VAR_2;
        VAR_55++)
     {
       DAC960_V2_LogicalDeviceInfo_T *VAR_56 =
  VAR_34->V2.LogicalDeviceInformation[VAR_55];
       if (VAR_56 == ((void*)0) ||
    VAR_34->V2.LogicalDriveFoundDuringScan
     [VAR_55])
  continue;
       FUNC_2("Logical Drive %d (/dev/rd/c%dd%d) "
         "No Longer Exists\n", VAR_34,
         VAR_55,
         VAR_34->ControllerNumber,
         VAR_55);
       VAR_34->V2.LogicalDeviceInformation
        [VAR_55] = ((void*)0);
       FUNC_15(VAR_56);
       VAR_34->LogicalDriveInitiallyAccessible
     [VAR_55] = 0;
       FUNC_1(VAR_34);
     }
   VAR_34->V2.NeedLogicalDeviceInformation = 0;
 }
      else if (VAR_37 == VAR_28)
        {
     DAC960_SCSI_Inquiry_UnitSerialNumber_T *VAR_57 =
  VAR_34->V2.InquiryUnitSerialNumber[VAR_34->V2.PhysicalDeviceIndex - 1];

     if (VAR_38 != VAR_27) {
  FUNC_18(VAR_57,
   0, sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T));
  VAR_57->PeripheralDeviceType = 0x1F;
     } else
    FUNC_17(VAR_57,
   VAR_34->V2.NewInquiryUnitSerialNumber,
   sizeof(DAC960_SCSI_Inquiry_UnitSerialNumber_T));

      VAR_34->V2.NeedDeviceSerialNumberInformation = 0;
        }

      if (VAR_34->V2.HealthStatusBuffer->NextEventSequenceNumber
   - VAR_34->V2.NextEventSequenceNumber > 0)
 {
   VAR_36->GetEvent.CommandOpcode = VAR_23;
   VAR_36->GetEvent.DataTransferSize = sizeof(DAC960_V2_Event_T);
   VAR_36->GetEvent.EventSequenceNumberHigh16 =
     VAR_34->V2.NextEventSequenceNumber >> 16;
   VAR_36->GetEvent.ControllerNumber = 0;
   VAR_36->GetEvent.IOCTL_Opcode =
     VAR_20;
   VAR_36->GetEvent.EventSequenceNumberLow16 =
     VAR_34->V2.NextEventSequenceNumber & 0xFFFF;
   VAR_36->GetEvent.DataTransferMemoryAddress
      .ScatterGatherSegments[0]
      .SegmentDataPointer =
     VAR_34->V2.EventDMA;
   VAR_36->GetEvent.DataTransferMemoryAddress
      .ScatterGatherSegments[0]
      .SegmentByteCount =
     VAR_36->GetEvent.DataTransferSize;
   FUNC_6(VAR_33);
   return;
 }
      if (VAR_34->V2.NeedPhysicalDeviceInformation)
 {
   if (VAR_34->V2.NeedDeviceSerialNumberInformation)
     {
       DAC960_SCSI_Inquiry_UnitSerialNumber_T *VAR_58 =
                VAR_34->V2.NewInquiryUnitSerialNumber;
       VAR_58->PeripheralDeviceType = 0x1F;

       FUNC_7(VAR_34, VAR_36,
   VAR_34->V2.NewPhysicalDeviceInformation->Channel,
   VAR_34->V2.NewPhysicalDeviceInformation->TargetID,
  VAR_34->V2.NewPhysicalDeviceInformation->LogicalUnit - 1);


       FUNC_6(VAR_33);
       return;
     }
   if (VAR_34->V2.StartPhysicalDeviceInformationScan)
     {
       VAR_34->V2.PhysicalDeviceIndex = 0;
       VAR_34->V2.NewPhysicalDeviceInformation->Channel = 0;
       VAR_34->V2.NewPhysicalDeviceInformation->TargetID = 0;
       VAR_34->V2.NewPhysicalDeviceInformation->LogicalUnit = 0;
       VAR_34->V2.StartPhysicalDeviceInformationScan = 0;
     }
   VAR_36->PhysicalDeviceInfo.CommandOpcode = VAR_23;
   VAR_36->PhysicalDeviceInfo.DataTransferSize =
     sizeof(DAC960_V2_PhysicalDeviceInfo_T);
   VAR_36->PhysicalDeviceInfo.PhysicalDevice.LogicalUnit =
     VAR_34->V2.NewPhysicalDeviceInformation->LogicalUnit;
   VAR_36->PhysicalDeviceInfo.PhysicalDevice.TargetID =
     VAR_34->V2.NewPhysicalDeviceInformation->TargetID;
   VAR_36->PhysicalDeviceInfo.PhysicalDevice.Channel =
     VAR_34->V2.NewPhysicalDeviceInformation->Channel;
   VAR_36->PhysicalDeviceInfo.IOCTL_Opcode =
     VAR_22;
   VAR_36->PhysicalDeviceInfo.DataTransferMemoryAddress
         .ScatterGatherSegments[0]
         .SegmentDataPointer =
     VAR_34->V2.NewPhysicalDeviceInformationDMA;
   VAR_36->PhysicalDeviceInfo.DataTransferMemoryAddress
         .ScatterGatherSegments[0]
         .SegmentByteCount =
     VAR_36->PhysicalDeviceInfo.DataTransferSize;
   FUNC_6(VAR_33);
   return;
 }
      if (VAR_34->V2.NeedLogicalDeviceInformation)
 {
   if (VAR_34->V2.StartLogicalDeviceInformationScan)
     {
       int VAR_59;
       for (VAR_59 = 0;
     VAR_59 < VAR_2;
     VAR_59++)
  VAR_34->V2.LogicalDriveFoundDuringScan
          [VAR_59] = 0;
       VAR_34->V2.NewLogicalDeviceInformation->LogicalDeviceNumber = 0;
       VAR_34->V2.StartLogicalDeviceInformationScan = 0;
     }
   VAR_36->LogicalDeviceInfo.CommandOpcode = VAR_23;
   VAR_36->LogicalDeviceInfo.DataTransferSize =
     sizeof(DAC960_V2_LogicalDeviceInfo_T);
   VAR_36->LogicalDeviceInfo.LogicalDevice.LogicalDeviceNumber =
     VAR_34->V2.NewLogicalDeviceInformation->LogicalDeviceNumber;
   VAR_36->LogicalDeviceInfo.IOCTL_Opcode =
     VAR_21;
   VAR_36->LogicalDeviceInfo.DataTransferMemoryAddress
        .ScatterGatherSegments[0]
        .SegmentDataPointer =
     VAR_34->V2.NewLogicalDeviceInformationDMA;
   VAR_36->LogicalDeviceInfo.DataTransferMemoryAddress
        .ScatterGatherSegments[0]
        .SegmentByteCount =
     VAR_36->LogicalDeviceInfo.DataTransferSize;
   FUNC_6(VAR_33);
   return;
 }
      VAR_34->MonitoringTimerCount++;
      VAR_34->MonitoringTimer.expires =
 VAR_32 + VAR_0;
       FUNC_13(&VAR_34->MonitoringTimer);
    }
  if (VAR_35 == VAR_1)
    {
      FUNC_14(VAR_33->Completion);
      VAR_33->Completion = ((void*)0);
      return;
    }
  if (VAR_35 == VAR_4)
    {
      DAC960_V2_KernelCommand_T *VAR_60 = VAR_33->V2.KernelCommand;
      VAR_60->CommandStatus = VAR_38;
      VAR_60->RequestSenseLength = VAR_33->V2.RequestSenseLength;
      VAR_60->DataTransferLength = VAR_33->V2.DataTransferResidue;
      VAR_33->V2.KernelCommand = ((void*)0);
      FUNC_3(VAR_33);
      VAR_60->CompletionFunction(VAR_60);
      return;
    }





  if (VAR_34->MonitoringCommandDeferred)
    {
      VAR_34->MonitoringCommandDeferred = 0;
      FUNC_8(VAR_33);
      return;
    }



  FUNC_3(VAR_33);



  FUNC_21(&VAR_34->CommandWaitQueue);
}
