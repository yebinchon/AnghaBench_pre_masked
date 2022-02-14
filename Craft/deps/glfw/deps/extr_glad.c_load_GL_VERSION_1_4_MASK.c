
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
typedef scalar_t__ PFNGLBLENDEQUATIONPROC ;
typedef scalar_t__ PFNGLBLENDCOLORPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_10) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLBLENDFUNCSEPARATEPROC)VAR_10("glBlendFuncSeparate");
 VAR_4 = (PFNGLMULTIDRAWARRAYSPROC)VAR_10("glMultiDrawArrays");
 VAR_5 = (PFNGLMULTIDRAWELEMENTSPROC)VAR_10("glMultiDrawElements");
 VAR_6 = (PFNGLPOINTPARAMETERFPROC)VAR_10("glPointParameterf");
 VAR_7 = (PFNGLPOINTPARAMETERFVPROC)VAR_10("glPointParameterfv");
 VAR_8 = (PFNGLPOINTPARAMETERIPROC)VAR_10("glPointParameteri");
 VAR_9 = (PFNGLPOINTPARAMETERIVPROC)VAR_10("glPointParameteriv");
 VAR_1 = (PFNGLBLENDCOLORPROC)VAR_10("glBlendColor");
 VAR_2 = (PFNGLBLENDEQUATIONPROC)VAR_10("glBlendEquation");
}
