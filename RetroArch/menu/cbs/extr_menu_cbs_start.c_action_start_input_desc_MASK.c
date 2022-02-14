
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct retro_keybind {unsigned int id; } ;
struct TYPE_4__ {unsigned int** input_remap_ids; } ;
struct TYPE_5__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 struct retro_keybind** VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned VAR_3, const char *VAR_4)
{
   settings_t *VAR_5 = FUNC_0();
   unsigned VAR_6 = VAR_3 - VAR_0;
   unsigned VAR_7 = VAR_6 / (VAR_1 + 4);
   unsigned VAR_8 = VAR_6 - (VAR_7 * (VAR_1 + 4));

   (void)VAR_4;

   if (VAR_8 < VAR_1)
   {
      const struct retro_keybind *VAR_9 = &VAR_2[VAR_7]
            [VAR_8];
      VAR_5->uints.input_remap_ids[VAR_7][VAR_8] = VAR_9->id;
   }
   else
      VAR_5->uints.input_remap_ids[VAR_7][VAR_8] =
         VAR_8 - VAR_1;

   return 0;
}
