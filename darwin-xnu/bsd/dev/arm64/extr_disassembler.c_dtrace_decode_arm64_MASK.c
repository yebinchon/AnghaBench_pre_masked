
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int mask; int value; int type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_0(uint32_t VAR_3)
{
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if ((VAR_3 & VAR_2[VAR_4].mask) == VAR_2[VAR_4].value) {
   return VAR_2[VAR_4].type;
  }
 }

 return VAR_0;
}
