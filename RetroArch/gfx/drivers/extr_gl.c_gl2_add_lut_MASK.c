
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct texture_image {int * pixels; scalar_t__ height; scalar_t__ width; int supports_rgba; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
typedef enum gfx_wrap_type { ____Placeholder_gfx_wrap_type } gfx_wrap_type ;
typedef int GLuint ;


 int FUNC_0 (char*,char const*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int,int,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_3 (struct texture_image*) ;
 int FUNC_4 (struct texture_image*,char const*) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(
      const char *VAR_5,
      bool VAR_6,
      unsigned VAR_7,
      enum gfx_wrap_type VAR_8,
      unsigned VAR_9, GLuint *VAR_10)
{
   struct texture_image VAR_11;
   enum texture_filter_type VAR_12 = VAR_1;

   VAR_11.width = 0;
   VAR_11.height = 0;
   VAR_11.pixels = ((void*)0);
   VAR_11.supports_rgba = FUNC_5();

   if (!FUNC_4(&VAR_11, VAR_5))
   {
      FUNC_0("[GL]: Failed to load texture image from: \"%s\"\n",
            VAR_5);
      return 0;
   }

   FUNC_1("[GL]: Loaded texture image from: \"%s\" ...\n",
         VAR_5);

   if (VAR_7 == VAR_0)
      VAR_12 = VAR_4;

   if (VAR_6)
   {
      if (VAR_12 == VAR_4)
         VAR_12 = VAR_3;
      else
         VAR_12 = VAR_2;
   }

   FUNC_2(
         VAR_10[VAR_9],
         VAR_8,
         VAR_12, 4,
         VAR_11.width, VAR_11.height,
         VAR_11.pixels, sizeof(uint32_t));
   FUNC_3(&VAR_11);

   return 1;
}
