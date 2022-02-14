
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ sample; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(unsigned VAR_3, uint32_t *VAR_4)
{
 if ((VAR_3 > VAR_1)) {
  return VAR_0;
 }

 if (VAR_3 == 0) {
  *VAR_4 = 0;
 } else {
  *VAR_4 = VAR_2[VAR_3 - 1].sample;
 }

 return 0;
}
