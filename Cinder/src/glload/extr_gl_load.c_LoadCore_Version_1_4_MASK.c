
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPOINTPARAMETERIVPROC ;
typedef scalar_t__ PFNGLPOINTPARAMETERIPROC ;
typedef scalar_t__ PFNGLPOINTPARAMETERFVPROC ;
typedef scalar_t__ PFNGLPOINTPARAMETERFPROC ;
typedef scalar_t__ PFNGLMULTIDRAWELEMENTSPROC ;
typedef scalar_t__ PFNGLMULTIDRAWARRAYSPROC ;
typedef scalar_t__ PFNGLBLENDFUNCSEPARATEPROC ;


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
 VAR_0 = (PFNGLBLENDFUNCSEPARATEPROC)FUNC_0("glBlendFuncSeparate");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLMULTIDRAWARRAYSPROC)FUNC_0("glMultiDrawArrays");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLMULTIDRAWELEMENTSPROC)FUNC_0("glMultiDrawElements");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLPOINTPARAMETERFPROC)FUNC_0("glPointParameterf");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLPOINTPARAMETERFVPROC)FUNC_0("glPointParameterfv");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLPOINTPARAMETERIPROC)FUNC_0("glPointParameteri");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLPOINTPARAMETERIVPROC)FUNC_0("glPointParameteriv");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
