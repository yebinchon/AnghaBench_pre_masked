
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_controller_info {unsigned int num_types; struct retro_controller_description const* types; } ;
struct retro_controller_description {unsigned int id; } ;



const struct retro_controller_description *
FUNC_0(
      const struct retro_controller_info *VAR_0, unsigned VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0->num_types; VAR_2++)
   {
      if (VAR_0->types[VAR_2].id != VAR_1)
         continue;

      return &VAR_0->types[VAR_2];
   }

   return ((void*)0);
}
