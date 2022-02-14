
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMUI64VNVPROC ;
typedef scalar_t__ PFNGLUNIFORMUI64NVPROC ;
typedef scalar_t__ PFNGLPROGRAMUNIFORMUI64VNVPROC ;
typedef scalar_t__ PFNGLPROGRAMUNIFORMUI64NVPROC ;
typedef scalar_t__ PFNGLMAKENAMEDBUFFERRESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKEBUFFERRESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKEBUFFERNONRESIDENTNVPROC ;
typedef scalar_t__ PFNGLISNAMEDBUFFERRESIDENTNVPROC ;
typedef scalar_t__ PFNGLISBUFFERRESIDENTNVPROC ;
typedef scalar_t__ PFNGLGETUNIFORMUI64VNVPROC ;
typedef scalar_t__ PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC ;
typedef scalar_t__ PFNGLGETINTEGERUI64VNVPROC ;
typedef scalar_t__ PFNGLGETBUFFERPARAMETERUI64VNVPROC ;


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
 VAR_0 = (PFNGLGETBUFFERPARAMETERUI64VNVPROC)FUNC_0("glGetBufferParameterui64vNV");
 if(!VAR_0) ++VAR_14;
 VAR_1 = (PFNGLGETINTEGERUI64VNVPROC)FUNC_0("glGetIntegerui64vNV");
 if(!VAR_1) ++VAR_14;
 VAR_2 = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC)FUNC_0("glGetNamedBufferParameterui64vNV");
 if(!VAR_2) ++VAR_14;
 VAR_3 = (PFNGLGETUNIFORMUI64VNVPROC)FUNC_0("glGetUniformui64vNV");
 if(!VAR_3) ++VAR_14;
 VAR_4 = (PFNGLISBUFFERRESIDENTNVPROC)FUNC_0("glIsBufferResidentNV");
 if(!VAR_4) ++VAR_14;
 VAR_5 = (PFNGLISNAMEDBUFFERRESIDENTNVPROC)FUNC_0("glIsNamedBufferResidentNV");
 if(!VAR_5) ++VAR_14;
 VAR_6 = (PFNGLMAKEBUFFERNONRESIDENTNVPROC)FUNC_0("glMakeBufferNonResidentNV");
 if(!VAR_6) ++VAR_14;
 VAR_7 = (PFNGLMAKEBUFFERRESIDENTNVPROC)FUNC_0("glMakeBufferResidentNV");
 if(!VAR_7) ++VAR_14;
 VAR_8 = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC)FUNC_0("glMakeNamedBufferNonResidentNV");
 if(!VAR_8) ++VAR_14;
 VAR_9 = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC)FUNC_0("glMakeNamedBufferResidentNV");
 if(!VAR_9) ++VAR_14;
 VAR_10 = (PFNGLPROGRAMUNIFORMUI64NVPROC)FUNC_0("glProgramUniformui64NV");
 if(!VAR_10) ++VAR_14;
 VAR_11 = (PFNGLPROGRAMUNIFORMUI64VNVPROC)FUNC_0("glProgramUniformui64vNV");
 if(!VAR_11) ++VAR_14;
 VAR_12 = (PFNGLUNIFORMUI64NVPROC)FUNC_0("glUniformui64NV");
 if(!VAR_12) ++VAR_14;
 VAR_13 = (PFNGLUNIFORMUI64VNVPROC)FUNC_0("glUniformui64vNV");
 if(!VAR_13) ++VAR_14;
 return VAR_14;
}
