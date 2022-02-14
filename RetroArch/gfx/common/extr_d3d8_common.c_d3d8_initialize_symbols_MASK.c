
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;
typedef scalar_t__ D3DXCreateFontIndirect_t ;
typedef scalar_t__ D3DCreate_t ;
typedef scalar_t__ D3DCreateTextureFromFile_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

bool FUNC_3(enum gfx_ctx_api VAR_10)
{
   VAR_6 = 220;
   VAR_0 = VAR_5;






   if (!VAR_0)
      goto error;
   return 1;

error:
   FUNC_0();
   return 0;
}
