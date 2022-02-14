
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC ;
typedef scalar_t__ PFNWGLBINDVIDEOCAPTUREDEVICENVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC)FUNC_0("wglBindVideoCaptureDeviceNV");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC)FUNC_0("wglEnumerateVideoCaptureDevicesNV");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC)FUNC_0("wglLockVideoCaptureDeviceNV");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC)FUNC_0("wglQueryVideoCaptureDeviceNV");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC)FUNC_0("wglReleaseVideoCaptureDeviceNV");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
