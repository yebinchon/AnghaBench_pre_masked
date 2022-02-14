
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXPOINTERPROC ;
typedef scalar_t__ PFNGLTEXSUBIMAGE2DPROC ;
typedef scalar_t__ PFNGLTEXSUBIMAGE1DPROC ;
typedef scalar_t__ PFNGLTEXCOORDPOINTERPROC ;
typedef scalar_t__ PFNGLPUSHCLIENTATTRIBPROC ;
typedef scalar_t__ PFNGLPRIORITIZETEXTURESPROC ;
typedef scalar_t__ PFNGLPOPCLIENTATTRIBPROC ;
typedef scalar_t__ PFNGLPOLYGONOFFSETPROC ;
typedef scalar_t__ PFNGLNORMALPOINTERPROC ;
typedef scalar_t__ PFNGLISTEXTUREPROC ;
typedef scalar_t__ PFNGLINTERLEAVEDARRAYSPROC ;
typedef scalar_t__ PFNGLINDEXUBVPROC ;
typedef scalar_t__ PFNGLINDEXUBPROC ;
typedef scalar_t__ PFNGLINDEXPOINTERPROC ;
typedef scalar_t__ PFNGLGETPOINTERVPROC ;
typedef scalar_t__ PFNGLGENTEXTURESPROC ;
typedef scalar_t__ PFNGLENABLECLIENTSTATEPROC ;
typedef scalar_t__ PFNGLEDGEFLAGPOINTERPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSPROC ;
typedef scalar_t__ PFNGLDISABLECLIENTSTATEPROC ;
typedef scalar_t__ PFNGLDELETETEXTURESPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE1DPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE2DPROC ;
typedef scalar_t__ PFNGLCOPYTEXIMAGE1DPROC ;
typedef scalar_t__ PFNGLCOLORPOINTERPROC ;
typedef scalar_t__ PFNGLBINDTEXTUREPROC ;
typedef scalar_t__ PFNGLARRAYELEMENTPROC ;
typedef scalar_t__ PFNGLARETEXTURESRESIDENTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_31) {
 if(!VAR_0) return;
 VAR_11 = (PFNGLDRAWARRAYSPROC)VAR_31("glDrawArrays");
 VAR_12 = (PFNGLDRAWELEMENTSPROC)VAR_31("glDrawElements");
 VAR_16 = (PFNGLGETPOINTERVPROC)VAR_31("glGetPointerv");
 VAR_23 = (PFNGLPOLYGONOFFSETPROC)VAR_31("glPolygonOffset");
 VAR_5 = (PFNGLCOPYTEXIMAGE1DPROC)VAR_31("glCopyTexImage1D");
 VAR_6 = (PFNGLCOPYTEXIMAGE2DPROC)VAR_31("glCopyTexImage2D");
 VAR_7 = (PFNGLCOPYTEXSUBIMAGE1DPROC)VAR_31("glCopyTexSubImage1D");
 VAR_8 = (PFNGLCOPYTEXSUBIMAGE2DPROC)VAR_31("glCopyTexSubImage2D");
 VAR_28 = (PFNGLTEXSUBIMAGE1DPROC)VAR_31("glTexSubImage1D");
 VAR_29 = (PFNGLTEXSUBIMAGE2DPROC)VAR_31("glTexSubImage2D");
 VAR_3 = (PFNGLBINDTEXTUREPROC)VAR_31("glBindTexture");
 VAR_9 = (PFNGLDELETETEXTURESPROC)VAR_31("glDeleteTextures");
 VAR_15 = (PFNGLGENTEXTURESPROC)VAR_31("glGenTextures");
 VAR_21 = (PFNGLISTEXTUREPROC)VAR_31("glIsTexture");
 VAR_2 = (PFNGLARRAYELEMENTPROC)VAR_31("glArrayElement");
 VAR_4 = (PFNGLCOLORPOINTERPROC)VAR_31("glColorPointer");
 VAR_10 = (PFNGLDISABLECLIENTSTATEPROC)VAR_31("glDisableClientState");
 VAR_13 = (PFNGLEDGEFLAGPOINTERPROC)VAR_31("glEdgeFlagPointer");
 VAR_14 = (PFNGLENABLECLIENTSTATEPROC)VAR_31("glEnableClientState");
 VAR_17 = (PFNGLINDEXPOINTERPROC)VAR_31("glIndexPointer");
 VAR_20 = (PFNGLINTERLEAVEDARRAYSPROC)VAR_31("glInterleavedArrays");
 VAR_22 = (PFNGLNORMALPOINTERPROC)VAR_31("glNormalPointer");
 VAR_27 = (PFNGLTEXCOORDPOINTERPROC)VAR_31("glTexCoordPointer");
 VAR_30 = (PFNGLVERTEXPOINTERPROC)VAR_31("glVertexPointer");
 VAR_1 = (PFNGLARETEXTURESRESIDENTPROC)VAR_31("glAreTexturesResident");
 VAR_25 = (PFNGLPRIORITIZETEXTURESPROC)VAR_31("glPrioritizeTextures");
 VAR_18 = (PFNGLINDEXUBPROC)VAR_31("glIndexub");
 VAR_19 = (PFNGLINDEXUBVPROC)VAR_31("glIndexubv");
 VAR_24 = (PFNGLPOPCLIENTATTRIBPROC)VAR_31("glPopClientAttrib");
 VAR_26 = (PFNGLPUSHCLIENTATTRIBPROC)VAR_31("glPushClientAttrib");
}
