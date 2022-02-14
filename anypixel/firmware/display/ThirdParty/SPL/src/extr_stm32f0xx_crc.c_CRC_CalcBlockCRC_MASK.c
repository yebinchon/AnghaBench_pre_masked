
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t DR; } ;


 TYPE_1__* VAR_0 ;

uint32_t FUNC_0(uint32_t VAR_1[], uint32_t VAR_2)
{
  uint32_t VAR_3 = 0;

  for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  {
    VAR_0->DR = VAR_1[VAR_3];
  }
  return (VAR_0->DR);
}
