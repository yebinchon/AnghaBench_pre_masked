
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
typedef enum gfx_wrap_type { ____Placeholder_gfx_wrap_type } gfx_wrap_type ;
typedef int GLuint ;
typedef int GLint ;
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




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,int ,int ,unsigned int,unsigned int,int ,int ,int ,void const*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(
      GLuint VAR_12,
      enum gfx_wrap_type VAR_13,
      enum texture_filter_type VAR_14,
      unsigned VAR_15,
      unsigned VAR_16, unsigned VAR_17,
      const void *VAR_18, unsigned VAR_19)
{
   GLint VAR_20, VAR_21;
   bool VAR_22 = 0;
   bool VAR_23 = FUNC_6();
   bool VAR_24 = (VAR_19 == (sizeof(uint32_t)));
   GLenum VAR_25 = FUNC_0(VAR_13);
   bool VAR_26 = FUNC_5(VAR_0);

   if (!VAR_26)
   {

      switch (VAR_14)
      {
         case 130:
            VAR_14 = 131;
            break;
         case 129:
            VAR_14 = 128;
            break;
         default:
            break;
      }
   }

   switch (VAR_14)
   {
      case 130:
         VAR_21 = VAR_2;
         VAR_20 = VAR_1;
         VAR_22 = 1;
         break;
      case 129:
         VAR_21 = VAR_4;
         VAR_20 = VAR_3;
         VAR_22 = 1;
         break;
      case 128:
         VAR_21 = VAR_3;
         VAR_20 = VAR_3;
         break;
      case 131:
      default:
         VAR_21 = VAR_1;
         VAR_20 = VAR_1;
         break;
   }

   FUNC_4(VAR_12, VAR_25, VAR_20, VAR_21);

   FUNC_2(VAR_7, VAR_15);
   FUNC_3(VAR_6,
         0,
         (VAR_23 || !VAR_24) ? VAR_5 : VAR_10,
         VAR_16, VAR_17, 0,
         (VAR_23 || !VAR_24) ? VAR_5 : VAR_11,
         (VAR_24) ? VAR_9 : VAR_8, VAR_18);

   if (VAR_22 && VAR_26)
      FUNC_1(VAR_6);
}
