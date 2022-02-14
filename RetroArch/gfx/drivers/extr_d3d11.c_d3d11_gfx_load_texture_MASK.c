
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct texture_image {int pixels; int height; int width; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
struct TYPE_7__ {int context; int device; int ** samplers; } ;
typedef TYPE_2__ d3d11_video_t ;
struct TYPE_6__ {int Format; int Height; int Width; void* MiscFlags; } ;
struct TYPE_8__ {TYPE_1__ desc; int sampler; } ;
typedef TYPE_3__ d3d11_texture_t ;


 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;




 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,TYPE_3__*) ;

__attribute__((used)) static uintptr_t FUNC_3(
      void* VAR_5, void* VAR_6, bool VAR_7, enum texture_filter_type VAR_8)
{
   d3d11_texture_t* VAR_9 = ((void*)0);
   d3d11_video_t* VAR_10 = (d3d11_video_t*)VAR_5;
   struct texture_image* VAR_11 = (struct texture_image*)VAR_6;

   if (!VAR_10)
      return 0;

   VAR_9 = (d3d11_texture_t*)FUNC_0(1, sizeof(*VAR_9));

   if (!VAR_9)
      return 0;

   switch (VAR_8)
   {
      case 130:
         VAR_9->desc.MiscFlags = VAR_0;

      case 131:
         VAR_9->sampler = VAR_10->samplers[VAR_2][VAR_4];
         break;
      case 129:
         VAR_9->desc.MiscFlags = VAR_0;

      case 128:
         VAR_9->sampler = VAR_10->samplers[VAR_3][VAR_4];
         break;
   }

   VAR_9->desc.Width = VAR_11->width;
   VAR_9->desc.Height = VAR_11->height;
   VAR_9->desc.Format = VAR_1;

   FUNC_1(VAR_10->device, VAR_9);

   FUNC_2(
         VAR_10->context, VAR_11->width, VAR_11->height, 0, VAR_1, VAR_11->pixels,
         VAR_9);

   return (uintptr_t)VAR_9;
}
