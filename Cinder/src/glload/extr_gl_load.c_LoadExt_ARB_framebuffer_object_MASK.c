
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRENDERBUFFERSTORAGEPROC ;
typedef scalar_t__ PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLISRENDERBUFFERPROC ;
typedef scalar_t__ PFNGLISFRAMEBUFFERPROC ;
typedef scalar_t__ PFNGLGETRENDERBUFFERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGENRENDERBUFFERSPROC ;
typedef scalar_t__ PFNGLGENFRAMEBUFFERSPROC ;
typedef scalar_t__ PFNGLGENERATEMIPMAPPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURELAYERPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE3DPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE2DPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE1DPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERRENDERBUFFERPROC ;
typedef scalar_t__ PFNGLDELETERENDERBUFFERSPROC ;
typedef scalar_t__ PFNGLDELETEFRAMEBUFFERSPROC ;
typedef scalar_t__ PFNGLCHECKFRAMEBUFFERSTATUSPROC ;
typedef scalar_t__ PFNGLBLITFRAMEBUFFERPROC ;
typedef scalar_t__ PFNGLBINDRENDERBUFFERPROC ;
typedef scalar_t__ PFNGLBINDFRAMEBUFFERPROC ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_20 = 0;
 VAR_0 = (PFNGLBINDFRAMEBUFFERPROC)FUNC_0("glBindFramebuffer");
 if(!VAR_0) ++VAR_20;
 VAR_1 = (PFNGLBINDRENDERBUFFERPROC)FUNC_0("glBindRenderbuffer");
 if(!VAR_1) ++VAR_20;
 VAR_2 = (PFNGLBLITFRAMEBUFFERPROC)FUNC_0("glBlitFramebuffer");
 if(!VAR_2) ++VAR_20;
 VAR_3 = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)FUNC_0("glCheckFramebufferStatus");
 if(!VAR_3) ++VAR_20;
 VAR_4 = (PFNGLDELETEFRAMEBUFFERSPROC)FUNC_0("glDeleteFramebuffers");
 if(!VAR_4) ++VAR_20;
 VAR_5 = (PFNGLDELETERENDERBUFFERSPROC)FUNC_0("glDeleteRenderbuffers");
 if(!VAR_5) ++VAR_20;
 VAR_6 = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)FUNC_0("glFramebufferRenderbuffer");
 if(!VAR_6) ++VAR_20;
 VAR_7 = (PFNGLFRAMEBUFFERTEXTURE1DPROC)FUNC_0("glFramebufferTexture1D");
 if(!VAR_7) ++VAR_20;
 VAR_8 = (PFNGLFRAMEBUFFERTEXTURE2DPROC)FUNC_0("glFramebufferTexture2D");
 if(!VAR_8) ++VAR_20;
 VAR_9 = (PFNGLFRAMEBUFFERTEXTURE3DPROC)FUNC_0("glFramebufferTexture3D");
 if(!VAR_9) ++VAR_20;
 VAR_10 = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)FUNC_0("glFramebufferTextureLayer");
 if(!VAR_10) ++VAR_20;
 VAR_11 = (PFNGLGENFRAMEBUFFERSPROC)FUNC_0("glGenFramebuffers");
 if(!VAR_11) ++VAR_20;
 VAR_12 = (PFNGLGENRENDERBUFFERSPROC)FUNC_0("glGenRenderbuffers");
 if(!VAR_12) ++VAR_20;
 VAR_13 = (PFNGLGENERATEMIPMAPPROC)FUNC_0("glGenerateMipmap");
 if(!VAR_13) ++VAR_20;
 VAR_14 = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)FUNC_0("glGetFramebufferAttachmentParameteriv");
 if(!VAR_14) ++VAR_20;
 VAR_15 = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)FUNC_0("glGetRenderbufferParameteriv");
 if(!VAR_15) ++VAR_20;
 VAR_16 = (PFNGLISFRAMEBUFFERPROC)FUNC_0("glIsFramebuffer");
 if(!VAR_16) ++VAR_20;
 VAR_17 = (PFNGLISRENDERBUFFERPROC)FUNC_0("glIsRenderbuffer");
 if(!VAR_17) ++VAR_20;
 VAR_18 = (PFNGLRENDERBUFFERSTORAGEPROC)FUNC_0("glRenderbufferStorage");
 if(!VAR_18) ++VAR_20;
 VAR_19 = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)FUNC_0("glRenderbufferStorageMultisample");
 if(!VAR_19) ++VAR_20;
 return VAR_20;
}
