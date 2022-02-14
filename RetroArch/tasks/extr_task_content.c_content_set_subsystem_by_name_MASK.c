
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct retro_subsystem_info {int ident; } ;
struct TYPE_4__ {struct retro_subsystem_info* data; } ;
struct TYPE_5__ {TYPE_1__ subsystem; } ;
typedef TYPE_2__ rarch_system_info_t ;


 int FUNC_0 (unsigned int) ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 unsigned int VAR_0 ;
 struct retro_subsystem_info* VAR_1 ;

bool FUNC_3(const char* VAR_2)
{
   rarch_system_info_t *VAR_3 = FUNC_1();
   const struct retro_subsystem_info *VAR_4;
   unsigned VAR_5 = 0;


   if (VAR_3->subsystem.data)
      VAR_4 = VAR_3->subsystem.data;

   else
      VAR_4 = VAR_1;

   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++, VAR_4++)
   {
      if (FUNC_2(VAR_2, VAR_4->ident))
      {
         FUNC_0(VAR_5);
         return 1;
      }
   }

   return 0;
}
