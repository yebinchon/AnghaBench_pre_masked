
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int SMCR; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

void FUNC_6(TIM_TypeDef* VAR_4, uint16_t VAR_5,
                            uint16_t VAR_6, uint16_t VAR_7)
{
  uint16_t VAR_8 = 0;


  FUNC_5(FUNC_3(VAR_4));
  FUNC_5(FUNC_2(VAR_5));
  FUNC_5(FUNC_1(VAR_6));
  FUNC_5(FUNC_0(VAR_7));

  FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);


  VAR_8 = VAR_4->SMCR;


  VAR_8 &= (uint16_t)~VAR_0;


  VAR_8 |= VAR_2;


  VAR_8 &= (uint16_t)~VAR_1;
  VAR_8 |= VAR_3;


  VAR_4->SMCR = VAR_8;
}
