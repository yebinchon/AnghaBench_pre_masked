
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMSTRINGARBPROC ;
typedef scalar_t__ PFNGLPROGRAMLOCALPARAMETER4FVARBPROC ;
typedef scalar_t__ PFNGLPROGRAMLOCALPARAMETER4FARBPROC ;
typedef scalar_t__ PFNGLPROGRAMLOCALPARAMETER4DVARBPROC ;
typedef scalar_t__ PFNGLPROGRAMLOCALPARAMETER4DARBPROC ;
typedef scalar_t__ PFNGLPROGRAMENVPARAMETER4FVARBPROC ;
typedef scalar_t__ PFNGLPROGRAMENVPARAMETER4FARBPROC ;
typedef scalar_t__ PFNGLPROGRAMENVPARAMETER4DVARBPROC ;
typedef scalar_t__ PFNGLPROGRAMENVPARAMETER4DARBPROC ;
typedef scalar_t__ PFNGLISPROGRAMARBPROC ;
typedef scalar_t__ PFNGLGETPROGRAMSTRINGARBPROC ;
typedef scalar_t__ PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC ;
typedef scalar_t__ PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC ;
typedef scalar_t__ PFNGLGETPROGRAMIVARBPROC ;
typedef scalar_t__ PFNGLGETPROGRAMENVPARAMETERFVARBPROC ;
typedef scalar_t__ PFNGLGETPROGRAMENVPARAMETERDVARBPROC ;
typedef scalar_t__ PFNGLGENPROGRAMSARBPROC ;
typedef scalar_t__ PFNGLDELETEPROGRAMSARBPROC ;
typedef scalar_t__ PFNGLBINDPROGRAMARBPROC ;


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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_19 = 0;
 VAR_0 = (PFNGLBINDPROGRAMARBPROC)FUNC_0("glBindProgramARB");
 if(!VAR_0) ++VAR_19;
 VAR_1 = (PFNGLDELETEPROGRAMSARBPROC)FUNC_0("glDeleteProgramsARB");
 if(!VAR_1) ++VAR_19;
 VAR_2 = (PFNGLGENPROGRAMSARBPROC)FUNC_0("glGenProgramsARB");
 if(!VAR_2) ++VAR_19;
 VAR_3 = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)FUNC_0("glGetProgramEnvParameterdvARB");
 if(!VAR_3) ++VAR_19;
 VAR_4 = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)FUNC_0("glGetProgramEnvParameterfvARB");
 if(!VAR_4) ++VAR_19;
 VAR_5 = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)FUNC_0("glGetProgramLocalParameterdvARB");
 if(!VAR_5) ++VAR_19;
 VAR_6 = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)FUNC_0("glGetProgramLocalParameterfvARB");
 if(!VAR_6) ++VAR_19;
 VAR_7 = (PFNGLGETPROGRAMSTRINGARBPROC)FUNC_0("glGetProgramStringARB");
 if(!VAR_7) ++VAR_19;
 VAR_8 = (PFNGLGETPROGRAMIVARBPROC)FUNC_0("glGetProgramivARB");
 if(!VAR_8) ++VAR_19;
 VAR_9 = (PFNGLISPROGRAMARBPROC)FUNC_0("glIsProgramARB");
 if(!VAR_9) ++VAR_19;
 VAR_10 = (PFNGLPROGRAMENVPARAMETER4DARBPROC)FUNC_0("glProgramEnvParameter4dARB");
 if(!VAR_10) ++VAR_19;
 VAR_11 = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)FUNC_0("glProgramEnvParameter4dvARB");
 if(!VAR_11) ++VAR_19;
 VAR_12 = (PFNGLPROGRAMENVPARAMETER4FARBPROC)FUNC_0("glProgramEnvParameter4fARB");
 if(!VAR_12) ++VAR_19;
 VAR_13 = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)FUNC_0("glProgramEnvParameter4fvARB");
 if(!VAR_13) ++VAR_19;
 VAR_14 = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)FUNC_0("glProgramLocalParameter4dARB");
 if(!VAR_14) ++VAR_19;
 VAR_15 = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)FUNC_0("glProgramLocalParameter4dvARB");
 if(!VAR_15) ++VAR_19;
 VAR_16 = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)FUNC_0("glProgramLocalParameter4fARB");
 if(!VAR_16) ++VAR_19;
 VAR_17 = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)FUNC_0("glProgramLocalParameter4fvARB");
 if(!VAR_17) ++VAR_19;
 VAR_18 = (PFNGLPROGRAMSTRINGARBPROC)FUNC_0("glProgramStringARB");
 if(!VAR_18) ++VAR_19;
 return VAR_19;
}
