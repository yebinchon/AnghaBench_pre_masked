
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ ucallstack_depth; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_0(unsigned VAR_4, uint32_t VAR_5)
{
 if ((VAR_4 > VAR_2) || (VAR_4 == 0)) {
  return VAR_0;
 }

 if (VAR_5 > VAR_1) {
  return VAR_0;
 }

 VAR_3[VAR_4 - 1].ucallstack_depth = VAR_5;

 return 0;
}
