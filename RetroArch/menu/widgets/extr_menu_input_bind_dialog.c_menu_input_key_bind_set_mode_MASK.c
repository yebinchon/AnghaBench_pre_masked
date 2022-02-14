
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int input_bind_timeout; int input_bind_hold; int * input_joypad_map; } ;
struct TYPE_12__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_13__ {unsigned int index_offset; } ;
typedef TYPE_3__ rarch_setting_t ;
typedef int menu_handle_t ;
struct TYPE_14__ {int cb; int * userdata; } ;
typedef TYPE_4__ input_keyboard_ctx_wait_t ;
typedef enum menu_input_binds_ctl_state { ____Placeholder_menu_input_binds_ctl_state } menu_input_binds_ctl_state ;
struct TYPE_15__ {int timer_timeout; int timer_hold; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int VAR_1 ;
 int * FUNC_2 () ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*,int ,int) ;
 int FUNC_5 (int,TYPE_3__*) ;
 int FUNC_6 (int *,int ) ;

bool FUNC_7(
      enum menu_input_binds_ctl_state VAR_4, void *VAR_5)
{
   unsigned VAR_6;
   input_keyboard_ctx_wait_t VAR_7;
   rarch_setting_t *VAR_8 = (rarch_setting_t*)VAR_5;
   settings_t *VAR_9 = FUNC_0();
   menu_handle_t *VAR_10 = FUNC_2();

   if (!VAR_8 || !VAR_10)
      return 0;
   if (FUNC_5(VAR_4, VAR_8) == -1)
      return 0;

   VAR_6 = VAR_8->index_offset;
   VAR_1 = VAR_9->uints.input_joypad_map[VAR_6];

   FUNC_3(
         &VAR_2, VAR_1);
   FUNC_4(
         &VAR_2, VAR_1, 0);

   FUNC_6(&VAR_2.timer_hold, VAR_9->uints.input_bind_hold);
   FUNC_6(&VAR_2.timer_timeout, VAR_9->uints.input_bind_timeout);

   VAR_7.userdata = VAR_10;
   VAR_7.cb = VAR_3;

   FUNC_1(VAR_0, &VAR_7);
   return 1;
}
