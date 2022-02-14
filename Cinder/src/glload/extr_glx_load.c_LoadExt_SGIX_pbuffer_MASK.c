
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXSELECTEVENTSGIXPROC ;
typedef scalar_t__ PFNGLXQUERYGLXPBUFFERSGIXPROC ;
typedef scalar_t__ PFNGLXGETSELECTEDEVENTSGIXPROC ;
typedef scalar_t__ PFNGLXDESTROYGLXPBUFFERSGIXPROC ;
typedef scalar_t__ PFNGLXCREATEGLXPBUFFERSGIXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLXCREATEGLXPBUFFERSGIXPROC)FUNC_0("glXCreateGLXPbufferSGIX");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLXDESTROYGLXPBUFFERSGIXPROC)FUNC_0("glXDestroyGLXPbufferSGIX");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLXGETSELECTEDEVENTSGIXPROC)FUNC_0("glXGetSelectedEventSGIX");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLXQUERYGLXPBUFFERSGIXPROC)FUNC_0("glXQueryGLXPbufferSGIX");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLXSELECTEVENTSGIXPROC)FUNC_0("glXSelectEventSGIX");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
