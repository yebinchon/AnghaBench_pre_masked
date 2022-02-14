
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLWAITSYNCPROC ;
typedef scalar_t__ PFNGLTEXIMAGE3DMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLTEXIMAGE2DMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLSAMPLEMASKIPROC ;
typedef scalar_t__ PFNGLPROVOKINGVERTEXPROC ;
typedef scalar_t__ PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLISSYNCPROC ;
typedef scalar_t__ PFNGLGETSYNCIVPROC ;
typedef scalar_t__ PFNGLGETMULTISAMPLEFVPROC ;
typedef scalar_t__ PFNGLGETINTEGER64VPROC ;
typedef scalar_t__ PFNGLGETINTEGER64I_VPROC ;
typedef scalar_t__ PFNGLGETBUFFERPARAMETERI64VPROC ;
typedef scalar_t__ PFNGLFRAMEBUFFERTEXTUREPROC ;
typedef scalar_t__ PFNGLFENCESYNCPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDELETESYNCPROC ;
typedef scalar_t__ PFNGLCLIENTWAITSYNCPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_19 = 0;
 VAR_0 = (PFNGLCLIENTWAITSYNCPROC)FUNC_0("glClientWaitSync");
 if(!VAR_0) ++VAR_19;
 VAR_1 = (PFNGLDELETESYNCPROC)FUNC_0("glDeleteSync");
 if(!VAR_1) ++VAR_19;
 VAR_2 = (PFNGLDRAWELEMENTSBASEVERTEXPROC)FUNC_0("glDrawElementsBaseVertex");
 if(!VAR_2) ++VAR_19;
 VAR_3 = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)FUNC_0("glDrawElementsInstancedBaseVertex");
 if(!VAR_3) ++VAR_19;
 VAR_4 = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)FUNC_0("glDrawRangeElementsBaseVertex");
 if(!VAR_4) ++VAR_19;
 VAR_5 = (PFNGLFENCESYNCPROC)FUNC_0("glFenceSync");
 if(!VAR_5) ++VAR_19;
 VAR_6 = (PFNGLFRAMEBUFFERTEXTUREPROC)FUNC_0("glFramebufferTexture");
 if(!VAR_6) ++VAR_19;
 VAR_7 = (PFNGLGETBUFFERPARAMETERI64VPROC)FUNC_0("glGetBufferParameteri64v");
 if(!VAR_7) ++VAR_19;
 VAR_8 = (PFNGLGETINTEGER64I_VPROC)FUNC_0("glGetInteger64i_v");
 if(!VAR_8) ++VAR_19;
 VAR_9 = (PFNGLGETINTEGER64VPROC)FUNC_0("glGetInteger64v");
 if(!VAR_9) ++VAR_19;
 VAR_10 = (PFNGLGETMULTISAMPLEFVPROC)FUNC_0("glGetMultisamplefv");
 if(!VAR_10) ++VAR_19;
 VAR_11 = (PFNGLGETSYNCIVPROC)FUNC_0("glGetSynciv");
 if(!VAR_11) ++VAR_19;
 VAR_12 = (PFNGLISSYNCPROC)FUNC_0("glIsSync");
 if(!VAR_12) ++VAR_19;
 VAR_13 = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)FUNC_0("glMultiDrawElementsBaseVertex");
 if(!VAR_13) ++VAR_19;
 VAR_14 = (PFNGLPROVOKINGVERTEXPROC)FUNC_0("glProvokingVertex");
 if(!VAR_14) ++VAR_19;
 VAR_15 = (PFNGLSAMPLEMASKIPROC)FUNC_0("glSampleMaski");
 if(!VAR_15) ++VAR_19;
 VAR_16 = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)FUNC_0("glTexImage2DMultisample");
 if(!VAR_16) ++VAR_19;
 VAR_17 = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)FUNC_0("glTexImage3DMultisample");
 if(!VAR_17) ++VAR_19;
 VAR_18 = (PFNGLWAITSYNCPROC)FUNC_0("glWaitSync");
 if(!VAR_18) ++VAR_19;
 return VAR_19;
}
