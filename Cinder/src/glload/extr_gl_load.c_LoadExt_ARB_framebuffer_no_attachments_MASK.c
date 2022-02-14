
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETFRAMEBUFFERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERPARAMETERIPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_2 = 0;
 VAR_0 = (PFNGLFRAMEBUFFERPARAMETERIPROC)FUNC_0("glFramebufferParameteri");
 if(!VAR_0) ++VAR_2;
 VAR_1 = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)FUNC_0("glGetFramebufferParameteriv");
 if(!VAR_1) ++VAR_2;
 return VAR_2;
}
