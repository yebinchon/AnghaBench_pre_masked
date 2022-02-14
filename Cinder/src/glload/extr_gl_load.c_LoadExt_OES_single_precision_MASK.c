
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLORTHOFOESPROC ;
typedef scalar_t__ PFNGLGETCLIPPLANEFOESPROC ;
typedef scalar_t__ PFNGLFRUSTUMFOESPROC ;
typedef scalar_t__ PFNGLDEPTHRANGEFOESPROC ;
typedef scalar_t__ PFNGLCLIPPLANEFOESPROC ;
typedef scalar_t__ PFNGLCLEARDEPTHFOESPROC ;


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
 VAR_0 = (PFNGLCLEARDEPTHFOESPROC)FUNC_0("glClearDepthfOES");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLCLIPPLANEFOESPROC)FUNC_0("glClipPlanefOES");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLDEPTHRANGEFOESPROC)FUNC_0("glDepthRangefOES");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLFRUSTUMFOESPROC)FUNC_0("glFrustumfOES");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLGETCLIPPLANEFOESPROC)FUNC_0("glGetClipPlanefOES");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLORTHOFOESPROC)FUNC_0("glOrthofOES");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
