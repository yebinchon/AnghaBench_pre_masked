
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSETFRAGMENTSHADERCONSTANTATIPROC ;
typedef scalar_t__ PFNGLSAMPLEMAPATIPROC ;
typedef scalar_t__ PFNGLPASSTEXCOORDATIPROC ;
typedef scalar_t__ PFNGLGENFRAGMENTSHADERSATIPROC ;
typedef scalar_t__ PFNGLENDFRAGMENTSHADERATIPROC ;
typedef scalar_t__ PFNGLDELETEFRAGMENTSHADERATIPROC ;
typedef scalar_t__ PFNGLCOLORFRAGMENTOP3ATIPROC ;
typedef scalar_t__ PFNGLCOLORFRAGMENTOP2ATIPROC ;
typedef scalar_t__ PFNGLCOLORFRAGMENTOP1ATIPROC ;
typedef scalar_t__ PFNGLBINDFRAGMENTSHADERATIPROC ;
typedef scalar_t__ PFNGLBEGINFRAGMENTSHADERATIPROC ;
typedef scalar_t__ PFNGLALPHAFRAGMENTOP3ATIPROC ;
typedef scalar_t__ PFNGLALPHAFRAGMENTOP2ATIPROC ;
typedef scalar_t__ PFNGLALPHAFRAGMENTOP1ATIPROC ;


 scalar_t__ FUNC_0 (char*) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_14 = 0;
 VAR_0 = (PFNGLALPHAFRAGMENTOP1ATIPROC)FUNC_0("glAlphaFragmentOp1ATI");
 if(!VAR_0) ++VAR_14;
 VAR_1 = (PFNGLALPHAFRAGMENTOP2ATIPROC)FUNC_0("glAlphaFragmentOp2ATI");
 if(!VAR_1) ++VAR_14;
 VAR_2 = (PFNGLALPHAFRAGMENTOP3ATIPROC)FUNC_0("glAlphaFragmentOp3ATI");
 if(!VAR_2) ++VAR_14;
 VAR_3 = (PFNGLBEGINFRAGMENTSHADERATIPROC)FUNC_0("glBeginFragmentShaderATI");
 if(!VAR_3) ++VAR_14;
 VAR_4 = (PFNGLBINDFRAGMENTSHADERATIPROC)FUNC_0("glBindFragmentShaderATI");
 if(!VAR_4) ++VAR_14;
 VAR_5 = (PFNGLCOLORFRAGMENTOP1ATIPROC)FUNC_0("glColorFragmentOp1ATI");
 if(!VAR_5) ++VAR_14;
 VAR_6 = (PFNGLCOLORFRAGMENTOP2ATIPROC)FUNC_0("glColorFragmentOp2ATI");
 if(!VAR_6) ++VAR_14;
 VAR_7 = (PFNGLCOLORFRAGMENTOP3ATIPROC)FUNC_0("glColorFragmentOp3ATI");
 if(!VAR_7) ++VAR_14;
 VAR_8 = (PFNGLDELETEFRAGMENTSHADERATIPROC)FUNC_0("glDeleteFragmentShaderATI");
 if(!VAR_8) ++VAR_14;
 VAR_9 = (PFNGLENDFRAGMENTSHADERATIPROC)FUNC_0("glEndFragmentShaderATI");
 if(!VAR_9) ++VAR_14;
 VAR_10 = (PFNGLGENFRAGMENTSHADERSATIPROC)FUNC_0("glGenFragmentShadersATI");
 if(!VAR_10) ++VAR_14;
 VAR_11 = (PFNGLPASSTEXCOORDATIPROC)FUNC_0("glPassTexCoordATI");
 if(!VAR_11) ++VAR_14;
 VAR_12 = (PFNGLSAMPLEMAPATIPROC)FUNC_0("glSampleMapATI");
 if(!VAR_12) ++VAR_14;
 VAR_13 = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)FUNC_0("glSetFragmentShaderConstantATI");
 if(!VAR_13) ++VAR_14;
 return VAR_14;
}
