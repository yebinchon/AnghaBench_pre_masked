
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMMATRIX4X3FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX4X2FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3X4FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX3X2FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2X4FVPROC ;
typedef scalar_t__ PFNGLUNIFORMMATRIX2X3FVPROC ;


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
 VAR_0 = (PFNGLUNIFORMMATRIX2X3FVPROC)FUNC_0("glUniformMatrix2x3fv");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLUNIFORMMATRIX2X4FVPROC)FUNC_0("glUniformMatrix2x4fv");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLUNIFORMMATRIX3X2FVPROC)FUNC_0("glUniformMatrix3x2fv");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLUNIFORMMATRIX3X4FVPROC)FUNC_0("glUniformMatrix3x4fv");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLUNIFORMMATRIX4X2FVPROC)FUNC_0("glUniformMatrix4x2fv");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLUNIFORMMATRIX4X3FVPROC)FUNC_0("glUniformMatrix4x3fv");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
