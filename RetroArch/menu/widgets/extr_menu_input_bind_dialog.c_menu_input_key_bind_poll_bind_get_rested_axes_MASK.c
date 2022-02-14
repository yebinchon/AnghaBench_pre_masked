
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct menu_bind_state {TYPE_1__* axis_state; } ;
typedef int input_device_driver_t ;
struct TYPE_2__ {void** rested_axes; } ;


 unsigned int VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 void* FUNC_2 (int const*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(
      struct menu_bind_state *VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;
   const input_device_driver_t *VAR_4 =
      FUNC_0();
   const input_device_driver_t *VAR_5 =
      FUNC_1();

   if (!VAR_1 || !VAR_4)
      return;


   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
      VAR_1->axis_state[VAR_2].rested_axes[VAR_3] =
         FUNC_2(VAR_4, VAR_2, VAR_3);

   if (VAR_5)
   {

        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
            VAR_1->axis_state[VAR_2].rested_axes[VAR_3] =
               FUNC_2(VAR_5, VAR_2, VAR_3);
   }
}
