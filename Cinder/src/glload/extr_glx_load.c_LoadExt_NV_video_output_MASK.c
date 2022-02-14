
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXSENDPBUFFERTOVIDEONVPROC ;
typedef scalar_t__ PFNGLXRELEASEVIDEOIMAGENVPROC ;
typedef scalar_t__ PFNGLXRELEASEVIDEODEVICENVPROC ;
typedef scalar_t__ PFNGLXGETVIDEOINFONVPROC ;
typedef scalar_t__ PFNGLXGETVIDEODEVICENVPROC ;
typedef scalar_t__ PFNGLXBINDVIDEOIMAGENVPROC ;


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
 VAR_0 = (PFNGLXBINDVIDEOIMAGENVPROC)FUNC_0("glXBindVideoImageNV");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLXGETVIDEODEVICENVPROC)FUNC_0("glXGetVideoDeviceNV");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLXGETVIDEOINFONVPROC)FUNC_0("glXGetVideoInfoNV");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLXRELEASEVIDEODEVICENVPROC)FUNC_0("glXReleaseVideoDeviceNV");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLXRELEASEVIDEOIMAGENVPROC)FUNC_0("glXReleaseVideoImageNV");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLXSENDPBUFFERTOVIDEONVPROC)FUNC_0("glXSendPbufferToVideoNV");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
