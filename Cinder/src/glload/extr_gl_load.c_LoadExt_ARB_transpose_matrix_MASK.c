
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMULTTRANSPOSEMATRIXFARBPROC ;
typedef scalar_t__ PFNGLMULTTRANSPOSEMATRIXDARBPROC ;
typedef scalar_t__ PFNGLLOADTRANSPOSEMATRIXFARBPROC ;
typedef scalar_t__ PFNGLLOADTRANSPOSEMATRIXDARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)FUNC_0("glLoadTransposeMatrixdARB");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)FUNC_0("glLoadTransposeMatrixfARB");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)FUNC_0("glMultTransposeMatrixdARB");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)FUNC_0("glMultTransposeMatrixfARB");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
