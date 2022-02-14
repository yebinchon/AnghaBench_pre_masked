
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ manualchange; } ;
struct TYPE_3__ {int FBCR; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1(void)
{
   if (((VAR_1->FBCR & 2) == 0) || VAR_0.manualchange)
   {
  u8 *VAR_5;
      if (VAR_4)
      {
         FUNC_0();
      }

      VAR_5 = VAR_3;
      VAR_3 = VAR_2;
      VAR_2 = VAR_5;
      VAR_0.manualchange = 0;
   }
}
