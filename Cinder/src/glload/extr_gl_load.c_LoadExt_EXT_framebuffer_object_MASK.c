
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRENDERBUFFERSTORAGEEXTPROC ;
typedef scalar_t__ PFNGLISRENDERBUFFEREXTPROC ;
typedef scalar_t__ PFNGLISFRAMEBUFFEREXTPROC ;
typedef scalar_t__ PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGENRENDERBUFFERSEXTPROC ;
typedef scalar_t__ PFNGLGENFRAMEBUFFERSEXTPROC ;
typedef scalar_t__ PFNGLGENERATEMIPMAPEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE3DEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE2DEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTURE1DEXTPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC ;
typedef scalar_t__ PFNGLDELETERENDERBUFFERSEXTPROC ;
typedef scalar_t__ PFNGLDELETEFRAMEBUFFERSEXTPROC ;
typedef scalar_t__ PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC ;
typedef scalar_t__ PFNGLBINDRENDERBUFFEREXTPROC ;
typedef scalar_t__ PFNGLBINDFRAMEBUFFEREXTPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_17 = 0;
 VAR_0 = (PFNGLBINDFRAMEBUFFEREXTPROC)FUNC_0("glBindFramebufferEXT");
 if(!VAR_0) ++VAR_17;
 VAR_1 = (PFNGLBINDRENDERBUFFEREXTPROC)FUNC_0("glBindRenderbufferEXT");
 if(!VAR_1) ++VAR_17;
 VAR_2 = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)FUNC_0("glCheckFramebufferStatusEXT");
 if(!VAR_2) ++VAR_17;
 VAR_3 = (PFNGLDELETEFRAMEBUFFERSEXTPROC)FUNC_0("glDeleteFramebuffersEXT");
 if(!VAR_3) ++VAR_17;
 VAR_4 = (PFNGLDELETERENDERBUFFERSEXTPROC)FUNC_0("glDeleteRenderbuffersEXT");
 if(!VAR_4) ++VAR_17;
 VAR_5 = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)FUNC_0("glFramebufferRenderbufferEXT");
 if(!VAR_5) ++VAR_17;
 VAR_6 = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)FUNC_0("glFramebufferTexture1DEXT");
 if(!VAR_6) ++VAR_17;
 VAR_7 = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)FUNC_0("glFramebufferTexture2DEXT");
 if(!VAR_7) ++VAR_17;
 VAR_8 = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)FUNC_0("glFramebufferTexture3DEXT");
 if(!VAR_8) ++VAR_17;
 VAR_9 = (PFNGLGENFRAMEBUFFERSEXTPROC)FUNC_0("glGenFramebuffersEXT");
 if(!VAR_9) ++VAR_17;
 VAR_10 = (PFNGLGENRENDERBUFFERSEXTPROC)FUNC_0("glGenRenderbuffersEXT");
 if(!VAR_10) ++VAR_17;
 VAR_11 = (PFNGLGENERATEMIPMAPEXTPROC)FUNC_0("glGenerateMipmapEXT");
 if(!VAR_11) ++VAR_17;
 VAR_12 = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)FUNC_0("glGetFramebufferAttachmentParameterivEXT");
 if(!VAR_12) ++VAR_17;
 VAR_13 = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)FUNC_0("glGetRenderbufferParameterivEXT");
 if(!VAR_13) ++VAR_17;
 VAR_14 = (PFNGLISFRAMEBUFFEREXTPROC)FUNC_0("glIsFramebufferEXT");
 if(!VAR_14) ++VAR_17;
 VAR_15 = (PFNGLISRENDERBUFFEREXTPROC)FUNC_0("glIsRenderbufferEXT");
 if(!VAR_15) ++VAR_17;
 VAR_16 = (PFNGLRENDERBUFFERSTORAGEEXTPROC)FUNC_0("glRenderbufferStorageEXT");
 if(!VAR_16) ++VAR_17;
 return VAR_17;
}
