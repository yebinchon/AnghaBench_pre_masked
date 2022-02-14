
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXGETVISUALFROMFBCONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXGETFBCONFIGFROMVISUALSGIXPROC ;
typedef scalar_t__ PFNGLXGETFBCONFIGATTRIBSGIXPROC ;
typedef scalar_t__ PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC ;
typedef scalar_t__ PFNGLXCHOOSEFBCONFIGSGIXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_6 = 0;
 VAR_0 = (PFNGLXCHOOSEFBCONFIGSGIXPROC)FUNC_0("glXChooseFBConfigSGIX");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC)FUNC_0("glXCreateContextWithConfigSGIX");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC)FUNC_0("glXCreateGLXPixmapWithConfigSGIX");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLXGETFBCONFIGATTRIBSGIXPROC)FUNC_0("glXGetFBConfigAttribSGIX");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLXGETFBCONFIGFROMVISUALSGIXPROC)FUNC_0("glXGetFBConfigFromVisualSGIX");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLXGETVISUALFROMFBCONFIGSGIXPROC)FUNC_0("glXGetVisualFromFBConfigSGIX");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
