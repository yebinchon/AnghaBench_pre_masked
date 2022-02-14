
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * led_map; } ;
struct TYPE_6__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_7__ {int * map; scalar_t__* setup; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
   int VAR_2;
   settings_t *VAR_3 = FUNC_1();

   if (!VAR_3)
      return;

   for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      VAR_1->setup[VAR_2] = 0;
      VAR_1->map[VAR_2] = VAR_3->uints.led_map[VAR_2];
      FUNC_0("[LED]: rpi map[%d]=%d\n", VAR_2, VAR_1->map[VAR_2]);
   }
}
