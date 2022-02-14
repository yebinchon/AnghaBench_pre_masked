
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sample; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

bool
FUNC_0(unsigned int VAR_3)
{
 if (VAR_3 > VAR_1) {
  return 0;
 }

 if (VAR_2[VAR_3 - 1].sample & ~VAR_0) {
  return 1;
 } else {
  return 0;
 }
}
