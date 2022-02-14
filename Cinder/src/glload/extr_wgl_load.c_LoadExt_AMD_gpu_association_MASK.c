
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC ;
typedef scalar_t__ PFNWGLGETGPUINFOAMDPROC ;
typedef scalar_t__ PFNWGLGETGPUIDSAMDPROC ;
typedef scalar_t__ PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC ;
typedef scalar_t__ PFNWGLGETCONTEXTGPUIDAMDPROC ;
typedef scalar_t__ PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC ;
typedef scalar_t__ PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC ;
typedef scalar_t__ PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC ;
typedef scalar_t__ PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC ;


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
 VAR_0 = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC)FUNC_0("wglBlitContextFramebufferAMD");
 if(!VAR_0) ++VAR_9;
 VAR_1 = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC)FUNC_0("wglCreateAssociatedContextAMD");
 if(!VAR_1) ++VAR_9;
 VAR_2 = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)FUNC_0("wglCreateAssociatedContextAttribsAMD");
 if(!VAR_2) ++VAR_9;
 VAR_3 = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC)FUNC_0("wglDeleteAssociatedContextAMD");
 if(!VAR_3) ++VAR_9;
 VAR_4 = (PFNWGLGETCONTEXTGPUIDAMDPROC)FUNC_0("wglGetContextGPUIDAMD");
 if(!VAR_4) ++VAR_9;
 VAR_5 = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC)FUNC_0("wglGetCurrentAssociatedContextAMD");
 if(!VAR_5) ++VAR_9;
 VAR_6 = (PFNWGLGETGPUIDSAMDPROC)FUNC_0("wglGetGPUIDsAMD");
 if(!VAR_6) ++VAR_9;
 VAR_7 = (PFNWGLGETGPUINFOAMDPROC)FUNC_0("wglGetGPUInfoAMD");
 if(!VAR_7) ++VAR_9;
 VAR_8 = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)FUNC_0("wglMakeAssociatedContextCurrentAMD");
 if(!VAR_8) ++VAR_9;
 return VAR_9;
}
