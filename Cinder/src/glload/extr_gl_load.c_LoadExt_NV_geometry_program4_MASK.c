
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMVERTEXLIMITNVPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLFRAMEBUFFERTEXTUREEXTPROC)FUNC_0("glFramebufferTextureEXT");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)FUNC_0("glFramebufferTextureFaceEXT");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)FUNC_0("glFramebufferTextureLayerEXT");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLPROGRAMVERTEXLIMITNVPROC)FUNC_0("glProgramVertexLimitNV");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
