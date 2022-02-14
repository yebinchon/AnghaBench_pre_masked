
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct retro_subsystem_info {int desc; int ident; } ;
struct TYPE_4__ {struct retro_subsystem_info* data; } ;
struct TYPE_5__ {TYPE_1__ subsystem; } ;
typedef TYPE_2__ rarch_system_info_t ;


 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,int ,size_t) ;
 unsigned int VAR_0 ;
 struct retro_subsystem_info* VAR_1 ;

void FUNC_3(const char* VAR_2, char* VAR_3, size_t VAR_4)
{
   rarch_system_info_t *VAR_5 = FUNC_0();
   const struct retro_subsystem_info *VAR_6;
   unsigned VAR_7 = 0;


   if (VAR_5->subsystem.data)
      VAR_6 = VAR_5->subsystem.data;

   else
      VAR_6 = VAR_1;

   for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++, VAR_6++)
   {
      if (FUNC_1(VAR_2, VAR_6->ident))
      {
         FUNC_2(VAR_3, VAR_6->desc, VAR_4);
         break;
      }
   }

   return;
}
