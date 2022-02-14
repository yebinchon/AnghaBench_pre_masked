
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

int FUNC_2(int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3 == -1) {

  FUNC_0();
 }

 if (!VAR_3)
  return -1;

 if (VAR_4 >= VAR_1)
  return -1;

 if (VAR_4 < 0) {

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (VAR_2[VAR_6].avail)
    return FUNC_1(VAR_6);

   if (VAR_6 == 5 && VAR_5 == VAR_0)
    break;
  }
 } else {

  if (VAR_2[VAR_4].avail)
   return FUNC_1(VAR_4);
 }


 return -1;
}
