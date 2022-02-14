
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int CR; } ;
struct TYPE_4__ {int CRYP_AlgoDir; int CRYP_KeySize; int CRYP_AlgoMode; int CRYP_DataType; } ;
typedef TYPE_1__ CRYP_InitTypeDef ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(CRYP_InitTypeDef* VAR_9)
{

  FUNC_4(FUNC_1(VAR_9->CRYP_AlgoMode));
  FUNC_4(FUNC_2(VAR_9->CRYP_DataType));
  FUNC_4(FUNC_0(VAR_9->CRYP_AlgoDir));


  VAR_0->CR &= ~VAR_6;
  VAR_0->CR |= VAR_9->CRYP_AlgoMode;


  VAR_0->CR &= ~VAR_7;
  VAR_0->CR |= VAR_9->CRYP_DataType;


  if ((VAR_9->CRYP_AlgoMode == VAR_3) ||
      (VAR_9->CRYP_AlgoMode == VAR_1) ||
      (VAR_9->CRYP_AlgoMode == VAR_2) ||
      (VAR_9->CRYP_AlgoMode == VAR_4))
  {
    FUNC_4(FUNC_3(VAR_9->CRYP_KeySize));
    VAR_0->CR &= ~VAR_8;
    VAR_0->CR |= VAR_9->CRYP_KeySize;


  }


  VAR_0->CR &= ~VAR_5;
  VAR_0->CR |= VAR_9->CRYP_AlgoDir;
}
