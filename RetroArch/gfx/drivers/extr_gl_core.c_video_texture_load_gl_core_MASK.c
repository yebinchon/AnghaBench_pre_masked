
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_image {int pixels; int height; int width; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
typedef uintptr_t GLuint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;




 int FUNC_0 (int ,uintptr_t) ;
 int FUNC_1 (int,uintptr_t*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,unsigned int,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 unsigned int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(
      const struct texture_image *VAR_19,
      enum texture_filter_type VAR_20,
      uintptr_t *VAR_21)
{

   GLuint VAR_22;
   unsigned VAR_23;
   GLenum VAR_24, VAR_25;

   FUNC_1(1, &VAR_22);
   *VAR_21 = VAR_22;
   FUNC_0(VAR_9, VAR_22);

   VAR_23 = 1;
   if (VAR_20 == 130 || VAR_20 == 129)
      VAR_23 = FUNC_7(VAR_19->width, VAR_19->height);

   FUNC_5(VAR_9, VAR_23, VAR_8, VAR_19->width, VAR_19->height);
   FUNC_4(VAR_9, VAR_14, VAR_1);
   FUNC_4(VAR_9, VAR_15, VAR_1);

   switch (VAR_20)
   {
      case 131:
         VAR_24 = VAR_2;
         VAR_25 = VAR_2;
         break;

      case 128:
         VAR_24 = VAR_5;
         VAR_25 = VAR_5;
         break;

      case 129:
         VAR_24 = VAR_2;
         VAR_25 = VAR_4;
         break;

      case 130:
   default:
         VAR_24 = VAR_2;
         VAR_25 = VAR_3;
         break;
   }
   FUNC_4(VAR_9, VAR_10, VAR_24);
   FUNC_4(VAR_9, VAR_11, VAR_25);

   FUNC_3(VAR_16, 4);
   FUNC_3(VAR_17, 0);
   FUNC_6(VAR_9, 0, 0, 0,
                   VAR_19->width, VAR_19->height, VAR_7, VAR_18, VAR_19->pixels);

   if (VAR_23 > 1)
      FUNC_2(VAR_9);
   FUNC_4(VAR_9, VAR_13, VAR_0);
   FUNC_4(VAR_9, VAR_12, VAR_6);
   FUNC_0(VAR_9, 0);
}
