
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC ;
typedef scalar_t__ PFNWGLISENABLEDGENLOCKI3DPROC ;
typedef scalar_t__ PFNWGLGETGENLOCKSOURCEI3DPROC ;
typedef scalar_t__ PFNWGLGETGENLOCKSOURCEEDGEI3DPROC ;
typedef scalar_t__ PFNWGLGETGENLOCKSOURCEDELAYI3DPROC ;
typedef scalar_t__ PFNWGLGETGENLOCKSAMPLERATEI3DPROC ;
typedef scalar_t__ PFNWGLGENLOCKSOURCEI3DPROC ;
typedef scalar_t__ PFNWGLGENLOCKSOURCEEDGEI3DPROC ;
typedef scalar_t__ PFNWGLGENLOCKSOURCEDELAYI3DPROC ;
typedef scalar_t__ PFNWGLGENLOCKSAMPLERATEI3DPROC ;
typedef scalar_t__ PFNWGLENABLEGENLOCKI3DPROC ;
typedef scalar_t__ PFNWGLDISABLEGENLOCKI3DPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_12 = 0;
 VAR_0 = (PFNWGLDISABLEGENLOCKI3DPROC)FUNC_0("wglDisableGenlockI3D");
 if(!VAR_0) ++VAR_12;
 VAR_1 = (PFNWGLENABLEGENLOCKI3DPROC)FUNC_0("wglEnableGenlockI3D");
 if(!VAR_1) ++VAR_12;
 VAR_2 = (PFNWGLGENLOCKSAMPLERATEI3DPROC)FUNC_0("wglGenlockSampleRateI3D");
 if(!VAR_2) ++VAR_12;
 VAR_3 = (PFNWGLGENLOCKSOURCEDELAYI3DPROC)FUNC_0("wglGenlockSourceDelayI3D");
 if(!VAR_3) ++VAR_12;
 VAR_4 = (PFNWGLGENLOCKSOURCEEDGEI3DPROC)FUNC_0("wglGenlockSourceEdgeI3D");
 if(!VAR_4) ++VAR_12;
 VAR_5 = (PFNWGLGENLOCKSOURCEI3DPROC)FUNC_0("wglGenlockSourceI3D");
 if(!VAR_5) ++VAR_12;
 VAR_6 = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC)FUNC_0("wglGetGenlockSampleRateI3D");
 if(!VAR_6) ++VAR_12;
 VAR_7 = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)FUNC_0("wglGetGenlockSourceDelayI3D");
 if(!VAR_7) ++VAR_12;
 VAR_8 = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)FUNC_0("wglGetGenlockSourceEdgeI3D");
 if(!VAR_8) ++VAR_12;
 VAR_9 = (PFNWGLGETGENLOCKSOURCEI3DPROC)FUNC_0("wglGetGenlockSourceI3D");
 if(!VAR_9) ++VAR_12;
 VAR_10 = (PFNWGLISENABLEDGENLOCKI3DPROC)FUNC_0("wglIsEnabledGenlockI3D");
 if(!VAR_10) ++VAR_12;
 VAR_11 = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)FUNC_0("wglQueryGenlockMaxSourceDelayI3D");
 if(!VAR_11) ++VAR_12;
 return VAR_12;
}
