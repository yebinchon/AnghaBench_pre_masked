
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int video_frame_info_t ;
struct TYPE_16__ {unsigned int tex_w; unsigned int tex_h; } ;
struct shader_pass {TYPE_13__ info; int tex; int last_height; int last_width; } ;
struct TYPE_15__ {TYPE_4__* final_viewport; int dev; int frame_count; TYPE_1__* passes; int pixel_size; } ;
struct TYPE_18__ {TYPE_11__ chain; int stock_shader; } ;
typedef TYPE_2__ hlsl_renderchain_t ;
struct TYPE_19__ {scalar_t__ renderchain_data; } ;
typedef TYPE_3__ d3d9_video_t ;
struct TYPE_20__ {unsigned int Width; unsigned int Height; float MinZ; float MaxZ; int member_0; } ;
struct TYPE_17__ {int count; int * data; } ;
typedef int LPDIRECT3DSURFACE9 ;
typedef TYPE_4__ D3DVIEWPORT9 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_1 (TYPE_13__*,unsigned int*,unsigned int*,unsigned int,unsigned int,TYPE_4__*) ;
 int FUNC_2 (int ,int ,void**) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,void const*,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ,unsigned int,int ) ;
 int FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (int ,TYPE_4__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,void**) ;
 int FUNC_11 (TYPE_2__*,int *,unsigned int,unsigned int,int ) ;
 int FUNC_12 (TYPE_2__*,struct shader_pass*,unsigned int) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*,struct shader_pass*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_14(
      d3d9_video_t *VAR_1,
      const video_frame_info_t *VAR_2,
      const void *VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      unsigned VAR_6, unsigned VAR_7)
{
   LPDIRECT3DSURFACE9 VAR_8, VAR_9;
   unsigned VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0;
   struct shader_pass *VAR_15 = ((void*)0);
   struct shader_pass *VAR_16 = ((void*)0);
   hlsl_renderchain_t *VAR_17 = (hlsl_renderchain_t*)
      VAR_1->renderchain_data;

   FUNC_7(&VAR_17->chain);

   VAR_11 = VAR_4;
   VAR_12 = VAR_5;

   VAR_16 = (struct shader_pass*)
      &VAR_17->chain.passes->data[0];

   FUNC_1(
         &VAR_16->info,
         &VAR_13, &VAR_14,
         VAR_11, VAR_12, VAR_17->chain.final_viewport);

   FUNC_5(VAR_16->tex,
         VAR_3,
         VAR_16->info.tex_w,
         VAR_16->info.tex_h,
         VAR_4,
         VAR_5,
         VAR_16->last_width,
         VAR_16->last_height,
         VAR_6,
         VAR_17->chain.pixel_size);


   FUNC_2(VAR_17->chain.dev, 0, (void**)&VAR_8);


   for (VAR_10 = 0; VAR_10 < VAR_17->chain.passes->count - 1; VAR_10++)
   {
      D3DVIEWPORT9 VAR_18 = {0};
      struct shader_pass *VAR_19 = (struct shader_pass*)
         &VAR_17->chain.passes->data[VAR_10];
      struct shader_pass *VAR_20 = (struct shader_pass*)
         &VAR_17->chain.passes->data[VAR_10 + 1];

      FUNC_10(VAR_20->tex, 0, (void**)&VAR_9);

      FUNC_3(VAR_17->chain.dev, 0, VAR_9);

      FUNC_1(&VAR_19->info,
            &VAR_13, &VAR_14,
            VAR_11, VAR_12, VAR_17->chain.final_viewport);


      VAR_18.Width = VAR_20->info.tex_w;
      VAR_18.Height = VAR_20->info.tex_h;
      VAR_18.MinZ = 0.0f;
      VAR_18.MaxZ = 1.0f;

      FUNC_8(VAR_17->chain.dev, &VAR_18);
      FUNC_0(VAR_17->chain.dev, 0, 0, VAR_0, 0, 1, 0);

      VAR_18.Width = VAR_13;
      VAR_18.Height = VAR_14;

      FUNC_8(VAR_17->chain.dev, &VAR_18);

      FUNC_13(
            VAR_1,
            VAR_17, VAR_19,
            VAR_11, VAR_12,
            VAR_13, VAR_14,
            VAR_13, VAR_14,
            VAR_17->chain.frame_count, 0);

      FUNC_12(VAR_17,
            VAR_19,
            VAR_10 + 1);

      VAR_11 = VAR_13;
      VAR_12 = VAR_14;
      FUNC_9(VAR_9);
   }


   FUNC_3(VAR_17->chain.dev, 0, VAR_8);

   VAR_15 = (struct shader_pass*)&VAR_17->chain.passes->
      data[VAR_17->chain.passes->count - 1];

   FUNC_1(&VAR_15->info,
         &VAR_13, &VAR_14,
         VAR_11, VAR_12, VAR_17->chain.final_viewport);

   FUNC_8(VAR_17->chain.dev, VAR_17->chain.final_viewport);

   FUNC_13(
         VAR_1,
         VAR_17, VAR_15,
         VAR_11, VAR_12,
         VAR_13, VAR_14,
         VAR_17->chain.final_viewport->Width,
         VAR_17->chain.final_viewport->Height,
         VAR_17->chain.frame_count, VAR_7);

   FUNC_12(VAR_17, VAR_15,
         VAR_17->chain.passes->count);

   VAR_17->chain.frame_count++;

   FUNC_9(VAR_8);

   FUNC_6(&VAR_17->chain);
   FUNC_4(&VAR_17->stock_shader, VAR_17->chain.dev);
   FUNC_11(VAR_17, &VAR_17->stock_shader,
         VAR_17->chain.final_viewport->Width,
         VAR_17->chain.final_viewport->Height, 0);

   return 1;
}
