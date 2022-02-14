
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct texture_image {int pixels; int height; int width; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
struct TYPE_8__ {int srv_heap; } ;
struct TYPE_9__ {int device; TYPE_2__ desc; int ** samplers; } ;
typedef TYPE_3__ d3d12_video_t ;
struct TYPE_7__ {int Format; int Height; int Width; void* MipLevels; } ;
struct TYPE_10__ {int * srv_heap; TYPE_1__ desc; int sampler; } ;
typedef TYPE_4__ d3d12_texture_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;




 void* VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,TYPE_4__*) ;

__attribute__((used)) static uintptr_t FUNC_3(
      void* VAR_5, void* VAR_6, bool VAR_7,
      enum texture_filter_type VAR_8)
{
   d3d12_texture_t* VAR_9 = ((void*)0);
   d3d12_video_t* VAR_10 = (d3d12_video_t*)VAR_5;
   struct texture_image* VAR_11 = (struct texture_image*)VAR_6;

   if (!VAR_10)
      return 0;

   VAR_9 = (d3d12_texture_t*)FUNC_0(1, sizeof(*VAR_9));

   if (!VAR_9)
      return 0;

   switch (VAR_8)
   {
      case 130:
         VAR_9->desc.MipLevels = VAR_4;
      case 131:
         VAR_9->sampler = VAR_10->samplers[
            VAR_1][VAR_3];
         break;
      case 129:
         VAR_9->desc.MipLevels = VAR_4;
      case 128:
         VAR_9->sampler = VAR_10->samplers[
            VAR_2][VAR_3];
         break;
   }

   VAR_9->desc.Width = VAR_11->width;
   VAR_9->desc.Height = VAR_11->height;
   VAR_9->desc.Format = VAR_0;
   VAR_9->srv_heap = &VAR_10->desc.srv_heap;

   FUNC_1(VAR_10->device, VAR_9);

   FUNC_2(
         VAR_11->width, VAR_11->height, 0,
         VAR_0, VAR_11->pixels, VAR_9);

   return (uintptr_t)VAR_9;
}
