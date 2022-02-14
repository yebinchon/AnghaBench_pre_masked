
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int FMR; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(uint8_t VAR_2)
{

  FUNC_1(FUNC_0(VAR_2));


  VAR_0->FMR |= VAR_1;


  VAR_0->FMR &= (uint32_t)0xFFFFC0F1 ;
  VAR_0->FMR |= (uint32_t)(VAR_2)<<8;


  VAR_0->FMR &= ~VAR_1;
}
