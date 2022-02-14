
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int disable; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint16_t VAR_3)
{
 int VAR_4;
 uint16_t VAR_5 = VAR_3;
 FUNC_0((VAR_3 & ~VAR_1) == 0);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_2[VAR_4]->disable = VAR_5 & 0xFF;
  VAR_5 >>= 8;
 }
}
