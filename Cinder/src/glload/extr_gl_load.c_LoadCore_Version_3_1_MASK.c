
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMBLOCKBINDINGPROC ;
typedef scalar_t__ PFNGLTEXBUFFERPROC ;
typedef scalar_t__ PFNGLPRIMITIVERESTARTINDEXPROC ;
typedef scalar_t__ PFNGLGETUNIFORMINDICESPROC ;
typedef scalar_t__ PFNGLGETUNIFORMBLOCKINDEXPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMSIVPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKIVPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSINSTANCEDPROC ;
typedef scalar_t__ PFNGLCOPYBUFFERSUBDATAPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_12 = 0;
 VAR_0 = (PFNGLCOPYBUFFERSUBDATAPROC)FUNC_0("glCopyBufferSubData");
 if(!VAR_0) ++VAR_12;
 VAR_1 = (PFNGLDRAWARRAYSINSTANCEDPROC)FUNC_0("glDrawArraysInstanced");
 if(!VAR_1) ++VAR_12;
 VAR_2 = (PFNGLDRAWELEMENTSINSTANCEDPROC)FUNC_0("glDrawElementsInstanced");
 if(!VAR_2) ++VAR_12;
 VAR_3 = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)FUNC_0("glGetActiveUniformBlockName");
 if(!VAR_3) ++VAR_12;
 VAR_4 = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)FUNC_0("glGetActiveUniformBlockiv");
 if(!VAR_4) ++VAR_12;
 VAR_5 = (PFNGLGETACTIVEUNIFORMNAMEPROC)FUNC_0("glGetActiveUniformName");
 if(!VAR_5) ++VAR_12;
 VAR_6 = (PFNGLGETACTIVEUNIFORMSIVPROC)FUNC_0("glGetActiveUniformsiv");
 if(!VAR_6) ++VAR_12;
 VAR_7 = (PFNGLGETUNIFORMBLOCKINDEXPROC)FUNC_0("glGetUniformBlockIndex");
 if(!VAR_7) ++VAR_12;
 VAR_8 = (PFNGLGETUNIFORMINDICESPROC)FUNC_0("glGetUniformIndices");
 if(!VAR_8) ++VAR_12;
 VAR_9 = (PFNGLPRIMITIVERESTARTINDEXPROC)FUNC_0("glPrimitiveRestartIndex");
 if(!VAR_9) ++VAR_12;
 VAR_10 = (PFNGLTEXBUFFERPROC)FUNC_0("glTexBuffer");
 if(!VAR_10) ++VAR_12;
 VAR_11 = (PFNGLUNIFORMBLOCKBINDINGPROC)FUNC_0("glUniformBlockBinding");
 if(!VAR_11) ++VAR_12;
 return VAR_12;
}
