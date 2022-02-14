
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int* EXTICR; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3(uint8_t VAR_1, uint8_t VAR_2)
{
  uint32_t VAR_3 = 0x00;


  FUNC_2(FUNC_1(VAR_1));
  FUNC_2(FUNC_0(VAR_2));

  VAR_3 = ((uint32_t)0x0F) << (0x04 * (VAR_2 & (uint8_t)0x03));
  VAR_0->EXTICR[VAR_2 >> 0x02] &= ~VAR_3;
  VAR_0->EXTICR[VAR_2 >> 0x02] |= (((uint32_t)VAR_1) << (0x04 * (VAR_2 & (uint8_t)0x03)));
}
