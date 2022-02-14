
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_10__ {int BusAddress; int CommandOpcode; } ;
struct TYPE_11__ {TYPE_2__ Type3; } ;
struct TYPE_9__ {scalar_t__ CommandStatus; TYPE_3__ CommandMailbox; } ;
struct TYPE_12__ {TYPE_1__ V1; int CommandType; } ;
typedef scalar_t__ DAC960_V1_CommandStatus_T ;
typedef int DAC960_V1_CommandOpcode_T ;
typedef TYPE_3__ DAC960_V1_CommandMailbox_T ;
typedef int DAC960_Controller_T ;
typedef TYPE_4__ DAC960_Command_T ;


 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_4(DAC960_Controller_T *VAR_2,
          DAC960_V1_CommandOpcode_T VAR_3,
          dma_addr_t VAR_4)
{
  DAC960_Command_T *VAR_5 = FUNC_0(VAR_2);
  DAC960_V1_CommandMailbox_T *VAR_6 = &VAR_5->V1.CommandMailbox;
  DAC960_V1_CommandStatus_T VAR_7;
  FUNC_3(VAR_5);
  VAR_5->CommandType = VAR_0;
  VAR_6->Type3.CommandOpcode = VAR_3;
  VAR_6->Type3.BusAddress = VAR_4;
  FUNC_2(VAR_5);
  VAR_7 = VAR_5->V1.CommandStatus;
  FUNC_1(VAR_5);
  return (VAR_7 == VAR_1);
}
