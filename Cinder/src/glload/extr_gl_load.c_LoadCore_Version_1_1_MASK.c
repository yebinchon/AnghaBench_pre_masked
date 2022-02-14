
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXSUBIMAGE2DPROC ;
typedef scalar_t__ PFNGLTEXSUBIMAGE1DPROC ;
typedef scalar_t__ PFNGLPOLYGONOFFSETPROC ;
typedef scalar_t__ PFNGLISTEXTUREPROC ;
typedef scalar_t__ PFNGLGETPOINTERVPROC ;
typedef scalar_t__ PFNGLGENTEXTURESPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSPROC ;
typedef scalar_t__ PFNGLDELETETEXTURESPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE1DPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE1DPROC ;
typedef scalar_t__ PFNGLBINDTEXTUREPROC ;


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
 VAR_0 = (PFNGLBINDTEXTUREPROC)FUNC_0("glBindTexture");
 if(!VAR_0) ++VAR_14;
 VAR_1 = (PFNGLCOPYTEXIMAGE1DPROC)FUNC_0("glCopyTexImage1D");
 if(!VAR_1) ++VAR_14;
 VAR_2 = (PFNGLCOPYTEXIMAGE2DPROC)FUNC_0("glCopyTexImage2D");
 if(!VAR_2) ++VAR_14;
 VAR_3 = (PFNGLCOPYTEXSUBIMAGE1DPROC)FUNC_0("glCopyTexSubImage1D");
 if(!VAR_3) ++VAR_14;
 VAR_4 = (PFNGLCOPYTEXSUBIMAGE2DPROC)FUNC_0("glCopyTexSubImage2D");
 if(!VAR_4) ++VAR_14;
 VAR_5 = (PFNGLDELETETEXTURESPROC)FUNC_0("glDeleteTextures");
 if(!VAR_5) ++VAR_14;
 VAR_6 = (PFNGLDRAWARRAYSPROC)FUNC_0("glDrawArrays");
 if(!VAR_6) ++VAR_14;
 VAR_7 = (PFNGLDRAWELEMENTSPROC)FUNC_0("glDrawElements");
 if(!VAR_7) ++VAR_14;
 VAR_8 = (PFNGLGENTEXTURESPROC)FUNC_0("glGenTextures");
 if(!VAR_8) ++VAR_14;
 VAR_9 = (PFNGLGETPOINTERVPROC)FUNC_0("glGetPointerv");
 if(!VAR_9) ++VAR_14;
 VAR_10 = (PFNGLISTEXTUREPROC)FUNC_0("glIsTexture");
 if(!VAR_10) ++VAR_14;
 VAR_11 = (PFNGLPOLYGONOFFSETPROC)FUNC_0("glPolygonOffset");
 if(!VAR_11) ++VAR_14;
 VAR_12 = (PFNGLTEXSUBIMAGE1DPROC)FUNC_0("glTexSubImage1D");
 if(!VAR_12) ++VAR_14;
 VAR_13 = (PFNGLTEXSUBIMAGE2DPROC)FUNC_0("glTexSubImage2D");
 if(!VAR_13) ++VAR_14;
 return VAR_14;
}
