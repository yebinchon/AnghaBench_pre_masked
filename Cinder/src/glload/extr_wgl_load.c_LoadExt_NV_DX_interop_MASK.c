
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLDXUNREGISTEROBJECTNVPROC ;
typedef scalar_t__ PFNWGLDXUNLOCKOBJECTSNVPROC ;
typedef scalar_t__ PFNWGLDXSETRESOURCESHAREHANDLENVPROC ;
typedef scalar_t__ PFNWGLDXREGISTEROBJECTNVPROC ;
typedef scalar_t__ PFNWGLDXOPENDEVICENVPROC ;
typedef scalar_t__ PFNWGLDXOBJECTACCESSNVPROC ;
typedef scalar_t__ PFNWGLDXLOCKOBJECTSNVPROC ;
typedef scalar_t__ PFNWGLDXCLOSEDEVICENVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_8 = 0;
 VAR_0 = (PFNWGLDXCLOSEDEVICENVPROC)FUNC_0("wglDXCloseDeviceNV");
 if(!VAR_0) ++VAR_8;
 VAR_1 = (PFNWGLDXLOCKOBJECTSNVPROC)FUNC_0("wglDXLockObjectsNV");
 if(!VAR_1) ++VAR_8;
 VAR_2 = (PFNWGLDXOBJECTACCESSNVPROC)FUNC_0("wglDXObjectAccessNV");
 if(!VAR_2) ++VAR_8;
 VAR_3 = (PFNWGLDXOPENDEVICENVPROC)FUNC_0("wglDXOpenDeviceNV");
 if(!VAR_3) ++VAR_8;
 VAR_4 = (PFNWGLDXREGISTEROBJECTNVPROC)FUNC_0("wglDXRegisterObjectNV");
 if(!VAR_4) ++VAR_8;
 VAR_5 = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC)FUNC_0("wglDXSetResourceShareHandleNV");
 if(!VAR_5) ++VAR_8;
 VAR_6 = (PFNWGLDXUNLOCKOBJECTSNVPROC)FUNC_0("wglDXUnlockObjectsNV");
 if(!VAR_6) ++VAR_8;
 VAR_7 = (PFNWGLDXUNREGISTEROBJECTNVPROC)FUNC_0("wglDXUnregisterObjectNV");
 if(!VAR_7) ++VAR_8;
 return VAR_8;
}
