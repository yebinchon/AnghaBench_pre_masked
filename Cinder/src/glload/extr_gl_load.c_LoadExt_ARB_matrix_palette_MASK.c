
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMATRIXINDEXUSVARBPROC ;
typedef scalar_t__ PFNGLMATRIXINDEXUIVARBPROC ;
typedef scalar_t__ PFNGLMATRIXINDEXUBVARBPROC ;
typedef scalar_t__ PFNGLMATRIXINDEXPOINTERARBPROC ;
typedef scalar_t__ PFNGLCURRENTPALETTEMATRIXARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLCURRENTPALETTEMATRIXARBPROC)FUNC_0("glCurrentPaletteMatrixARB");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLMATRIXINDEXPOINTERARBPROC)FUNC_0("glMatrixIndexPointerARB");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLMATRIXINDEXUBVARBPROC)FUNC_0("glMatrixIndexubvARB");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLMATRIXINDEXUIVARBPROC)FUNC_0("glMatrixIndexuivARB");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLMATRIXINDEXUSVARBPROC)FUNC_0("glMatrixIndexusvARB");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
