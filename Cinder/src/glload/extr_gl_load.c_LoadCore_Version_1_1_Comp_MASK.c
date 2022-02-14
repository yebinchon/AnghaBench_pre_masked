
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXPOINTERPROC ;
typedef scalar_t__ PFNGLTEXCOORDPOINTERPROC ;
typedef scalar_t__ PFNGLPUSHCLIENTATTRIBPROC ;
typedef scalar_t__ PFNGLPRIORITIZETEXTURESPROC ;
typedef scalar_t__ PFNGLPOPCLIENTATTRIBPROC ;
typedef scalar_t__ PFNGLNORMALPOINTERPROC ;
typedef scalar_t__ PFNGLINTERLEAVEDARRAYSPROC ;
typedef scalar_t__ PFNGLINDEXUBVPROC ;
typedef scalar_t__ PFNGLINDEXUBPROC ;
typedef scalar_t__ PFNGLINDEXPOINTERPROC ;
typedef scalar_t__ PFNGLENABLECLIENTSTATEPROC ;
typedef scalar_t__ PFNGLEDGEFLAGPOINTERPROC ;
typedef scalar_t__ PFNGLDISABLECLIENTSTATEPROC ;
typedef scalar_t__ PFNGLCOLORPOINTERPROC ;
typedef scalar_t__ PFNGLARRAYELEMENTPROC ;
typedef scalar_t__ PFNGLARETEXTURESRESIDENTPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_16 = 0;
 VAR_0 = (PFNGLARETEXTURESRESIDENTPROC)FUNC_0("glAreTexturesResident");
 if(!VAR_0) ++VAR_16;
 VAR_1 = (PFNGLARRAYELEMENTPROC)FUNC_0("glArrayElement");
 if(!VAR_1) ++VAR_16;
 VAR_2 = (PFNGLCOLORPOINTERPROC)FUNC_0("glColorPointer");
 if(!VAR_2) ++VAR_16;
 VAR_3 = (PFNGLDISABLECLIENTSTATEPROC)FUNC_0("glDisableClientState");
 if(!VAR_3) ++VAR_16;
 VAR_4 = (PFNGLEDGEFLAGPOINTERPROC)FUNC_0("glEdgeFlagPointer");
 if(!VAR_4) ++VAR_16;
 VAR_5 = (PFNGLENABLECLIENTSTATEPROC)FUNC_0("glEnableClientState");
 if(!VAR_5) ++VAR_16;
 VAR_6 = (PFNGLINDEXPOINTERPROC)FUNC_0("glIndexPointer");
 if(!VAR_6) ++VAR_16;
 VAR_7 = (PFNGLINDEXUBPROC)FUNC_0("glIndexub");
 if(!VAR_7) ++VAR_16;
 VAR_8 = (PFNGLINDEXUBVPROC)FUNC_0("glIndexubv");
 if(!VAR_8) ++VAR_16;
 VAR_9 = (PFNGLINTERLEAVEDARRAYSPROC)FUNC_0("glInterleavedArrays");
 if(!VAR_9) ++VAR_16;
 VAR_10 = (PFNGLNORMALPOINTERPROC)FUNC_0("glNormalPointer");
 if(!VAR_10) ++VAR_16;
 VAR_11 = (PFNGLPOPCLIENTATTRIBPROC)FUNC_0("glPopClientAttrib");
 if(!VAR_11) ++VAR_16;
 VAR_12 = (PFNGLPRIORITIZETEXTURESPROC)FUNC_0("glPrioritizeTextures");
 if(!VAR_12) ++VAR_16;
 VAR_13 = (PFNGLPUSHCLIENTATTRIBPROC)FUNC_0("glPushClientAttrib");
 if(!VAR_13) ++VAR_16;
 VAR_14 = (PFNGLTEXCOORDPOINTERPROC)FUNC_0("glTexCoordPointer");
 if(!VAR_14) ++VAR_16;
 VAR_15 = (PFNGLVERTEXPOINTERPROC)FUNC_0("glVertexPointer");
 if(!VAR_15) ++VAR_16;
 return VAR_16;
}
