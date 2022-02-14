
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLWAITFORSBCOMLPROC ;
typedef scalar_t__ PFNWGLWAITFORMSCOMLPROC ;
typedef scalar_t__ PFNWGLSWAPLAYERBUFFERSMSCOMLPROC ;
typedef scalar_t__ PFNWGLSWAPBUFFERSMSCOMLPROC ;
typedef scalar_t__ PFNWGLGETSYNCVALUESOMLPROC ;
typedef scalar_t__ PFNWGLGETMSCRATEOMLPROC ;


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
 VAR_0 = (PFNWGLGETMSCRATEOMLPROC)FUNC_0("wglGetMscRateOML");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNWGLGETSYNCVALUESOMLPROC)FUNC_0("wglGetSyncValuesOML");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNWGLSWAPBUFFERSMSCOMLPROC)FUNC_0("wglSwapBuffersMscOML");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)FUNC_0("wglSwapLayerBuffersMscOML");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNWGLWAITFORMSCOMLPROC)FUNC_0("wglWaitForMscOML");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNWGLWAITFORSBCOMLPROC)FUNC_0("wglWaitForSbcOML");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
