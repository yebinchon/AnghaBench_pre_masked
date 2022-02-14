
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISVERTEXARRAYAPPLEPROC ;
typedef scalar_t__ PFNGLGENVERTEXARRAYSAPPLEPROC ;
typedef scalar_t__ PFNGLDELETEVERTEXARRAYSAPPLEPROC ;
typedef scalar_t__ PFNGLBINDVERTEXARRAYAPPLEPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLBINDVERTEXARRAYAPPLEPROC)FUNC_0("glBindVertexArrayAPPLE");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)FUNC_0("glDeleteVertexArraysAPPLE");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLGENVERTEXARRAYSAPPLEPROC)FUNC_0("glGenVertexArraysAPPLE");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLISVERTEXARRAYAPPLEPROC)FUNC_0("glIsVertexArrayAPPLE");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
