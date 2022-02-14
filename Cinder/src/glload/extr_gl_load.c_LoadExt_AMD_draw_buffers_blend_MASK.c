
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC ;
typedef scalar_t__ PFNGLBLENDFUNCINDEXEDAMDPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONINDEXEDAMDPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLBLENDEQUATIONINDEXEDAMDPROC)FUNC_0("glBlendEquationIndexedAMD");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC)FUNC_0("glBlendEquationSeparateIndexedAMD");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLBLENDFUNCINDEXEDAMDPROC)FUNC_0("glBlendFuncIndexedAMD");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC)FUNC_0("glBlendFuncSeparateIndexedAMD");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
