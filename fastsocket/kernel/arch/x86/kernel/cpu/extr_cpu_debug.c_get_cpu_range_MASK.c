
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flag; unsigned int min; unsigned int max; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(unsigned VAR_1, unsigned *VAR_2, unsigned *VAR_3,
         int VAR_4, unsigned VAR_5)
{
 if (VAR_0[VAR_4].flag == VAR_5) {
  *VAR_2 = VAR_0[VAR_4].min;
  *VAR_3 = VAR_0[VAR_4].max;
 } else
  *VAR_3 = 0;

 return *VAR_3;
}
