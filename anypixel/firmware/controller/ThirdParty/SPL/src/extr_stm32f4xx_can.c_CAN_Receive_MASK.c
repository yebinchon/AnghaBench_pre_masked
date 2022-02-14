
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int RF1R; int RF0R; TYPE_1__* sFIFOMailBox; } ;
struct TYPE_8__ {size_t IDE; int StdId; int ExtId; size_t RTR; size_t DLC; size_t FMI; size_t* Data; } ;
struct TYPE_7__ {size_t RIR; size_t RDTR; size_t RDLR; size_t RDHR; } ;
typedef TYPE_2__ CanRxMsg ;
typedef TYPE_3__ CAN_TypeDef ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;

void FUNC_3(CAN_TypeDef* VAR_4, uint8_t VAR_5, CanRxMsg* VAR_6)
{

  FUNC_2(FUNC_0(VAR_4));
  FUNC_2(FUNC_1(VAR_5));

  VAR_6->IDE = (uint8_t)0x04 & VAR_4->sFIFOMailBox[VAR_5].RIR;
  if (VAR_6->IDE == VAR_1)
  {
    VAR_6->StdId = (uint32_t)0x000007FF & (VAR_4->sFIFOMailBox[VAR_5].RIR >> 21);
  }
  else
  {
    VAR_6->ExtId = (uint32_t)0x1FFFFFFF & (VAR_4->sFIFOMailBox[VAR_5].RIR >> 3);
  }

  VAR_6->RTR = (uint8_t)0x02 & VAR_4->sFIFOMailBox[VAR_5].RIR;

  VAR_6->DLC = (uint8_t)0x0F & VAR_4->sFIFOMailBox[VAR_5].RDTR;

  VAR_6->FMI = (uint8_t)0xFF & (VAR_4->sFIFOMailBox[VAR_5].RDTR >> 8);

  VAR_6->Data[0] = (uint8_t)0xFF & VAR_4->sFIFOMailBox[VAR_5].RDLR;
  VAR_6->Data[1] = (uint8_t)0xFF & (VAR_4->sFIFOMailBox[VAR_5].RDLR >> 8);
  VAR_6->Data[2] = (uint8_t)0xFF & (VAR_4->sFIFOMailBox[VAR_5].RDLR >> 16);
  VAR_6->Data[3] = (uint8_t)0xFF & (VAR_4->sFIFOMailBox[VAR_5].RDLR >> 24);
  VAR_6->Data[4] = (uint8_t)0xFF & VAR_4->sFIFOMailBox[VAR_5].RDHR;
  VAR_6->Data[5] = (uint8_t)0xFF & (VAR_4->sFIFOMailBox[VAR_5].RDHR >> 8);
  VAR_6->Data[6] = (uint8_t)0xFF & (VAR_4->sFIFOMailBox[VAR_5].RDHR >> 16);
  VAR_6->Data[7] = (uint8_t)0xFF & (VAR_4->sFIFOMailBox[VAR_5].RDHR >> 24);


  if (VAR_5 == VAR_0)
  {
    VAR_4->RF0R |= VAR_2;
  }

  else
  {
    VAR_4->RF1R |= VAR_3;
  }
}
