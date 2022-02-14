
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct retro_keybind {void* mbutton; int key; int joyaxis; void* joykey; } ;
struct TYPE_7__ {scalar_t__ keybind; } ;
struct TYPE_6__ {TYPE_2__ target; } ;
struct TYPE_8__ {scalar_t__ index_offset; TYPE_1__ value; } ;
typedef TYPE_3__ rarch_setting_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(rarch_setting_t *VAR_5)
{
   unsigned VAR_6;
   struct retro_keybind *VAR_7 = ((void*)0);
   struct retro_keybind *VAR_8 = (struct retro_keybind *)VAR_3;

   if (!VAR_5)
      return -1;

   VAR_7 = (struct retro_keybind*)VAR_5->value.target.keybind;
   if (!VAR_7)
      return -1;

   VAR_7->joykey = VAR_2;
   VAR_7->joyaxis = VAR_0;

   if (VAR_5->index_offset)
      VAR_8 = (struct retro_keybind*)VAR_4;

   VAR_6 = FUNC_0(VAR_5);
   VAR_7->key = VAR_8[VAR_6 - VAR_1].key;

   VAR_7->mbutton = VAR_2;

   return 0;
}
