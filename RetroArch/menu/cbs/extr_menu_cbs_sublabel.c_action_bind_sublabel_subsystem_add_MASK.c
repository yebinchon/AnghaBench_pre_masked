
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_subsystem_info {size_t num_roms; TYPE_2__* roms; } ;
struct TYPE_5__ {struct retro_subsystem_info* data; } ;
struct TYPE_7__ {TYPE_1__ subsystem; } ;
typedef TYPE_3__ rarch_system_info_t ;
typedef int file_list_t ;
struct TYPE_6__ {char* desc; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 () ;
 size_t FUNC_1 () ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (char*,size_t,char*,char*) ;
 scalar_t__ VAR_1 ;
 struct retro_subsystem_info* VAR_2 ;

__attribute__((used)) static int FUNC_4(
      file_list_t *VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      const char *VAR_6, const char *VAR_7,
      char *VAR_8, size_t VAR_9)
{
   rarch_system_info_t *VAR_10 = FUNC_2();
   const struct retro_subsystem_info *VAR_11;


   if (VAR_10->subsystem.data)
      VAR_11 = VAR_10->subsystem.data + (VAR_4 - VAR_0);

   else
      VAR_11 = VAR_2 + (VAR_4 - VAR_0);

   if (VAR_11 && VAR_1 > 0)
   {
      if (FUNC_1() < VAR_11->num_roms)
         FUNC_3(VAR_8, VAR_9, " Current Content: %s",
            FUNC_0() == VAR_4 - VAR_0
            ? VAR_11->roms[FUNC_1()].desc
            : VAR_11->roms[0].desc);
   }

   return 0;
}
