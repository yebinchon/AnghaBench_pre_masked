
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int enable; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;

uint16_t FUNC_0(void)
{
 int VAR_2;
 uint16_t VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  VAR_3 |= (VAR_1[VAR_2]->enable << (VAR_2 << 3));
 return VAR_3;
}
