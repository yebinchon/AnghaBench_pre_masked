
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


struct TYPE_11__ {int BusAddress; int CommandOpcode; } ;
struct TYPE_13__ {TYPE_2__ Type3; } ;
struct TYPE_10__ {TYPE_4__ CommandMailbox; } ;
struct TYPE_15__ {int CommandType; TYPE_1__ V1; TYPE_5__* Controller; } ;
struct TYPE_12__ {int NewEnquiryDMA; } ;
struct TYPE_14__ {TYPE_3__ V1; } ;
typedef TYPE_4__ DAC960_V1_CommandMailbox_T ;
typedef TYPE_5__ DAC960_Controller_T ;
typedef TYPE_6__ DAC960_Command_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(DAC960_Command_T *VAR_2)
{
  DAC960_Controller_T *VAR_3 = VAR_2->Controller;
  DAC960_V1_CommandMailbox_T *VAR_4 = &VAR_2->V1.CommandMailbox;
  FUNC_1(VAR_2);
  VAR_2->CommandType = VAR_0;
  VAR_4->Type3.CommandOpcode = VAR_1;
  VAR_4->Type3.BusAddress = VAR_3->V1.NewEnquiryDMA;
  FUNC_0(VAR_2);
}
