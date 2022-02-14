
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int SR; } ;
typedef TYPE_1__ USART_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void FUNC_4(USART_TypeDef* VAR_1, uint16_t VAR_2)
{
  uint16_t VAR_3 = 0x00, VAR_4 = 0x00;

  FUNC_3(FUNC_1(VAR_1));
  FUNC_3(FUNC_2(VAR_2));


  if (VAR_2 == VAR_0)
  {
    FUNC_3(FUNC_0(VAR_1));
  }

  VAR_3 = VAR_2 >> 0x08;
  VAR_4 = ((uint16_t)0x01 << (uint16_t)VAR_3);
  VAR_1->SR = (uint16_t)~VAR_4;
}
