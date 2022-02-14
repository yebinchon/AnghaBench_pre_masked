
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CEC_SFTOption; int CEC_BRDNoGen; int CEC_LongBitPeriodError; int CEC_BitRisingError; int CEC_StopReception; int CEC_RxTolerance; int CEC_SignalFreeTime; } ;
typedef TYPE_1__ CEC_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(CEC_InitTypeDef* VAR_7)
{
  VAR_7->CEC_SignalFreeTime = VAR_5;
  VAR_7->CEC_RxTolerance = VAR_3;
  VAR_7->CEC_StopReception = VAR_6;
  VAR_7->CEC_BitRisingError = VAR_1;
  VAR_7->CEC_LongBitPeriodError = VAR_2;
  VAR_7->CEC_BRDNoGen = VAR_0;
  VAR_7->CEC_SFTOption = VAR_4;
}
