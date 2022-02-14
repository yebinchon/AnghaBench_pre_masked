
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct retro_keybind {unsigned int id; } ;
struct TYPE_8__ {unsigned int** input_remap_ids; scalar_t__* input_libretro_device; scalar_t__* input_analog_dpad_mode; int ** input_keymapper_ids; } ;
struct TYPE_9__ {TYPE_2__ uints; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_7__ {int * remapfile; } ;
struct TYPE_10__ {TYPE_1__ name; } ;
typedef TYPE_4__ global_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 () ;
 struct retro_keybind** VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(bool VAR_9)
{
   unsigned VAR_10, VAR_11;
   settings_t *VAR_12 = FUNC_0();
   global_t *VAR_13 = FUNC_2();

   if (!VAR_13)
      return;

   if (VAR_9)
   {
      if (!FUNC_4(VAR_13->name.remapfile))
         FUNC_1(VAR_13->name.remapfile);
      VAR_13->name.remapfile = ((void*)0);
      FUNC_3(VAR_2, ((void*)0));
      FUNC_3(VAR_1, ((void*)0));
      FUNC_3(VAR_3, ((void*)0));
   }

   for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   {
      for (VAR_11 = 0; VAR_11 < VAR_4 + 8; VAR_11++)
      {
         if (VAR_11 < VAR_4)
         {
            const struct retro_keybind *VAR_14 = &VAR_6[VAR_10][VAR_11];
            if (VAR_14)
               VAR_12->uints.input_remap_ids[VAR_10][VAR_11] = VAR_14->id;
            VAR_12->uints.input_keymapper_ids[VAR_10][VAR_11] = VAR_5;
         }
         else
            VAR_12->uints.input_remap_ids[VAR_10][VAR_11] = VAR_11;
      }

      if (VAR_7[VAR_10])
         VAR_12->uints.input_analog_dpad_mode[VAR_10] = VAR_7[VAR_10];
      if (VAR_8[VAR_10])
         VAR_12->uints.input_libretro_device[VAR_10] = VAR_8[VAR_10];
   }
}
