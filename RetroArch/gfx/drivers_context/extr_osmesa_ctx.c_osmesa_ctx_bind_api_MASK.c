
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_0(void *VAR_6,
      enum gfx_ctx_api VAR_7, unsigned VAR_8,
      unsigned VAR_9)
{
   if (VAR_7 != VAR_0)
      return 0;

   VAR_5 = VAR_7;
   VAR_4 = VAR_1;

   if (VAR_8)
   {
      VAR_2 = VAR_8;
      VAR_3 = VAR_9;
   }
   else
   {
      VAR_2 = 2;
      VAR_3 = 1;
   }

   return 1;
}
