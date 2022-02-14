
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;
typedef scalar_t__ D3D9XCreateFontIndirect_t ;
typedef scalar_t__ D3D9Create_t ;
typedef scalar_t__ D3D9CreateTextureFromFile_t ;
typedef scalar_t__ D3D9CompileShader_t ;
typedef scalar_t__ D3D9CompileShaderFromFile_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

bool FUNC_4(enum gfx_ctx_api VAR_14)
{
   VAR_10 = 31;
   VAR_2 = VAR_9;
   if (!VAR_2)
      goto error;
   return 1;

error:
   FUNC_0();
   return 0;
}
