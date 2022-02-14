
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMSUBROUTINESUIVPROC ;
typedef scalar_t__ PFNGLGETUNIFORMSUBROUTINEUIVPROC ;
typedef scalar_t__ PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC ;
typedef scalar_t__ PFNGLGETSUBROUTINEINDEXPROC ;
typedef scalar_t__ PFNGLGETPROGRAMSTAGEIVPROC ;
typedef scalar_t__ PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC ;
typedef scalar_t__ PFNGLGETACTIVESUBROUTINENAMEPROC ;


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
 VAR_0 = (PFNGLGETACTIVESUBROUTINENAMEPROC)FUNC_0("glGetActiveSubroutineName");
 if(!VAR_0) ++VAR_8;
 VAR_1 = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)FUNC_0("glGetActiveSubroutineUniformName");
 if(!VAR_1) ++VAR_8;
 VAR_2 = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)FUNC_0("glGetActiveSubroutineUniformiv");
 if(!VAR_2) ++VAR_8;
 VAR_3 = (PFNGLGETPROGRAMSTAGEIVPROC)FUNC_0("glGetProgramStageiv");
 if(!VAR_3) ++VAR_8;
 VAR_4 = (PFNGLGETSUBROUTINEINDEXPROC)FUNC_0("glGetSubroutineIndex");
 if(!VAR_4) ++VAR_8;
 VAR_5 = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)FUNC_0("glGetSubroutineUniformLocation");
 if(!VAR_5) ++VAR_8;
 VAR_6 = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)FUNC_0("glGetUniformSubroutineuiv");
 if(!VAR_6) ++VAR_8;
 VAR_7 = (PFNGLUNIFORMSUBROUTINESUIVPROC)FUNC_0("glUniformSubroutinesuiv");
 if(!VAR_7) ++VAR_8;
 return VAR_8;
}
