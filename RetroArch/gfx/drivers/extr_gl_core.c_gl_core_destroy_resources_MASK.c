
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ bokeh; scalar_t__ snow; scalar_t__ snow_simple; scalar_t__ ribbon_simple; scalar_t__ ribbon; scalar_t__ font; scalar_t__ alpha_blend; } ;
struct TYPE_13__ {scalar_t__ vao; scalar_t__ menu_texture; TYPE_1__ pipelines; TYPE_3__* textures; int * filter_chain; } ;
typedef TYPE_2__ gl_core_t ;
struct TYPE_14__ {scalar_t__ tex; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_13(gl_core_t *VAR_1)
{
   unsigned VAR_2;
   if (!VAR_1)
      return;

   FUNC_5(VAR_1, 0);

   if (VAR_1->filter_chain)
      FUNC_9(VAR_1->filter_chain);
   VAR_1->filter_chain = ((void*)0);

   FUNC_1(0);
   if (VAR_1->vao != 0)
      FUNC_4(1, &VAR_1->vao);

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      if (VAR_1->textures[VAR_2].tex != 0)
         FUNC_3(1, &VAR_1->textures[VAR_2].tex);
   }
   FUNC_12(VAR_1->textures, 0, sizeof(VAR_1->textures));

   if (VAR_1->menu_texture != 0)
      FUNC_3(1, &VAR_1->menu_texture);

   if (VAR_1->pipelines.alpha_blend)
      FUNC_2(VAR_1->pipelines.alpha_blend);
   if (VAR_1->pipelines.font)
      FUNC_2(VAR_1->pipelines.font);
   if (VAR_1->pipelines.ribbon)
      FUNC_2(VAR_1->pipelines.ribbon);
   if (VAR_1->pipelines.ribbon_simple)
      FUNC_2(VAR_1->pipelines.ribbon_simple);
   if (VAR_1->pipelines.snow_simple)
      FUNC_2(VAR_1->pipelines.snow_simple);
   if (VAR_1->pipelines.snow)
      FUNC_2(VAR_1->pipelines.snow);
   if (VAR_1->pipelines.bokeh)
      FUNC_2(VAR_1->pipelines.bokeh);





   FUNC_6(VAR_1);
   FUNC_8(VAR_1);
   FUNC_7(VAR_1);
   FUNC_0(VAR_1);
}
