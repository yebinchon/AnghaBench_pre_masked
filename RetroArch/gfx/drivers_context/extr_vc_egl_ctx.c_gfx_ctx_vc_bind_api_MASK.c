
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_1(void *VAR_4,
      enum gfx_ctx_api VAR_5, unsigned VAR_6, unsigned VAR_7)
{
   (void)VAR_4;
   (void)VAR_6;
   (void)VAR_7;

   VAR_3 = VAR_5;

   switch (VAR_5)
   {
      case 130:
         return FUNC_0(VAR_0);
      case 129:
         return FUNC_0(VAR_1);
      case 128:
         return FUNC_0(VAR_2);
      default:
         break;
   }

   return 0;
}
