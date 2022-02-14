
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC ;
typedef scalar_t__ PFNGLPROGRAMNAMEDPARAMETER4FNVPROC ;
typedef scalar_t__ PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC ;
typedef scalar_t__ PFNGLPROGRAMNAMEDPARAMETER4DNVPROC ;
typedef scalar_t__ PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC ;


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
 VAR_0 = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)FUNC_0("glGetProgramNamedParameterdvNV");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)FUNC_0("glGetProgramNamedParameterfvNV");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)FUNC_0("glProgramNamedParameter4dNV");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)FUNC_0("glProgramNamedParameter4dvNV");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)FUNC_0("glProgramNamedParameter4fNV");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)FUNC_0("glProgramNamedParameter4fvNV");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
