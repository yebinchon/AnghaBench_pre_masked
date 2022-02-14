
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CAN_Prescaler; int CAN_BS2; int CAN_BS1; int CAN_SJW; int CAN_Mode; void* CAN_TXFP; void* CAN_RFLM; void* CAN_NART; void* CAN_AWUM; void* CAN_ABOM; void* CAN_TTCM; } ;
typedef TYPE_1__ CAN_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

void FUNC_0(CAN_InitTypeDef* VAR_5)
{



  VAR_5->CAN_TTCM = VAR_4;


  VAR_5->CAN_ABOM = VAR_4;


  VAR_5->CAN_AWUM = VAR_4;


  VAR_5->CAN_NART = VAR_4;


  VAR_5->CAN_RFLM = VAR_4;


  VAR_5->CAN_TXFP = VAR_4;


  VAR_5->CAN_Mode = VAR_2;


  VAR_5->CAN_SJW = VAR_3;


  VAR_5->CAN_BS1 = VAR_0;


  VAR_5->CAN_BS2 = VAR_1;


  VAR_5->CAN_Prescaler = 1;
}
