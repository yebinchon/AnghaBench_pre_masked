
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETCOLORTABLESGIPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERIVSGIPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERFVSGIPROC ;
typedef scalar_t__ PFNGLCOPYCOLORTABLESGIPROC ;
typedef scalar_t__ PFNGLCOLORTABLESGIPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPARAMETERIVSGIPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPARAMETERFVSGIPROC ;


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
 VAR_0 = (PFNGLCOLORTABLEPARAMETERFVSGIPROC)FUNC_0("glColorTableParameterfvSGI");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLCOLORTABLEPARAMETERIVSGIPROC)FUNC_0("glColorTableParameterivSGI");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLCOLORTABLESGIPROC)FUNC_0("glColorTableSGI");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLCOPYCOLORTABLESGIPROC)FUNC_0("glCopyColorTableSGI");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)FUNC_0("glGetColorTableParameterfvSGI");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)FUNC_0("glGetColorTableParameterivSGI");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLGETCOLORTABLESGIPROC)FUNC_0("glGetColorTableSGI");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
