
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tween {uintptr_t tag; int deleted; } ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_2__ {int pending_deletes; int list; scalar_t__ in_update; } ;


 TYPE_1__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 struct tween* FUNC_2 (int ,unsigned int) ;

bool FUNC_3(menu_animation_ctx_tag *VAR_1)
{
   unsigned VAR_2;

   if (!VAR_1 || *VAR_1 == (uintptr_t)-1)
      return 0;

   for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0.list); ++VAR_2)
   {
      struct tween *VAR_3 = FUNC_2(VAR_0.list, VAR_2);
      if (!VAR_3 || VAR_3->tag != *VAR_1)
         continue;

      if (VAR_0.in_update)
      {
         VAR_3->deleted = 1;
         VAR_0.pending_deletes = 1;
      }
      else
      {
         FUNC_1(VAR_0.list, VAR_2);
         --VAR_2;
      }
   }

   return 1;
}
