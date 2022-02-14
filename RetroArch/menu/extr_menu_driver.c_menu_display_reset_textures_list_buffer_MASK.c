
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_image {unsigned int width; unsigned int height; int supports_rgba; int * pixels; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
typedef enum image_type_enum { ____Placeholder_image_type_enum } image_type_enum ;


 int FUNC_0 (struct texture_image*) ;
 int FUNC_1 (struct texture_image*,int,void*,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct texture_image*,int,uintptr_t*) ;

bool FUNC_4(
        uintptr_t *VAR_0, enum texture_filter_type VAR_1,
        void* VAR_2, unsigned VAR_3, enum image_type_enum VAR_4,
        unsigned *VAR_5, unsigned *VAR_6)
{
   struct texture_image VAR_7;

   VAR_7.width = 0;
   VAR_7.height = 0;
   VAR_7.pixels = ((void*)0);
   VAR_7.supports_rgba = FUNC_2();

   if (!FUNC_1(&VAR_7, VAR_4, VAR_2, VAR_3))
      return 0;

   if (VAR_5)
      *VAR_5 = VAR_7.width;

   if (VAR_6)
      *VAR_6 = VAR_7.height;


   if (!FUNC_3(&VAR_7, VAR_1, VAR_0))
       return 0;
   FUNC_0(&VAR_7);
   return 1;
}
