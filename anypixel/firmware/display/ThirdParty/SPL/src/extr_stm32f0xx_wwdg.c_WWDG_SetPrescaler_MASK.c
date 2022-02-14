
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CFR; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ) ;

void FUNC_2(uint32_t VAR_2)
{
  uint32_t VAR_3 = 0;

  FUNC_1(FUNC_0(VAR_2));

  VAR_3 = VAR_1->CFR & VAR_0;

  VAR_3 |= VAR_2;

  VAR_1->CFR = VAR_3;
}
