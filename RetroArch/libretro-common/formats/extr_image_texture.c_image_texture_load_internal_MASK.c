
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct texture_image {int height; int width; int pixels; } ;
typedef enum image_type_enum { ____Placeholder_image_type_enum } image_type_enum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int,struct texture_image*) ;
 int FUNC_1 (struct texture_image*) ;
 int FUNC_2 (struct texture_image*) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int) ;
 scalar_t__ FUNC_5 (void*,int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void*,int,int **,size_t,int *,int *) ;
 int FUNC_8 (void*,int,int *,size_t) ;
 int FUNC_9 (void*,int) ;

__attribute__((used)) static bool FUNC_10(
      enum image_type_enum VAR_3,
      void *VAR_4,
      size_t VAR_5,
      struct texture_image *VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      unsigned VAR_9, unsigned VAR_10)
{
   int VAR_11;
   bool VAR_12 = 0;
   void *VAR_13 = FUNC_6(VAR_3);

   if (!VAR_13)
      goto end;

   FUNC_8(VAR_13, VAR_3, (uint8_t*)VAR_4, VAR_5);

   if (!FUNC_9(VAR_13, VAR_3))
      goto end;

   while (FUNC_5(VAR_13, VAR_3));

   if (!FUNC_4(VAR_13, VAR_3))
      goto end;

   do
   {
      VAR_11 = FUNC_7(VAR_13, VAR_3,
            (uint32_t**)&VAR_6->pixels, VAR_5, &VAR_6->width,
            &VAR_6->height);
   }while(VAR_11 == VAR_2);

   if (VAR_11 == VAR_0 || VAR_11 == VAR_1)
      goto end;

   FUNC_0(VAR_8, VAR_9, VAR_10,
         VAR_7, VAR_6);
   VAR_12 = 1;

end:
   if (VAR_13)
      FUNC_3(VAR_13, VAR_3);

   return VAR_12;
}
