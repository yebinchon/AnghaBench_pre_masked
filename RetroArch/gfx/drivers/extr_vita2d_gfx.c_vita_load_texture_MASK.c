
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vita2d_texture {int dummy; } ;
struct texture_image {unsigned int width; unsigned int height; int * pixels; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*,unsigned int) ;
 struct vita2d_texture* FUNC_1 (unsigned int,unsigned int,int ) ;
 int * FUNC_2 (struct vita2d_texture*) ;
 unsigned int FUNC_3 (struct vita2d_texture*) ;
 int FUNC_4 (struct vita2d_texture*,int ,int ) ;

__attribute__((used)) static uintptr_t FUNC_5(void *VAR_4, void *VAR_5,
      bool VAR_6, enum texture_filter_type VAR_7)
{
   unsigned int VAR_8, VAR_9, VAR_10;
   uint32_t *VAR_11 = ((void*)0);
   const uint32_t *VAR_12 = ((void*)0);
   struct texture_image *VAR_13 = (struct texture_image*)VAR_5;
   struct vita2d_texture *VAR_14 = FUNC_1(VAR_13->width,
     VAR_13->height,VAR_1);

   if (!VAR_14)
      return 0;

   if ((VAR_7 == VAR_3) ||
      (VAR_7 == VAR_2))
      FUNC_4(VAR_14,
            VAR_0,
            VAR_0);

   VAR_8 = FUNC_3(VAR_14);
   VAR_8 /= 4;

   VAR_11 = FUNC_2(VAR_14);
   VAR_12 = VAR_13->pixels;
   VAR_9 = VAR_13->width;

   for (VAR_10 = 0; VAR_10 < VAR_13->height; VAR_10++)
         FUNC_0(
               &VAR_11[VAR_10*VAR_8],
               &VAR_12[VAR_10*VAR_9],
               VAR_9 * sizeof(uint32_t));

   return (uintptr_t)VAR_14;
}
