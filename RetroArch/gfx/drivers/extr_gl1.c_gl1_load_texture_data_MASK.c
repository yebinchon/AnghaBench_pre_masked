
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




 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,int ,int ,unsigned int,unsigned int,int ,int ,int ,void const*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(
      GLuint VAR_9,
      enum gfx_wrap_type VAR_10,
      enum texture_filter_type VAR_11,
      unsigned VAR_12,
      unsigned VAR_13, unsigned VAR_14,
      const void *VAR_15, unsigned VAR_16)
{
   GLint VAR_17, VAR_18;
   bool VAR_19 = FUNC_4();
   bool VAR_20 = (VAR_16 == (sizeof(uint32_t)));
   GLenum VAR_21 = FUNC_1(VAR_10);


   switch (VAR_11)
   {
      case 129:
      case 128:
         VAR_18 = VAR_1;
         VAR_17 = VAR_1;
         break;
      case 130:
      case 131:
      default:
         VAR_18 = VAR_0;
         VAR_17 = VAR_0;
         break;
   }

   FUNC_0(VAR_9, VAR_21, VAR_17, VAR_18);


   FUNC_2(VAR_4, VAR_12);


   FUNC_3(VAR_3,
         0,
         (VAR_19 || !VAR_20) ? VAR_2 : VAR_7,
         VAR_13, VAR_14, 0,
         (VAR_19 || !VAR_20) ? VAR_2 : VAR_8,
         (VAR_20) ? VAR_6 : VAR_5, VAR_15);
}
