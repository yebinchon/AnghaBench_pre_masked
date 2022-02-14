
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLBLENDFUNCSEPARATEIARBPROC ;
typedef scalar_t__ PFNGLBLENDFUNCIARBPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONSEPARATEIARBPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONIARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLBLENDEQUATIONSEPARATEIARBPROC)FUNC_0("glBlendEquationSeparateiARB");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLBLENDEQUATIONIARBPROC)FUNC_0("glBlendEquationiARB");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLBLENDFUNCSEPARATEIARBPROC)FUNC_0("glBlendFuncSeparateiARB");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLBLENDFUNCIARBPROC)FUNC_0("glBlendFunciARB");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
