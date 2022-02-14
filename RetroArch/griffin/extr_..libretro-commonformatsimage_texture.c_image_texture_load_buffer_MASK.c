
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_image {int supports_rgba; scalar_t__ height; scalar_t__ width; int * pixels; } ;
typedef enum image_type_enum { ____Placeholder_image_type_enum } image_type_enum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,void*,size_t,struct texture_image*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,struct texture_image*) ;

bool FUNC_2(struct texture_image *VAR_1,
   enum image_type_enum VAR_2, void *VAR_3, size_t VAR_4)
{
   unsigned VAR_5, VAR_6, VAR_7, VAR_8;
   FUNC_1(&VAR_5, &VAR_6, &VAR_7,
      &VAR_8, VAR_1);

   if (VAR_2 != VAR_0)
   {
      if (FUNC_0(
         VAR_2, VAR_3, VAR_4, VAR_1,
         VAR_8, VAR_5, VAR_6, VAR_7))
      {
         return 1;
      }
   }

   VAR_1->supports_rgba = 0;
   VAR_1->pixels = ((void*)0);
   VAR_1->width = 0;
   VAR_1->height = 0;

   return 0;
}
