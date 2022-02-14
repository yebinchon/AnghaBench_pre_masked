
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ keyboard_hid_handle; int* keyboard_state; int* prev_keys; scalar_t__ mouse_hid_handle; int mouse_button_left; int mouse_button_right; int mouse_button_middle; int mouse_x_delta; int mouse_y_delta; scalar_t__ mouse_x; scalar_t__ mouse_y; TYPE_1__* joypad; } ;
typedef TYPE_2__ psp_input_t ;
struct TYPE_10__ {int* modifiers; int* keycodes; } ;
struct TYPE_9__ {int buttons; scalar_t__ rel_y; scalar_t__ rel_x; } ;
struct TYPE_7__ {int (* poll ) () ;} ;
typedef TYPE_3__ SceHidMouseReport ;
typedef TYPE_4__ SceHidKeyboardReport ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int,unsigned int,int ,int ,int ) ;
 unsigned int FUNC_1 (int) ;
 int** VAR_12 ;
 int FUNC_2 (scalar_t__,TYPE_4__**,int) ;
 int FUNC_3 (scalar_t__,TYPE_3__**,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_13)
{
   psp_input_t *VAR_14 = (psp_input_t*)VAR_13;

   if (VAR_14 && VAR_14->joypad)
      VAR_14->joypad->poll();
}
