
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSENDPBUFFERTOVIDEONVPROC ;
typedef scalar_t__ PFNWGLRELEASEVIDEOIMAGENVPROC ;
typedef scalar_t__ PFNWGLRELEASEVIDEODEVICENVPROC ;
typedef scalar_t__ PFNWGLGETVIDEOINFONVPROC ;
typedef scalar_t__ PFNWGLGETVIDEODEVICENVPROC ;
typedef scalar_t__ PFNWGLBINDVIDEOIMAGENVPROC ;


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
 VAR_0 = (PFNWGLBINDVIDEOIMAGENVPROC)FUNC_0("wglBindVideoImageNV");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNWGLGETVIDEODEVICENVPROC)FUNC_0("wglGetVideoDeviceNV");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNWGLGETVIDEOINFONVPROC)FUNC_0("wglGetVideoInfoNV");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNWGLRELEASEVIDEODEVICENVPROC)FUNC_0("wglReleaseVideoDeviceNV");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNWGLRELEASEVIDEOIMAGENVPROC)FUNC_0("wglReleaseVideoImageNV");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNWGLSENDPBUFFERTOVIDEONVPROC)FUNC_0("wglSendPbufferToVideoNV");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
