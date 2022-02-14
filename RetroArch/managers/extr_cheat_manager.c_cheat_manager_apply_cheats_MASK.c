
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enabled; int code; int index; } ;
typedef TYPE_2__ retro_ctx_cheat_info_t ;
struct TYPE_7__ {unsigned int size; TYPE_1__* cheats; } ;
struct TYPE_5__ {scalar_t__ handler; int code; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int,int,int,int *,int ,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{




   unsigned VAR_5, VAR_6 = 0;

   if (!VAR_4.cheats)
      return;

   FUNC_1();

   for (VAR_5 = 0; VAR_5 < VAR_4.size; VAR_5++)
   {
      if (VAR_4.cheats[VAR_5].state && VAR_4.cheats[VAR_5].handler == VAR_0)
      {
         retro_ctx_cheat_info_t VAR_7;

         VAR_7.index = VAR_6++;
         VAR_7.enabled = 1;
         VAR_7.code = VAR_4.cheats[VAR_5].code;

         if (!FUNC_6(VAR_7.code))
            FUNC_2(&VAR_7);
      }
   }

   if (VAR_4.size > 0)
   {
      FUNC_5(FUNC_3(VAR_3), 1, 180, 1, ((void*)0), VAR_2, VAR_1);
      FUNC_0("%s\n", FUNC_3(VAR_3));
   }





}
