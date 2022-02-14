
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLQUERYFRAMELOCKMASTERI3DPROC ;
typedef scalar_t__ PFNWGLISENABLEDFRAMELOCKI3DPROC ;
typedef scalar_t__ PFNWGLENABLEFRAMELOCKI3DPROC ;
typedef scalar_t__ PFNWGLDISABLEFRAMELOCKI3DPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNWGLDISABLEFRAMELOCKI3DPROC)FUNC_0("wglDisableFrameLockI3D");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNWGLENABLEFRAMELOCKI3DPROC)FUNC_0("wglEnableFrameLockI3D");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNWGLISENABLEDFRAMELOCKI3DPROC)FUNC_0("wglIsEnabledFrameLockI3D");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC)FUNC_0("wglQueryFrameLockMasterI3D");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
