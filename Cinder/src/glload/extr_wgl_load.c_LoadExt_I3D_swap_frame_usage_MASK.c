
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLQUERYFRAMETRACKINGI3DPROC ;
typedef scalar_t__ PFNWGLGETFRAMEUSAGEI3DPROC ;
typedef scalar_t__ PFNWGLENDFRAMETRACKINGI3DPROC ;
typedef scalar_t__ PFNWGLBEGINFRAMETRACKINGI3DPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNWGLBEGINFRAMETRACKINGI3DPROC)FUNC_0("wglBeginFrameTrackingI3D");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNWGLENDFRAMETRACKINGI3DPROC)FUNC_0("wglEndFrameTrackingI3D");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNWGLGETFRAMEUSAGEI3DPROC)FUNC_0("wglGetFrameUsageI3D");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNWGLQUERYFRAMETRACKINGI3DPROC)FUNC_0("wglQueryFrameTrackingI3D");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
