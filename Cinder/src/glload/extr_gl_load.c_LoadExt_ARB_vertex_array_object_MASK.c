
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISVERTEXARRAYPROC ;
typedef scalar_t__ PFNGLGENVERTEXARRAYSPROC ;
typedef scalar_t__ PFNGLDELETEVERTEXARRAYSPROC ;
typedef scalar_t__ PFNGLBINDVERTEXARRAYPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLBINDVERTEXARRAYPROC)FUNC_0("glBindVertexArray");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLDELETEVERTEXARRAYSPROC)FUNC_0("glDeleteVertexArrays");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLGENVERTEXARRAYSPROC)FUNC_0("glGenVertexArrays");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLISVERTEXARRAYPROC)FUNC_0("glIsVertexArray");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
