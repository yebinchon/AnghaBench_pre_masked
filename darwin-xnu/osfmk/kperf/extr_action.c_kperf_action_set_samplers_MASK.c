
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int sample; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_0(unsigned VAR_5, uint32_t VAR_6)
{
 if ((VAR_5 > VAR_3) || (VAR_5 == 0)) {
  return VAR_0;
 }



 if ((VAR_6 & VAR_2) && (VAR_6 & VAR_1)) {
  return VAR_0;
 }

 VAR_4[VAR_5 - 1].sample = VAR_6;

 return 0;
}
