
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLFINALCOMBINERINPUTNVPROC ;
typedef scalar_t__ PFNGLCOMBINERPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLCOMBINERPARAMETERINVPROC ;
typedef scalar_t__ PFNGLCOMBINERPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLCOMBINERPARAMETERFNVPROC ;
typedef scalar_t__ PFNGLCOMBINEROUTPUTNVPROC ;
typedef scalar_t__ PFNGLCOMBINERINPUTNVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_13 = 0;
 VAR_0 = (PFNGLCOMBINERINPUTNVPROC)FUNC_0("glCombinerInputNV");
 if(!VAR_0) ++VAR_13;
 VAR_1 = (PFNGLCOMBINEROUTPUTNVPROC)FUNC_0("glCombinerOutputNV");
 if(!VAR_1) ++VAR_13;
 VAR_2 = (PFNGLCOMBINERPARAMETERFNVPROC)FUNC_0("glCombinerParameterfNV");
 if(!VAR_2) ++VAR_13;
 VAR_3 = (PFNGLCOMBINERPARAMETERFVNVPROC)FUNC_0("glCombinerParameterfvNV");
 if(!VAR_3) ++VAR_13;
 VAR_4 = (PFNGLCOMBINERPARAMETERINVPROC)FUNC_0("glCombinerParameteriNV");
 if(!VAR_4) ++VAR_13;
 VAR_5 = (PFNGLCOMBINERPARAMETERIVNVPROC)FUNC_0("glCombinerParameterivNV");
 if(!VAR_5) ++VAR_13;
 VAR_6 = (PFNGLFINALCOMBINERINPUTNVPROC)FUNC_0("glFinalCombinerInputNV");
 if(!VAR_6) ++VAR_13;
 VAR_7 = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)FUNC_0("glGetCombinerInputParameterfvNV");
 if(!VAR_7) ++VAR_13;
 VAR_8 = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)FUNC_0("glGetCombinerInputParameterivNV");
 if(!VAR_8) ++VAR_13;
 VAR_9 = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)FUNC_0("glGetCombinerOutputParameterfvNV");
 if(!VAR_9) ++VAR_13;
 VAR_10 = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)FUNC_0("glGetCombinerOutputParameterivNV");
 if(!VAR_10) ++VAR_13;
 VAR_11 = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)FUNC_0("glGetFinalCombinerInputParameterfvNV");
 if(!VAR_11) ++VAR_13;
 VAR_12 = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)FUNC_0("glGetFinalCombinerInputParameterivNV");
 if(!VAR_12) ++VAR_13;
 return VAR_13;
}
