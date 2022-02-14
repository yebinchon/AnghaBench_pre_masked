
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct menu_bind_state {int skip; TYPE_4__* state; } ;
struct TYPE_6__ {float axis_threshold; int * auto_binds; scalar_t__ joy_idx; } ;
typedef TYPE_1__ rarch_joypad_info_t ;
struct TYPE_7__ {scalar_t__ (* input_state ) (void*,TYPE_1__,int *,int ,int ,int ,int ) ;} ;
typedef TYPE_2__ input_driver_t ;
typedef int input_device_driver_t ;
struct TYPE_8__ {int * mbuttons; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 void* FUNC_2 () ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (int const*,struct menu_bind_state*,unsigned int,int) ;
 scalar_t__ FUNC_7 (void*,TYPE_1__,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(
      struct menu_bind_state *VAR_3,
      unsigned VAR_4,
      bool VAR_5)
{
   unsigned VAR_6;
   rarch_joypad_info_t VAR_7;
   input_driver_t *VAR_8 = FUNC_3();
   void *VAR_9 = FUNC_2();
   const input_device_driver_t *VAR_10 =
      FUNC_0();
   const input_device_driver_t *VAR_11 =
      FUNC_1();

   if (!VAR_3)
      return;

   FUNC_5(VAR_3->state, 0, sizeof(VAR_3->state));


    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        VAR_3->state[VAR_4].mbuttons[VAR_6] =
           FUNC_4(VAR_4, VAR_6);

   VAR_7.joy_idx = 0;
   VAR_7.auto_binds = ((void*)0);
   VAR_7.axis_threshold = 0.0f;

   VAR_3->skip = VAR_5 || VAR_8->input_state(VAR_9,
         VAR_7,
         ((void*)0),
         0, VAR_2, 0, VAR_1);

   FUNC_6(
         VAR_10, VAR_3, VAR_4, VAR_5);

   if (VAR_11)
      FUNC_6(
            VAR_11, VAR_3, VAR_4, VAR_5);
}
