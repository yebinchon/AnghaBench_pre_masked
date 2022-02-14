
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_keybind {void* mbutton; int joyaxis; void* joykey; int key; } ;
struct TYPE_5__ {size_t index_offset; } ;
typedef TYPE_1__ rarch_setting_t ;
struct TYPE_6__ {unsigned int min; unsigned int max; } ;
typedef TYPE_2__ menu_input_ctx_bind_limits_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* VAR_3 ;
 struct retro_keybind** VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 struct retro_keybind* VAR_5 ;
 struct retro_keybind* VAR_6 ;

__attribute__((used)) static int FUNC_1(rarch_setting_t *VAR_7, bool VAR_8)
{
   unsigned VAR_9;
   menu_input_ctx_bind_limits_t VAR_10;
   struct retro_keybind *VAR_11 = ((void*)0);
   const struct retro_keybind *VAR_12 = ((void*)0);

   (void)VAR_8;

   if (!VAR_7)
      return -1;

   VAR_11 = &VAR_4[VAR_7->index_offset][0];
   VAR_12 = (VAR_7->index_offset) ?
      VAR_6 : VAR_5;

   VAR_10.min = VAR_1;
   VAR_10.max = VAR_2;

   FUNC_0(&VAR_10);

   for (VAR_9 = VAR_1;
         VAR_9 <= VAR_2; VAR_9++, VAR_11++)
   {
      VAR_11->key = VAR_12[VAR_9 - VAR_1].key;
      VAR_11->joykey = VAR_3;
      VAR_11->joyaxis = VAR_0;
      VAR_11->mbutton = VAR_3;
   }

   return 0;
}
