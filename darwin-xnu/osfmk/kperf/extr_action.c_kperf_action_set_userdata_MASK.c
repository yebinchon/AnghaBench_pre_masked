
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int userdata; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(unsigned VAR_3, uint32_t VAR_4)
{
 if ((VAR_3 > VAR_1) || (VAR_3 == 0)) {
  return VAR_0;
 }

 VAR_2[VAR_3 - 1].userdata = VAR_4;

 return 0;
}
