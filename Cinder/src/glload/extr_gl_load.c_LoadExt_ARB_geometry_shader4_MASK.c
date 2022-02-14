
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMPARAMETERIARBPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURELAYERARBPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREFACEARBPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLFRAMEBUFFERTEXTUREARBPROC)FUNC_0("glFramebufferTextureARB");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)FUNC_0("glFramebufferTextureFaceARB");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)FUNC_0("glFramebufferTextureLayerARB");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLPROGRAMPARAMETERIARBPROC)FUNC_0("glProgramParameteriARB");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
