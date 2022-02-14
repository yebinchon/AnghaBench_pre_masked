
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ppnum_t ;
struct TYPE_2__ {scalar_t__ end; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

ppnum_t FUNC_0(void)
{

 ppnum_t VAR_2, VAR_3 = 0;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 {
  VAR_2 = VAR_1[VAR_4].end - 1;
  if (VAR_2 > VAR_3)
   VAR_3 = VAR_2;
 }
 return (VAR_3);





}
