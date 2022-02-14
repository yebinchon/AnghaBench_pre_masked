
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE3DEXTPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE2DEXTPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE1DEXTPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE2DEXTPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE1DEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLCOPYTEXIMAGE1DEXTPROC)FUNC_0("glCopyTexImage1DEXT");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLCOPYTEXIMAGE2DEXTPROC)FUNC_0("glCopyTexImage2DEXT");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)FUNC_0("glCopyTexSubImage1DEXT");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)FUNC_0("glCopyTexSubImage2DEXT");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)FUNC_0("glCopyTexSubImage3DEXT");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
