
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETCOMPRESSEDTEXIMAGEARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE3DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE2DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE1DARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_7 = 0;
 VAR_0 = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)FUNC_0("glCompressedTexImage1DARB");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)FUNC_0("glCompressedTexImage2DARB");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)FUNC_0("glCompressedTexImage3DARB");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)FUNC_0("glCompressedTexSubImage1DARB");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)FUNC_0("glCompressedTexSubImage2DARB");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)FUNC_0("glCompressedTexSubImage3DARB");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)FUNC_0("glGetCompressedTexImageARB");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
