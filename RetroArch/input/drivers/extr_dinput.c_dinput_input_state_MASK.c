
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_keybind {unsigned int key; int mbutton; int joyaxis; int joykey; int valid; } ;
struct dinput_input {int* state; int mouse_rel_x; int mouse_rel_y; TYPE_3__* joypad; } ;
struct TYPE_8__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_2__ rarch_joypad_info_t ;
typedef int int16_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;
struct TYPE_10__ {int keyboard_mapping_blocked; } ;
struct TYPE_9__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;
struct TYPE_7__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;


 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;

 unsigned int VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dinput_input*,unsigned int,unsigned int) ;
 int FUNC_2 (struct dinput_input*,unsigned int,int ) ;
 int FUNC_3 (struct dinput_input*,unsigned int,unsigned int) ;
 int FUNC_4 (struct dinput_input*,unsigned int,unsigned int) ;
 int FUNC_5 (struct dinput_input*,unsigned int,unsigned int,int) ;
 int FUNC_6 (struct dinput_input*,struct retro_keybind const*,unsigned int,unsigned int) ;
 TYPE_5__ VAR_18 ;
 int FUNC_7 (TYPE_3__*,TYPE_2__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 size_t* VAR_19 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int const) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int const) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int const) ;

__attribute__((used)) static int16_t FUNC_14(void *VAR_20,
      rarch_joypad_info_t VAR_21,
      const struct retro_keybind **VAR_22, unsigned VAR_23,
      unsigned VAR_24, unsigned VAR_25, unsigned VAR_26)
{
   struct dinput_input *VAR_27 = (struct dinput_input*)VAR_20;

   switch (VAR_24)
   {
      case 132:
         if (VAR_26 == VAR_17)
         {
            unsigned VAR_28;
            int16_t VAR_29 = 0;
            for (VAR_28 = 0; VAR_28 < VAR_3; VAR_28++)
            {
               if (VAR_22[VAR_23][VAR_28].key < VAR_16)
               {
                  if (VAR_27->state[VAR_19[(enum retro_key)VAR_22[VAR_23][VAR_28].key]] & 0x80)
                     if ((VAR_28 == VAR_4) || !VAR_18.keyboard_mapping_blocked)
                     {
                        VAR_29 |= (1 << VAR_28);
                        continue;
                     }
               }

               if (VAR_22[VAR_23][VAR_28].valid)
               {

                     const uint64_t VAR_30 = (VAR_22[VAR_23][VAR_28].joykey != VAR_1)
                     ? VAR_22[VAR_23][VAR_28].joykey : VAR_21.auto_binds[VAR_28].joykey;
                  const uint32_t VAR_31 = (VAR_22[VAR_23][VAR_28].joyaxis != VAR_0)
                     ? VAR_22[VAR_23][VAR_28].joyaxis : VAR_21.auto_binds[VAR_28].joyaxis;

                  if (FUNC_2(
                           VAR_27, VAR_23, VAR_22[VAR_23][VAR_28].mbutton))
                  {
                     VAR_29 |= (1 << VAR_28);
                     continue;
                  }

                  if ((uint16_t)VAR_30 != VAR_1
                        && VAR_27->joypad->button(
                           VAR_21.joy_idx, (uint16_t)VAR_30))
                  {
                     VAR_29 |= (1 << VAR_28);
                     continue;
                  }

                  if (((float)FUNC_0(VAR_27->joypad->axis(VAR_21.joy_idx, VAR_31)) / 0x8000) > VAR_21.axis_threshold)
                  {
                     VAR_29 |= (1 << VAR_28);
                     continue;
                  }
               }
            }
            return VAR_29;
         }
         else
         {
            if (VAR_26 < VAR_2)
            {
               if (VAR_22[VAR_23][VAR_26].key < VAR_16)
               {
                  if (VAR_27->state[VAR_19[(enum retro_key)VAR_22[VAR_23][VAR_26].key]] & 0x80)
                     if ((VAR_26 == VAR_4) || !VAR_18.keyboard_mapping_blocked)
                        return 1;
               }
               if (VAR_22[VAR_23][VAR_26].valid)
               {

                     const uint64_t VAR_32 = (VAR_22[VAR_23][VAR_26].joykey != VAR_1)
                     ? VAR_22[VAR_23][VAR_26].joykey : VAR_21.auto_binds[VAR_26].joykey;
                  const uint32_t VAR_33 = (VAR_22[VAR_23][VAR_26].joyaxis != VAR_0)
                     ? VAR_22[VAR_23][VAR_26].joyaxis : VAR_21.auto_binds[VAR_26].joyaxis;

                  if (FUNC_2(VAR_27, VAR_23, VAR_22[VAR_23][VAR_26].mbutton))
                     return 1;
                  if ((uint16_t)VAR_32 != VAR_1
                        && VAR_27->joypad->button(VAR_21.joy_idx, (uint16_t)VAR_32))
                     return 1;
                  if (((float)FUNC_0(VAR_27->joypad->axis(VAR_21.joy_idx, VAR_33)) / 0x8000) > VAR_21.axis_threshold)
                     return 1;
               }
            }
         }
         break;
      case 131:
         return (VAR_26 < VAR_16) && VAR_27->state[VAR_19[(enum retro_key)VAR_26]] & 0x80;
      case 150:
         if (VAR_22[VAR_23])
         {
            int16_t VAR_34 = FUNC_6(VAR_27, VAR_22[VAR_23], VAR_25, VAR_26);
            if (!VAR_34)
               VAR_34 = FUNC_7(VAR_27->joypad, VAR_21,
                     VAR_23, VAR_25, VAR_26, VAR_22[VAR_23]);
            return VAR_34;
         }
         return 0;

      case 129:
         return FUNC_3(VAR_27, VAR_23, VAR_26);

      case 152:
         return FUNC_4(VAR_27, VAR_23, VAR_26);

      case 128:
      case 151:
         return FUNC_5(VAR_27, VAR_25, VAR_26,
               VAR_24 == 151);

      case 130:
         switch (VAR_26)
         {

            case 139:
            case 138:
            case 142:
               return FUNC_1( VAR_27, VAR_25, VAR_26);


            case 135:
            case 140:
            case 149:
            case 148:
            case 147:
            case 136:
            case 137:
            case 143:
            case 146:
            case 145:
            case 144:
            case 141:
               {
                  unsigned VAR_35 = 0;
                  switch (VAR_26)
                  {
                     case 135:
                        VAR_35 = VAR_15;
                        break;
                     case 140:
                        VAR_35 = VAR_12;
                        break;
                     case 149:
                        VAR_35 = VAR_5;
                        break;
                     case 148:
                        VAR_35 = VAR_6;
                        break;
                     case 147:
                        VAR_35 = VAR_7;
                        break;
                     case 136:
                        VAR_35 = VAR_14;
                        break;
                     case 137:
                        VAR_35 = VAR_13;
                        break;
                     case 143:
                        VAR_35 = VAR_11;
                        break;
                     case 146:
                        VAR_35 = VAR_8;
                        break;
                     case 145:
                        VAR_35 = VAR_9;
                        break;
                     case 144:
                        VAR_35 = VAR_10;
                        break;
                     case 141:
                        VAR_35 = VAR_14;
                        break;
                  }
                  if (VAR_22[VAR_23][VAR_35].key < VAR_16)
                  {
                     if (VAR_27->state[VAR_19[(enum retro_key)VAR_22[VAR_23][VAR_35].key]] & 0x80)
                        if ((VAR_35 == VAR_4) || !VAR_18.keyboard_mapping_blocked)
                           return 1;
                  }
                  if (VAR_22[VAR_23][VAR_35].valid)
                  {

                        const uint64_t VAR_36 = (VAR_22[VAR_23][VAR_35].joykey != VAR_1)
                        ? VAR_22[VAR_23][VAR_35].joykey : VAR_21.auto_binds[VAR_35].joykey;
                     const uint32_t VAR_37 = (VAR_22[VAR_23][VAR_35].joyaxis != VAR_0)
                        ? VAR_22[VAR_23][VAR_35].joyaxis : VAR_21.auto_binds[VAR_35].joyaxis;

                     if (FUNC_2(VAR_27, VAR_23, VAR_22[VAR_23][VAR_35].mbutton))
                        return 1;
                     if ((uint16_t)VAR_36 != VAR_1
                           && VAR_27->joypad->button(VAR_21.joy_idx, (uint16_t)VAR_36))
                        return 1;
                     if (((float)FUNC_0(VAR_27->joypad->axis(VAR_21.joy_idx, VAR_37)) / 0x8000) > VAR_21.axis_threshold)
                        return 1;
                  }
               }
               break;

            case 134:
               return VAR_27->mouse_rel_x;
            case 133:
               return VAR_27->mouse_rel_y;
         }
   break;
   }

   return 0;
}
