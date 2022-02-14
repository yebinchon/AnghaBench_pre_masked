
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float alpha; float delay_timer; scalar_t__ height; scalar_t__ width; scalar_t__ texture; int status; } ;
typedef TYPE_1__ menu_thumbnail_t ;
typedef uintptr_t menu_animation_ctx_tag ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t*) ;
 int FUNC_1 (scalar_t__*) ;

void FUNC_2(menu_thumbnail_t *VAR_1)
{
   if (!VAR_1)
      return;

   if (VAR_1->texture)
   {
      menu_animation_ctx_tag VAR_2 = (uintptr_t)&VAR_1->alpha;


      FUNC_1(&VAR_1->texture);


      FUNC_0(&VAR_2);
   }


   VAR_1->status = VAR_0;
   VAR_1->texture = 0;
   VAR_1->width = 0;
   VAR_1->height = 0;
   VAR_1->alpha = 0.0f;
   VAR_1->delay_timer = 0.0f;
}
