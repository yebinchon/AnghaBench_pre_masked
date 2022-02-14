
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_1(void *VAR_6,
   enum gfx_ctx_api VAR_7, unsigned VAR_8, unsigned VAR_9)
{
   VAR_3 = VAR_8;
   VAR_4 = VAR_9;
   VAR_5 = VAR_7;

   switch (VAR_7)
   {
      case 130:

         if ((VAR_8 * 1000 + VAR_9) >= 3001)
            break;

         return FUNC_0(VAR_0);
      case 129:

         if (VAR_8 >= 3)
            break;

         return FUNC_0(VAR_1);
      case 128:



      default:
         break;
   }

   return 0;
}
