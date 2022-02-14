
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMHANDLEUI64VNVPROC ;
typedef scalar_t__ PFNGLUNIFORMHANDLEUI64NVPROC ;
typedef scalar_t__ PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC ;
typedef scalar_t__ PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC ;
typedef scalar_t__ PFNGLMAKETEXTUREHANDLERESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKEIMAGEHANDLERESIDENTNVPROC ;
typedef scalar_t__ PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC ;
typedef scalar_t__ PFNGLISTEXTUREHANDLERESIDENTNVPROC ;
typedef scalar_t__ PFNGLISIMAGEHANDLERESIDENTNVPROC ;
typedef scalar_t__ PFNGLGETTEXTURESAMPLERHANDLENVPROC ;
typedef scalar_t__ PFNGLGETTEXTUREHANDLENVPROC ;
typedef scalar_t__ PFNGLGETIMAGEHANDLENVPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_13 = 0;
 VAR_0 = (PFNGLGETIMAGEHANDLENVPROC)FUNC_0("glGetImageHandleNV");
 if(!VAR_0) ++VAR_13;
 VAR_1 = (PFNGLGETTEXTUREHANDLENVPROC)FUNC_0("glGetTextureHandleNV");
 if(!VAR_1) ++VAR_13;
 VAR_2 = (PFNGLGETTEXTURESAMPLERHANDLENVPROC)FUNC_0("glGetTextureSamplerHandleNV");
 if(!VAR_2) ++VAR_13;
 VAR_3 = (PFNGLISIMAGEHANDLERESIDENTNVPROC)FUNC_0("glIsImageHandleResidentNV");
 if(!VAR_3) ++VAR_13;
 VAR_4 = (PFNGLISTEXTUREHANDLERESIDENTNVPROC)FUNC_0("glIsTextureHandleResidentNV");
 if(!VAR_4) ++VAR_13;
 VAR_5 = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC)FUNC_0("glMakeImageHandleNonResidentNV");
 if(!VAR_5) ++VAR_13;
 VAR_6 = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC)FUNC_0("glMakeImageHandleResidentNV");
 if(!VAR_6) ++VAR_13;
 VAR_7 = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC)FUNC_0("glMakeTextureHandleNonResidentNV");
 if(!VAR_7) ++VAR_13;
 VAR_8 = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC)FUNC_0("glMakeTextureHandleResidentNV");
 if(!VAR_8) ++VAR_13;
 VAR_9 = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC)FUNC_0("glProgramUniformHandleui64NV");
 if(!VAR_9) ++VAR_13;
 VAR_10 = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC)FUNC_0("glProgramUniformHandleui64vNV");
 if(!VAR_10) ++VAR_13;
 VAR_11 = (PFNGLUNIFORMHANDLEUI64NVPROC)FUNC_0("glUniformHandleui64NV");
 if(!VAR_11) ++VAR_13;
 VAR_12 = (PFNGLUNIFORMHANDLEUI64VNVPROC)FUNC_0("glUniformHandleui64vNV");
 if(!VAR_12) ++VAR_13;
 return VAR_13;
}
