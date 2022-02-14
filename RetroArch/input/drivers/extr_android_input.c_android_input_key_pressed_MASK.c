
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {float axis_threshold; scalar_t__ joy_idx; TYPE_5__* auto_binds; } ;
typedef TYPE_2__ rarch_joypad_info_t ;
struct TYPE_10__ {TYPE_1__* joypad; } ;
typedef TYPE_3__ android_input_t ;
struct TYPE_12__ {scalar_t__ joykey; scalar_t__ joyaxis; } ;
struct TYPE_11__ {scalar_t__ joykey; scalar_t__ joyaxis; } ;
struct TYPE_8__ {int (* axis ) (scalar_t__,scalar_t__) ;scalar_t__ (* button ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int) ;
 TYPE_5__** VAR_4 ;
 TYPE_4__** VAR_5 ;
 float* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(android_input_t *VAR_6, int VAR_7)
{
   uint64_t VAR_8;
   uint32_t VAR_9;
   rarch_joypad_info_t VAR_10;
   VAR_10.joy_idx = 0;
   VAR_10.auto_binds = VAR_4[0];
   VAR_10.axis_threshold = *
      (FUNC_2(VAR_1));

   if((VAR_7 < VAR_3)
         && FUNC_1(VAR_5[0],
            VAR_7))
      return 1;

   VAR_8 =
      (VAR_5[0][VAR_7].joykey != VAR_2)
      ? VAR_5[0][VAR_7].joykey
      : VAR_10.auto_binds[VAR_7].joykey;
   VAR_9 =
      (VAR_5[0][VAR_7].joyaxis != VAR_0)
      ? VAR_5[0][VAR_7].joyaxis
      : VAR_10.auto_binds[VAR_7].joyaxis;

   if ((uint16_t)VAR_8 != VAR_2 && VAR_6->joypad->button(VAR_10.joy_idx, (uint16_t)VAR_8))
      return 1;
   if (((float)FUNC_0(VAR_6->joypad->axis(VAR_10.joy_idx, VAR_9)) / 0x8000) > VAR_10.axis_threshold)
      return 1;
   return 0;
}
