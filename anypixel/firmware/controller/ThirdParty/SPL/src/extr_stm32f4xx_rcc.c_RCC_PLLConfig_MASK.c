
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int PLLCFGR; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int ) ;

void FUNC_6(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{

  FUNC_5(FUNC_4(VAR_1));
  FUNC_5(FUNC_0(VAR_2));
  FUNC_5(FUNC_1(VAR_3));
  FUNC_5(FUNC_2(VAR_4));
  FUNC_5(FUNC_3(VAR_5));

  VAR_0->PLLCFGR = VAR_2 | (VAR_3 << 6) | (((VAR_4 >> 1) -1) << 16) | (VAR_1) |
                 (VAR_5 << 24);
}
