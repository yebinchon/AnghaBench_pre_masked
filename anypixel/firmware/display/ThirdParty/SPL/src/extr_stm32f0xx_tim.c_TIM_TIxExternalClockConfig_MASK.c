
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_7__ {int SMCR; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ) ;

void FUNC_7(TIM_TypeDef* VAR_3, uint16_t VAR_4,
                                uint16_t VAR_5, uint16_t VAR_6)
{

  FUNC_6(FUNC_2(VAR_3));
  FUNC_6(FUNC_1(VAR_5));
  FUNC_6(FUNC_0(VAR_6));


  if (VAR_4 == VAR_2)
  {
    FUNC_4(VAR_3, VAR_5, VAR_0, VAR_6);
  }
  else
  {
    FUNC_3(VAR_3, VAR_5, VAR_0, VAR_6);
  }

  FUNC_5(VAR_3, VAR_4);

  VAR_3->SMCR |= VAR_1;
}
