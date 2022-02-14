
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* led_map; } ;
struct TYPE_6__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_7__ {scalar_t__* map; scalar_t__* setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
   int VAR_3;
   settings_t *VAR_4 = FUNC_1();

   FUNC_0("[LED]: overlay LED driver init\n");

   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   {
      VAR_2->setup[VAR_3] = 0;
      VAR_2->map[VAR_3] = VAR_4->uints.led_map[VAR_3];
      FUNC_0("[LED]: overlay map[%d]=%d\n",VAR_3,VAR_2->map[VAR_3]);

      if (VAR_2->map[VAR_3] >= 0)
         FUNC_2(VAR_2->map[VAR_3],
               VAR_1);
   }
}
