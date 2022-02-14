
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int CR; } ;
struct TYPE_4__ {int HASH_AlgoSelection; int HASH_DataType; int HASH_AlgoMode; int HASH_HMACKeyType; } ;
typedef TYPE_1__ HASH_InitTypeDef ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void FUNC_5(HASH_InitTypeDef* VAR_7)
{

  FUNC_4(FUNC_1(VAR_7->HASH_AlgoSelection));
  FUNC_4(FUNC_2(VAR_7->HASH_DataType));
  FUNC_4(FUNC_0(VAR_7->HASH_AlgoMode));


  VAR_0->CR &= ~ (VAR_2 | VAR_3 | VAR_6);
  VAR_0->CR |= (VAR_7->HASH_AlgoSelection | VAR_7->HASH_DataType | VAR_7->HASH_AlgoMode);




  if(VAR_7->HASH_AlgoMode == VAR_1)
  {
    FUNC_4(FUNC_3(VAR_7->HASH_HMACKeyType));
    VAR_0->CR &= ~VAR_5;
    VAR_0->CR |= VAR_7->HASH_HMACKeyType;
  }



  VAR_0->CR |= VAR_4;
}
