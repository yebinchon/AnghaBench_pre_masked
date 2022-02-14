
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMMATRIX4X3DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX4X2DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX4DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3X4DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3X2DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2X4DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2X3DVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2DVPROC ;
typedef scalar_t__ PFNGLUNIFORM4DVPROC ;
typedef scalar_t__ PFNGLUNIFORM4DPROC ;
typedef scalar_t__ PFNGLUNIFORM3DVPROC ;
typedef scalar_t__ PFNGLUNIFORM3DPROC ;
typedef scalar_t__ PFNGLUNIFORM2DVPROC ;
typedef scalar_t__ PFNGLUNIFORM2DPROC ;
typedef scalar_t__ PFNGLUNIFORM1DVPROC ;
typedef scalar_t__ PFNGLUNIFORM1DPROC ;
typedef scalar_t__ PFNGLGETUNIFORMDVPROC ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_18 = 0;
 VAR_0 = (PFNGLGETUNIFORMDVPROC)FUNC_0("glGetUniformdv");
 if(!VAR_0) ++VAR_18;
 VAR_1 = (PFNGLUNIFORM1DPROC)FUNC_0("glUniform1d");
 if(!VAR_1) ++VAR_18;
 VAR_2 = (PFNGLUNIFORM1DVPROC)FUNC_0("glUniform1dv");
 if(!VAR_2) ++VAR_18;
 VAR_3 = (PFNGLUNIFORM2DPROC)FUNC_0("glUniform2d");
 if(!VAR_3) ++VAR_18;
 VAR_4 = (PFNGLUNIFORM2DVPROC)FUNC_0("glUniform2dv");
 if(!VAR_4) ++VAR_18;
 VAR_5 = (PFNGLUNIFORM3DPROC)FUNC_0("glUniform3d");
 if(!VAR_5) ++VAR_18;
 VAR_6 = (PFNGLUNIFORM3DVPROC)FUNC_0("glUniform3dv");
 if(!VAR_6) ++VAR_18;
 VAR_7 = (PFNGLUNIFORM4DPROC)FUNC_0("glUniform4d");
 if(!VAR_7) ++VAR_18;
 VAR_8 = (PFNGLUNIFORM4DVPROC)FUNC_0("glUniform4dv");
 if(!VAR_8) ++VAR_18;
 VAR_9 = (PFNGLUNIFORMMATRIX2DVPROC)FUNC_0("glUniformMatrix2dv");
 if(!VAR_9) ++VAR_18;
 VAR_10 = (PFNGLUNIFORMMATRIX2X3DVPROC)FUNC_0("glUniformMatrix2x3dv");
 if(!VAR_10) ++VAR_18;
 VAR_11 = (PFNGLUNIFORMMATRIX2X4DVPROC)FUNC_0("glUniformMatrix2x4dv");
 if(!VAR_11) ++VAR_18;
 VAR_12 = (PFNGLUNIFORMMATRIX3DVPROC)FUNC_0("glUniformMatrix3dv");
 if(!VAR_12) ++VAR_18;
 VAR_13 = (PFNGLUNIFORMMATRIX3X2DVPROC)FUNC_0("glUniformMatrix3x2dv");
 if(!VAR_13) ++VAR_18;
 VAR_14 = (PFNGLUNIFORMMATRIX3X4DVPROC)FUNC_0("glUniformMatrix3x4dv");
 if(!VAR_14) ++VAR_18;
 VAR_15 = (PFNGLUNIFORMMATRIX4DVPROC)FUNC_0("glUniformMatrix4dv");
 if(!VAR_15) ++VAR_18;
 VAR_16 = (PFNGLUNIFORMMATRIX4X2DVPROC)FUNC_0("glUniformMatrix4x2dv");
 if(!VAR_16) ++VAR_18;
 VAR_17 = (PFNGLUNIFORMMATRIX4X3DVPROC)FUNC_0("glUniformMatrix4x3dv");
 if(!VAR_17) ++VAR_18;
 return VAR_18;
}
