
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_image {int supports_rgba; scalar_t__ height; scalar_t__ width; int * pixels; } ;
struct nbio_t {int dummy; } ;
typedef enum image_type_enum { ____Placeholder_image_type_enum } image_type_enum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int,void*,size_t,struct texture_image*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,struct texture_image*) ;
 int FUNC_3 (struct nbio_t*) ;
 int FUNC_4 (struct nbio_t*) ;
 void* FUNC_5 (struct nbio_t*,size_t*) ;
 int FUNC_6 (struct nbio_t*) ;
 scalar_t__ FUNC_7 (char const*,int ) ;

bool FUNC_8(struct texture_image *VAR_2,
      const char *VAR_3)
{
   unsigned VAR_4, VAR_5, VAR_6, VAR_7;
   size_t VAR_8 = 0;
   struct nbio_t *VAR_9 = ((void*)0);
   void *VAR_10 = ((void*)0);
   enum image_type_enum VAR_11 = FUNC_0(VAR_3);

   FUNC_2(&VAR_4, &VAR_5, &VAR_6,
         &VAR_7, VAR_2);

   if (VAR_11 != VAR_0)
   {
      VAR_9 = (struct nbio_t*)FUNC_7(VAR_3, VAR_1);
      if (!VAR_9)
         goto error;
      FUNC_3(VAR_9);

      while (!FUNC_6(VAR_9));

      VAR_10 = FUNC_5(VAR_9, &VAR_8);

      if (!VAR_10)
         goto error;

      if (FUNC_1(
               VAR_11,
               VAR_10, VAR_8, VAR_2,
               VAR_7, VAR_4, VAR_5, VAR_6))
         goto success;
   }

error:
   VAR_2->supports_rgba = 0;
   VAR_2->pixels = ((void*)0);
   VAR_2->width = 0;
   VAR_2->height = 0;
   if (VAR_9)
      FUNC_4(VAR_9);

   return 0;

success:
   if (VAR_9)
      FUNC_4(VAR_9);

   return 1;
}
