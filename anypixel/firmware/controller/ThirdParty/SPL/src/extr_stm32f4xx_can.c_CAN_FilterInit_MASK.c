
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int FA1R; int FS1R; int FM1R; int FFA1R; int FMR; TYPE_1__* sFilterRegister; } ;
struct TYPE_6__ {int CAN_FilterNumber; scalar_t__ CAN_FilterMode; scalar_t__ CAN_FilterScale; scalar_t__ CAN_FilterFIFOAssignment; scalar_t__ CAN_FilterActivation; scalar_t__ CAN_FilterMaskIdLow; scalar_t__ CAN_FilterMaskIdHigh; scalar_t__ CAN_FilterIdLow; scalar_t__ CAN_FilterIdHigh; } ;
struct TYPE_5__ {int FR1; int FR2; } ;
typedef TYPE_2__ CAN_FilterInitTypeDef ;


 TYPE_4__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

void FUNC_6(CAN_FilterInitTypeDef* VAR_8)
{
  uint32_t VAR_9 = 0;

  FUNC_5(FUNC_2(VAR_8->CAN_FilterNumber));
  FUNC_5(FUNC_1(VAR_8->CAN_FilterMode));
  FUNC_5(FUNC_3(VAR_8->CAN_FilterScale));
  FUNC_5(FUNC_0(VAR_8->CAN_FilterFIFOAssignment));
  FUNC_5(FUNC_4(VAR_8->CAN_FilterActivation));

  VAR_9 = ((uint32_t)1) << VAR_8->CAN_FilterNumber;


  VAR_0->FMR |= VAR_7;


  VAR_0->FA1R &= ~(uint32_t)VAR_9;


  if (VAR_8->CAN_FilterScale == VAR_2)
  {

    VAR_0->FS1R &= ~(uint32_t)VAR_9;



    VAR_0->sFilterRegister[VAR_8->CAN_FilterNumber].FR1 =
       ((0x0000FFFF & (uint32_t)VAR_8->CAN_FilterMaskIdLow) << 16) |
        (0x0000FFFF & (uint32_t)VAR_8->CAN_FilterIdLow);



    VAR_0->sFilterRegister[VAR_8->CAN_FilterNumber].FR2 =
       ((0x0000FFFF & (uint32_t)VAR_8->CAN_FilterMaskIdHigh) << 16) |
        (0x0000FFFF & (uint32_t)VAR_8->CAN_FilterIdHigh);
  }

  if (VAR_8->CAN_FilterScale == VAR_3)
  {

    VAR_0->FS1R |= VAR_9;

    VAR_0->sFilterRegister[VAR_8->CAN_FilterNumber].FR1 =
       ((0x0000FFFF & (uint32_t)VAR_8->CAN_FilterIdHigh) << 16) |
        (0x0000FFFF & (uint32_t)VAR_8->CAN_FilterIdLow);

    VAR_0->sFilterRegister[VAR_8->CAN_FilterNumber].FR2 =
       ((0x0000FFFF & (uint32_t)VAR_8->CAN_FilterMaskIdHigh) << 16) |
        (0x0000FFFF & (uint32_t)VAR_8->CAN_FilterMaskIdLow);
  }


  if (VAR_8->CAN_FilterMode == VAR_1)
  {

    VAR_0->FM1R &= ~(uint32_t)VAR_9;
  }
  else
  {

    VAR_0->FM1R |= (uint32_t)VAR_9;
  }


  if (VAR_8->CAN_FilterFIFOAssignment == VAR_4)
  {

    VAR_0->FFA1R &= ~(uint32_t)VAR_9;
  }

  if (VAR_8->CAN_FilterFIFOAssignment == VAR_5)
  {

    VAR_0->FFA1R |= (uint32_t)VAR_9;
  }


  if (VAR_8->CAN_FilterActivation == VAR_6)
  {
    VAR_0->FA1R |= VAR_9;
  }


  VAR_0->FMR &= ~VAR_7;
}
