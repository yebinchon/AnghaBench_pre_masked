
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_controller_info {unsigned int num_types; TYPE_2__* types; } ;
struct TYPE_5__ {unsigned int size; struct retro_controller_info* data; } ;
struct TYPE_7__ {TYPE_1__ ports; } ;
typedef TYPE_3__ rarch_system_info_t ;
struct TYPE_6__ {unsigned int id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_3__* FUNC_0 () ;

__attribute__((used)) static unsigned FUNC_1(unsigned *VAR_3, size_t VAR_4, unsigned VAR_5)
{
   unsigned VAR_6 = 0;
   const struct retro_controller_info *VAR_7 = ((void*)0);
   rarch_system_info_t *VAR_8 = FUNC_0();

   VAR_3[VAR_6++] = VAR_2;
   VAR_3[VAR_6++] = VAR_1;

   if (VAR_8)
   {


      if (!VAR_8->ports.size)
         VAR_3[VAR_6++] = VAR_0;

      if (VAR_5 < VAR_8->ports.size)
         VAR_7 = &VAR_8->ports.data[VAR_5];
   }

   if (VAR_7)
   {
      unsigned VAR_9;
      for (VAR_9 = 0; VAR_9 < VAR_7->num_types; VAR_9++)
      {
         unsigned VAR_10 = VAR_7->types[VAR_9].id;
         if (VAR_6 < VAR_4 &&
               VAR_10 != VAR_2 &&
               VAR_10 != VAR_1)
            VAR_3[VAR_6++] = VAR_10;
      }
   }

   return VAR_6;
}
