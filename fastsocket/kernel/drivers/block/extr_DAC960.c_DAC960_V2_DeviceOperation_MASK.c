
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int DataTransferControllerToHost; int NoAutoRequestSense; } ;
struct TYPE_11__ {int OperationDevice; int IOCTL_Opcode; TYPE_1__ CommandControlBits; int CommandOpcode; } ;
struct TYPE_13__ {TYPE_2__ DeviceOperation; } ;
struct TYPE_12__ {scalar_t__ CommandStatus; TYPE_4__ CommandMailbox; } ;
struct TYPE_14__ {TYPE_3__ V2; int CommandType; } ;
typedef int DAC960_V2_OperationDevice_T ;
typedef int DAC960_V2_IOCTL_Opcode_T ;
typedef scalar_t__ DAC960_V2_CommandStatus_T ;
typedef TYPE_4__ DAC960_V2_CommandMailbox_T ;
typedef int DAC960_Controller_T ;
typedef TYPE_5__ DAC960_Command_T ;


 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_4(DAC960_Controller_T *VAR_3,
      DAC960_V2_IOCTL_Opcode_T VAR_4,
      DAC960_V2_OperationDevice_T
        VAR_5)
{
  DAC960_Command_T *VAR_6 = FUNC_0(VAR_3);
  DAC960_V2_CommandMailbox_T *VAR_7 = &VAR_6->V2.CommandMailbox;
  DAC960_V2_CommandStatus_T VAR_8;
  FUNC_3(VAR_6);
  VAR_6->CommandType = VAR_0;
  VAR_7->DeviceOperation.CommandOpcode = VAR_1;
  VAR_7->DeviceOperation.CommandControlBits
     .DataTransferControllerToHost = 1;
  VAR_7->DeviceOperation.CommandControlBits
         .NoAutoRequestSense = 1;
  VAR_7->DeviceOperation.IOCTL_Opcode = VAR_4;
  VAR_7->DeviceOperation.OperationDevice = VAR_5;
  FUNC_2(VAR_6);
  VAR_8 = VAR_6->V2.CommandStatus;
  FUNC_1(VAR_6);
  return (VAR_8 == VAR_2);
}
