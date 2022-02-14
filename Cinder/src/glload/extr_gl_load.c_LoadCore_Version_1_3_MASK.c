
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSAMPLECOVERAGEPROC ;
typedef scalar_t__ PFNGLGETCOMPRESSEDTEXIMAGEPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE3DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE1DPROC ;
typedef scalar_t__ PFNGLACTIVETEXTUREPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_9 = 0;
 VAR_0 = (PFNGLACTIVETEXTUREPROC)FUNC_0("glActiveTexture");
 if(!VAR_0) ++VAR_9;
 VAR_1 = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)FUNC_0("glCompressedTexImage1D");
 if(!VAR_1) ++VAR_9;
 VAR_2 = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)FUNC_0("glCompressedTexImage2D");
 if(!VAR_2) ++VAR_9;
 VAR_3 = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)FUNC_0("glCompressedTexImage3D");
 if(!VAR_3) ++VAR_9;
 VAR_4 = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)FUNC_0("glCompressedTexSubImage1D");
 if(!VAR_4) ++VAR_9;
 VAR_5 = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)FUNC_0("glCompressedTexSubImage2D");
 if(!VAR_5) ++VAR_9;
 VAR_6 = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)FUNC_0("glCompressedTexSubImage3D");
 if(!VAR_6) ++VAR_9;
 VAR_7 = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)FUNC_0("glGetCompressedTexImage");
 if(!VAR_7) ++VAR_9;
 VAR_8 = (PFNGLSAMPLECOVERAGEPROC)FUNC_0("glSampleCoverage");
 if(!VAR_8) ++VAR_9;
 return VAR_9;
}
