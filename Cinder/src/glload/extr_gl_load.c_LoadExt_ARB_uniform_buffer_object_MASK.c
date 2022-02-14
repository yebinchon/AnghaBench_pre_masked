
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMBLOCKBINDINGPROC ;
typedef scalar_t__ PFNGLGETUNIFORMINDICESPROC ;
typedef scalar_t__ PFNGLGETUNIFORMBLOCKINDEXPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMSIVPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC ;
typedef scalar_t__ PFNGLGETACTIVEUNIFORMBLOCKIVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_7 = 0;
 VAR_0 = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)FUNC_0("glGetActiveUniformBlockName");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)FUNC_0("glGetActiveUniformBlockiv");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLGETACTIVEUNIFORMNAMEPROC)FUNC_0("glGetActiveUniformName");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLGETACTIVEUNIFORMSIVPROC)FUNC_0("glGetActiveUniformsiv");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLGETUNIFORMBLOCKINDEXPROC)FUNC_0("glGetUniformBlockIndex");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLGETUNIFORMINDICESPROC)FUNC_0("glGetUniformIndices");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLUNIFORMBLOCKBINDINGPROC)FUNC_0("glUniformBlockBinding");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
