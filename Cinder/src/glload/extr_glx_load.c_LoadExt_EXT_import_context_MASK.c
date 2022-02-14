
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXQUERYCONTEXTINFOEXTPROC ;
typedef scalar_t__ PFNGLXIMPORTCONTEXTEXTPROC ;
typedef scalar_t__ PFNGLXGETCURRENTDISPLAYEXTPROC ;
typedef scalar_t__ PFNGLXGETCONTEXTIDEXTPROC ;
typedef scalar_t__ PFNGLXFREECONTEXTEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLXFREECONTEXTEXTPROC)FUNC_0("glXFreeContextEXT");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLXGETCONTEXTIDEXTPROC)FUNC_0("glXGetContextIDEXT");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLXGETCURRENTDISPLAYEXTPROC)FUNC_0("glXGetCurrentDisplayEXT");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLXIMPORTCONTEXTEXTPROC)FUNC_0("glXImportContextEXT");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLXQUERYCONTEXTINFOEXTPROC)FUNC_0("glXQueryContextInfoEXT");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
