
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC ;
typedef scalar_t__ PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC ;
typedef scalar_t__ PFNGLXBINDVIDEOCAPTUREDEVICENVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLXBINDVIDEOCAPTUREDEVICENVPROC)FUNC_0("glXBindVideoCaptureDeviceNV");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC)FUNC_0("glXEnumerateVideoCaptureDevicesNV");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC)FUNC_0("glXLockVideoCaptureDeviceNV");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC)FUNC_0("glXQueryVideoCaptureDeviceNV");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC)FUNC_0("glXReleaseVideoCaptureDeviceNV");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
