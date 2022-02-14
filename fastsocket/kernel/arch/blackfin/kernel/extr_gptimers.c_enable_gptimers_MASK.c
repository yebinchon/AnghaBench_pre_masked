
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__** VAR_2 ;
 int FUNC_1 (int) ;

void FUNC_2(uint16_t VAR_3)
{
 int VAR_4;
 FUNC_1((VAR_3 & ~VAR_1) == 0);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_2[VAR_4]->enable = VAR_3 & 0xFF;
  VAR_3 >>= 8;
 }
 FUNC_0();
}
