
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ send; scalar_t__ used; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void)
{
   int VAR_2;
   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      if (VAR_1[VAR_2].used && VAR_1[VAR_2].send)
      {
         FUNC_0(VAR_2);
      }
   }
}
