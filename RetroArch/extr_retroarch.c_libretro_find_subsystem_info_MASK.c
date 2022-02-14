
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_subsystem_info {int desc; int ident; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;

const struct retro_subsystem_info *FUNC_1(
      const struct retro_subsystem_info *VAR_0, unsigned VAR_1,
      const char *VAR_2)
{
   unsigned VAR_3;
   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      if (FUNC_0(VAR_0[VAR_3].ident, VAR_2))
         return &VAR_0[VAR_3];
      else if (FUNC_0(VAR_0[VAR_3].desc, VAR_2))
         return &VAR_0[VAR_3];
   }

   return ((void*)0);
}
