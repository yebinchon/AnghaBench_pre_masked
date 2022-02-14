
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int port; unsigned int device; } ;
typedef TYPE_1__ retro_ctx_controller_info_t ;
struct TYPE_6__ {unsigned int index_offset; } ;
typedef TYPE_2__ rarch_setting_t ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(
      rarch_setting_t *VAR_0, bool VAR_1)
{
   retro_ctx_controller_info_t VAR_2;
   unsigned VAR_3, VAR_4, VAR_5, VAR_6[128],
   VAR_7 = 0, VAR_8 = 0;

   if (!VAR_0)
      return -1;

   VAR_8 = VAR_0->index_offset;
   VAR_7 = FUNC_4(VAR_6, FUNC_0(VAR_6), VAR_8);
   VAR_3 = FUNC_2(VAR_8);
   VAR_4 = 0;
   for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
   {
      if (VAR_3 != VAR_6[VAR_5])
         continue;

      VAR_4 = VAR_5;
      break;
   }

   VAR_3 = VAR_6
      [(VAR_4 + VAR_7 - 1) % VAR_7];

   FUNC_3(VAR_8, VAR_3);

   VAR_2.port = VAR_8;
   VAR_2.device = VAR_3;

   FUNC_1(&VAR_2);

   return 0;
}
