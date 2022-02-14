
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int CFGR; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void FUNC_2(uint8_t VAR_1)
{
  uint32_t VAR_2 =0x00;

  FUNC_1(FUNC_0(VAR_1));
  VAR_2 = 1 <<(VAR_1 + 16);

  VAR_0->CFGR |= VAR_2;
}
