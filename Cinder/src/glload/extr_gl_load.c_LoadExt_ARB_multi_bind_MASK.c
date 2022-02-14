
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLBINDVERTEXBUFFERSPROC ;
typedef scalar_t__ PFNGLBINDTEXTURESPROC ;
typedef scalar_t__ PFNGLBINDSAMPLERSPROC ;
typedef scalar_t__ PFNGLBINDIMAGETEXTURESPROC ;
typedef scalar_t__ PFNGLBINDBUFFERSRANGEPROC ;
typedef scalar_t__ PFNGLBINDBUFFERSBASEPROC ;


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
 VAR_0 = (PFNGLBINDBUFFERSBASEPROC)FUNC_0("glBindBuffersBase");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLBINDBUFFERSRANGEPROC)FUNC_0("glBindBuffersRange");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLBINDIMAGETEXTURESPROC)FUNC_0("glBindImageTextures");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLBINDSAMPLERSPROC)FUNC_0("glBindSamplers");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLBINDTEXTURESPROC)FUNC_0("glBindTextures");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLBINDVERTEXBUFFERSPROC)FUNC_0("glBindVertexBuffers");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
