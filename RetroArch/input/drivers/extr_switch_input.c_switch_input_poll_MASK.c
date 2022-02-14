
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef unsigned int uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int py; int px; } ;
typedef TYPE_2__ touchPosition ;
struct TYPE_11__ {int* previous_touch_state; int* touch_state; int* keyboard_state; int mouse_previous_report; int mouse_button_left; int mouse_button_right; int mouse_button_middle; scalar_t__ mouse_x_delta; scalar_t__ mouse_y_delta; scalar_t__ mouse_x; scalar_t__ mouse_y; int mouse_wheel; int * touch_y_screen; int * touch_x_screen; int * touch_y_viewport; int * touch_x_viewport; int * touch_y; int * touch_x; int * touch_previous_y; int * touch_previous_x; TYPE_1__* joypad; } ;
typedef TYPE_3__ switch_input_t ;
struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {int sym; } ;
struct TYPE_12__ {scalar_t__ velocityX; scalar_t__ velocityY; int scrollVelocityY; } ;
struct TYPE_9__ {int (* poll ) () ;} ;
typedef TYPE_4__ MousePosition ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,unsigned int) ;
 int FUNC_6 (int,unsigned int,int ,int ,int ) ;
 unsigned int FUNC_7 (int) ;
 TYPE_5__* VAR_17 ;
 int FUNC_8 () ;
 int FUNC_9 (struct video_viewport*,int ,int ,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_18)
{
   switch_input_t *VAR_19 = (switch_input_t*) VAR_18;
   if (VAR_19->joypad)
      VAR_19->joypad->poll();
}
