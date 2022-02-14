
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXWAITFORSBCOMLPROC ;
typedef scalar_t__ PFNGLXWAITFORMSCOMLPROC ;
typedef scalar_t__ PFNGLXSWAPBUFFERSMSCOMLPROC ;
typedef scalar_t__ PFNGLXGETSYNCVALUESOMLPROC ;
typedef scalar_t__ PFNGLXGETMSCRATEOMLPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLXGETMSCRATEOMLPROC)FUNC_0("glXGetMscRateOML");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLXGETSYNCVALUESOMLPROC)FUNC_0("glXGetSyncValuesOML");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLXSWAPBUFFERSMSCOMLPROC)FUNC_0("glXSwapBuffersMscOML");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLXWAITFORMSCOMLPROC)FUNC_0("glXWaitForMscOML");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLXWAITFORSBCOMLPROC)FUNC_0("glXWaitForSbcOML");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
