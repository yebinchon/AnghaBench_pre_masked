
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSHADERBINARYPROC ;
typedef scalar_t__ PFNGLRELEASESHADERCOMPILERPROC ;
typedef scalar_t__ PFNGLGETSHADERPRECISIONFORMATPROC ;
typedef scalar_t__ PFNGLDEPTHRANGEFPROC ;
typedef scalar_t__ PFNGLCLEARDEPTHFPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLCLEARDEPTHFPROC)FUNC_0("glClearDepthf");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLDEPTHRANGEFPROC)FUNC_0("glDepthRangef");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLGETSHADERPRECISIONFORMATPROC)FUNC_0("glGetShaderPrecisionFormat");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLRELEASESHADERCOMPILERPROC)FUNC_0("glReleaseShaderCompiler");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLSHADERBINARYPROC)FUNC_0("glShaderBinary");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
