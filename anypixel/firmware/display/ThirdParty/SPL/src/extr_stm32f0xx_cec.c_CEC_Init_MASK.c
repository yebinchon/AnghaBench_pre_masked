
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CFGR; } ;
struct TYPE_4__ {int CEC_SignalFreeTime; int CEC_RxTolerance; int CEC_StopReception; int CEC_BitRisingError; int CEC_LongBitPeriodError; int CEC_BRDNoGen; int CEC_SFTOption; } ;
typedef TYPE_1__ CEC_InitTypeDef ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

void FUNC_8(CEC_InitTypeDef* VAR_2)
{
  uint32_t VAR_3 = 0;


  FUNC_7(FUNC_5(VAR_2->CEC_SignalFreeTime));
  FUNC_7(FUNC_3(VAR_2->CEC_RxTolerance));
  FUNC_7(FUNC_6(VAR_2->CEC_StopReception));
  FUNC_7(FUNC_1(VAR_2->CEC_BitRisingError));
  FUNC_7(FUNC_2(VAR_2->CEC_LongBitPeriodError));
  FUNC_7(FUNC_0(VAR_2->CEC_BRDNoGen));
  FUNC_7(FUNC_4(VAR_2->CEC_SFTOption));


  VAR_3 = VAR_0->CFGR;


  VAR_3 &= VAR_1;


  VAR_3 |= (VAR_2->CEC_SignalFreeTime | VAR_2->CEC_RxTolerance |
             VAR_2->CEC_StopReception | VAR_2->CEC_BitRisingError |
             VAR_2->CEC_LongBitPeriodError| VAR_2->CEC_BRDNoGen |
             VAR_2->CEC_SFTOption);


  VAR_0->CFGR = VAR_3;
}
