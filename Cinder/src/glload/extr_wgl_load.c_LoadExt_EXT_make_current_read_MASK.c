
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLMAKECONTEXTCURRENTEXTPROC ;
typedef scalar_t__ PFNWGLGETCURRENTREADDCEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_2 = 0;
 VAR_0 = (PFNWGLGETCURRENTREADDCEXTPROC)FUNC_0("wglGetCurrentReadDCEXT");
 if(!VAR_0) ++VAR_2;
 VAR_1 = (PFNWGLMAKECONTEXTCURRENTEXTPROC)FUNC_0("wglMakeContextCurrentEXT");
 if(!VAR_1) ++VAR_2;
 return VAR_2;
}
