
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {TYPE_1__* sTxMailBox; scalar_t__ MCR; } ;
struct TYPE_5__ {scalar_t__ TDTR; } ;
typedef scalar_t__ FunctionalState ;
typedef TYPE_2__ CAN_TypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(CAN_TypeDef* VAR_5, FunctionalState VAR_6)
{

  FUNC_2(FUNC_0(VAR_5));
  FUNC_2(FUNC_1(VAR_6));
  if (VAR_6 != VAR_4)
  {

    VAR_5->MCR |= VAR_0;


    VAR_5->sTxMailBox[0].TDTR |= ((uint32_t)VAR_1);
    VAR_5->sTxMailBox[1].TDTR |= ((uint32_t)VAR_2);
    VAR_5->sTxMailBox[2].TDTR |= ((uint32_t)VAR_3);
  }
  else
  {

    VAR_5->MCR &= (uint32_t)(~(uint32_t)VAR_0);


    VAR_5->sTxMailBox[0].TDTR &= ((uint32_t)~VAR_1);
    VAR_5->sTxMailBox[1].TDTR &= ((uint32_t)~VAR_2);
    VAR_5->sTxMailBox[2].TDTR &= ((uint32_t)~VAR_3);
  }
}
