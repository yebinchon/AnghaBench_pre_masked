
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSAMPLERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERIUIVPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERIPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERIIVPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERFVPROC ;
typedef scalar_t__ PFNGLSAMPLERPARAMETERFPROC ;
typedef scalar_t__ PFNGLISSAMPLERPROC ;
typedef scalar_t__ PFNGLGETSAMPLERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETSAMPLERPARAMETERIUIVPROC ;
typedef scalar_t__ PFNGLGETSAMPLERPARAMETERIIVPROC ;
typedef scalar_t__ PFNGLGETSAMPLERPARAMETERFVPROC ;
typedef scalar_t__ PFNGLGENSAMPLERSPROC ;
typedef scalar_t__ PFNGLDELETESAMPLERSPROC ;
typedef scalar_t__ PFNGLBINDSAMPLERPROC ;


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
 VAR_0 = (PFNGLBINDSAMPLERPROC)FUNC_0("glBindSampler");
 if(!VAR_0) ++VAR_14;
 VAR_1 = (PFNGLDELETESAMPLERSPROC)FUNC_0("glDeleteSamplers");
 if(!VAR_1) ++VAR_14;
 VAR_2 = (PFNGLGENSAMPLERSPROC)FUNC_0("glGenSamplers");
 if(!VAR_2) ++VAR_14;
 VAR_3 = (PFNGLGETSAMPLERPARAMETERIIVPROC)FUNC_0("glGetSamplerParameterIiv");
 if(!VAR_3) ++VAR_14;
 VAR_4 = (PFNGLGETSAMPLERPARAMETERIUIVPROC)FUNC_0("glGetSamplerParameterIuiv");
 if(!VAR_4) ++VAR_14;
 VAR_5 = (PFNGLGETSAMPLERPARAMETERFVPROC)FUNC_0("glGetSamplerParameterfv");
 if(!VAR_5) ++VAR_14;
 VAR_6 = (PFNGLGETSAMPLERPARAMETERIVPROC)FUNC_0("glGetSamplerParameteriv");
 if(!VAR_6) ++VAR_14;
 VAR_7 = (PFNGLISSAMPLERPROC)FUNC_0("glIsSampler");
 if(!VAR_7) ++VAR_14;
 VAR_8 = (PFNGLSAMPLERPARAMETERIIVPROC)FUNC_0("glSamplerParameterIiv");
 if(!VAR_8) ++VAR_14;
 VAR_9 = (PFNGLSAMPLERPARAMETERIUIVPROC)FUNC_0("glSamplerParameterIuiv");
 if(!VAR_9) ++VAR_14;
 VAR_10 = (PFNGLSAMPLERPARAMETERFPROC)FUNC_0("glSamplerParameterf");
 if(!VAR_10) ++VAR_14;
 VAR_11 = (PFNGLSAMPLERPARAMETERFVPROC)FUNC_0("glSamplerParameterfv");
 if(!VAR_11) ++VAR_14;
 VAR_12 = (PFNGLSAMPLERPARAMETERIPROC)FUNC_0("glSamplerParameteri");
 if(!VAR_12) ++VAR_14;
 VAR_13 = (PFNGLSAMPLERPARAMETERIVPROC)FUNC_0("glSamplerParameteriv");
 if(!VAR_13) ++VAR_14;
 return VAR_14;
}
