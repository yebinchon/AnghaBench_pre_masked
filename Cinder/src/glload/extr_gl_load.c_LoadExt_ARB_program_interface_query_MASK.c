
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETPROGRAMRESOURCENAMEPROC ;
typedef scalar_t__ PFNGLGETPROGRAMRESOURCELOCATIONPROC ;
typedef scalar_t__ PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC ;
typedef scalar_t__ PFNGLGETPROGRAMRESOURCEIVPROC ;
typedef scalar_t__ PFNGLGETPROGRAMRESOURCEINDEXPROC ;
typedef scalar_t__ PFNGLGETPROGRAMINTERFACEIVPROC ;


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
 VAR_0 = (PFNGLGETPROGRAMINTERFACEIVPROC)FUNC_0("glGetProgramInterfaceiv");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLGETPROGRAMRESOURCEINDEXPROC)FUNC_0("glGetProgramResourceIndex");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)FUNC_0("glGetProgramResourceLocation");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)FUNC_0("glGetProgramResourceLocationIndex");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLGETPROGRAMRESOURCENAMEPROC)FUNC_0("glGetProgramResourceName");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLGETPROGRAMRESOURCEIVPROC)FUNC_0("glGetProgramResourceiv");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
