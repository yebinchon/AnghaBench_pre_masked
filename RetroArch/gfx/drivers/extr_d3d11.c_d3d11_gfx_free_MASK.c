
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * vbo; int shader_font; int shader; } ;
struct TYPE_9__ {int * vbo; int texture; } ;
struct TYPE_8__ {int * vbo; int * ubo; int * texture; } ;
struct TYPE_11__ {int * device; int * context; int supportedFeatureLevel; int * swapChain; int * renderTargetView; int * state; int *** samplers; int * blend_disable; int * blend_enable; int * ubo; int * blend_pipeline; int * menu_pipeline_vbo; int * shaders; TYPE_3__ sprites; TYPE_2__ menu; TYPE_1__ frame; } ;
typedef TYPE_4__ d3d11_video_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int ** VAR_8 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void* VAR_9)
{
   unsigned VAR_10;
   d3d11_video_t* VAR_11 = (d3d11_video_t*)VAR_9;

   if (!VAR_11)
      return;





   FUNC_2(VAR_11);

   FUNC_4(&VAR_11->frame.texture[0]);
   FUNC_0(VAR_11->frame.ubo);
   FUNC_0(VAR_11->frame.vbo);

   FUNC_4(&VAR_11->menu.texture);
   FUNC_0(VAR_11->menu.vbo);

   FUNC_3(&VAR_11->sprites.shader);
   FUNC_3(&VAR_11->sprites.shader_font);
   FUNC_0(VAR_11->sprites.vbo);

   for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
      FUNC_3(&VAR_11->shaders[VAR_10]);

   FUNC_0(VAR_11->menu_pipeline_vbo);
   FUNC_0(VAR_11->blend_pipeline);

   FUNC_0(VAR_11->ubo);

   FUNC_0(VAR_11->blend_enable);
   FUNC_0(VAR_11->blend_disable);

   for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   {
      FUNC_0(VAR_11->samplers[VAR_2][VAR_10]);
      FUNC_0(VAR_11->samplers[VAR_3][VAR_10]);
   }

   FUNC_0(VAR_11->state);
   FUNC_0(VAR_11->renderTargetView);
   FUNC_0(VAR_11->swapChain);

   FUNC_5();

   if (FUNC_7())
   {
      VAR_6 = VAR_11->device;
      VAR_5 = VAR_11->context;
      VAR_7 = VAR_11->supportedFeatureLevel;
   }
   else
   {
      FUNC_0(VAR_11->context);
      FUNC_0(VAR_11->device);
   }

   for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   {
      if (VAR_8[VAR_10])
      {
         FUNC_0(VAR_8[VAR_10]);
         VAR_8[VAR_10] = ((void*)0);
      }
   }







   FUNC_6(VAR_11);
}
