
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int TSR; TYPE_1__* sTxMailBox; } ;
struct TYPE_8__ {int IDE; int RTR; size_t DLC; int StdId; int ExtId; scalar_t__* Data; } ;
struct TYPE_7__ {int TIR; int TDTR; int TDLR; int TDHR; } ;
typedef TYPE_2__ CanTxMsg ;
typedef TYPE_3__ CAN_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

uint8_t FUNC_7(CAN_TypeDef* VAR_6, CanTxMsg* VAR_7)
{
  uint8_t VAR_8 = 0;

  FUNC_6(FUNC_0(VAR_6));
  FUNC_6(FUNC_3(VAR_7->IDE));
  FUNC_6(FUNC_4(VAR_7->RTR));
  FUNC_6(FUNC_1(VAR_7->DLC));


  if ((VAR_6->TSR&VAR_1) == VAR_1)
  {
    VAR_8 = 0;
  }
  else if ((VAR_6->TSR&VAR_2) == VAR_2)
  {
    VAR_8 = 1;
  }
  else if ((VAR_6->TSR&VAR_3) == VAR_3)
  {
    VAR_8 = 2;
  }
  else
  {
    VAR_8 = VAR_4;
  }

  if (VAR_8 != VAR_4)
  {

    VAR_6->sTxMailBox[VAR_8].TIR &= VAR_5;
    if (VAR_7->IDE == VAR_0)
    {
      FUNC_6(FUNC_5(VAR_7->StdId));
      VAR_6->sTxMailBox[VAR_8].TIR |= ((VAR_7->StdId << 21) | VAR_7->RTR);

    }
    else
    {
      FUNC_6(FUNC_2(VAR_7->ExtId));
      VAR_6->sTxMailBox[VAR_8].TIR |= ((VAR_7->ExtId << 3) | VAR_7->IDE | VAR_7->RTR);


    }


    VAR_7->DLC &= (uint8_t)0x0000000F;
    VAR_6->sTxMailBox[VAR_8].TDTR &= (uint32_t)0xFFFFFFF0;
    VAR_6->sTxMailBox[VAR_8].TDTR |= VAR_7->DLC;


    VAR_6->sTxMailBox[VAR_8].TDLR = (((uint32_t)VAR_7->Data[3] << 24) |
                                             ((uint32_t)VAR_7->Data[2] << 16) |
                                             ((uint32_t)VAR_7->Data[1] << 8) |
                                             ((uint32_t)VAR_7->Data[0]));
    VAR_6->sTxMailBox[VAR_8].TDHR = (((uint32_t)VAR_7->Data[7] << 24) |
                                             ((uint32_t)VAR_7->Data[6] << 16) |
                                             ((uint32_t)VAR_7->Data[5] << 8) |
                                             ((uint32_t)VAR_7->Data[4]));

    VAR_6->sTxMailBox[VAR_8].TIR |= VAR_5;
  }
  return VAR_8;
}
