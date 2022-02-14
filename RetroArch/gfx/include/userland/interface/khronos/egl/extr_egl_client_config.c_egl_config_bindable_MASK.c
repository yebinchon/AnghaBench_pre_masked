
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;
typedef int EGLenum ;


 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int) ;

bool FUNC_4(int VAR_2, EGLenum VAR_3)
{
   FUNC_3(VAR_2 >= 0 && VAR_2 < VAR_0);
   switch (VAR_3) {
   case 130:
      return 1;
   case 129:
      return FUNC_1(VAR_1[VAR_2].features);
   case 128:
      return FUNC_2(VAR_1[VAR_2].features);
   default:
      FUNC_0();
      return 0;
   }
}
