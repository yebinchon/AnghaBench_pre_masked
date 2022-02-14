
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vk_t ;
typedef int const uint32_t ;
struct vk_texture {int default_smooth; int mipmap; } ;
struct texture_image {int width; int height; int const* pixels; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 struct vk_texture FUNC_1 (int *,int *,int,int,int ,int const*,int *,int ) ;

__attribute__((used)) static uintptr_t FUNC_2(void *VAR_4, void *VAR_5,
      bool VAR_6, enum texture_filter_type VAR_7)
{
   struct vk_texture *VAR_8 = ((void*)0);
   vk_t *VAR_9 = (vk_t*)VAR_4;
   struct texture_image *VAR_10 = (struct texture_image*)VAR_5;
   if (!VAR_10)
      return 0;

   VAR_8 = (struct vk_texture*)
      FUNC_0(1, sizeof(*VAR_8));

   if (!VAR_8)
      return 0;

   if (!VAR_10->pixels || !VAR_10->width || !VAR_10->height)
   {



      static const uint32_t VAR_11[] = {
         0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu,
         0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u,
         0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu,
         0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u,
         0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu,
         0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u,
         0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu,
         0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u, 0xffffffffu, 0xff000000u,
      };


      *VAR_8 = FUNC_1(VAR_9, ((void*)0),
            8, 8, VAR_2,
            VAR_11, ((void*)0), VAR_3);
      VAR_8->default_smooth = 0;
      VAR_8->mipmap = 0;
   }
   else
   {
      *VAR_8 = FUNC_1(VAR_9, ((void*)0),
            VAR_10->width, VAR_10->height, VAR_2,
            VAR_10->pixels, ((void*)0), VAR_3);

      VAR_8->default_smooth =
         VAR_7 == VAR_1 || VAR_7 == VAR_0;
      VAR_8->mipmap = VAR_7 == VAR_1;
   }

   return (uintptr_t)VAR_8;
}
