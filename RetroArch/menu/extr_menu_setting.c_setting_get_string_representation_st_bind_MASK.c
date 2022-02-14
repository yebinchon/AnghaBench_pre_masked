
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_keybind {int id; } ;
struct TYPE_5__ {scalar_t__ keybind; } ;
struct TYPE_6__ {TYPE_1__ target; } ;
struct TYPE_7__ {unsigned int index_offset; TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*,struct retro_keybind const*,struct retro_keybind const*,size_t) ;

__attribute__((used)) static void FUNC_2(rarch_setting_t *VAR_0,
      char *VAR_1, size_t VAR_2)
{
   unsigned VAR_3 = 0;
   const struct retro_keybind* VAR_4 = ((void*)0);
   const struct retro_keybind* VAR_5 = ((void*)0);

   if (!VAR_0)
      return;

   VAR_3 = VAR_0->index_offset;
   VAR_4 = (const struct retro_keybind*)VAR_0->value.target.keybind;
   VAR_5 = (const struct retro_keybind*)
      FUNC_0(VAR_3, VAR_4->id);

   FUNC_1(VAR_1, VAR_4, VAR_5, VAR_2);
}
