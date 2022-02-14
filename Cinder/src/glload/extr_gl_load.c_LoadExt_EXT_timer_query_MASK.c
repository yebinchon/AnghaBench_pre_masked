
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETQUERYOBJECTUI64VEXTPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTI64VEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_2 = 0;
 VAR_0 = (PFNGLGETQUERYOBJECTI64VEXTPROC)FUNC_0("glGetQueryObjecti64vEXT");
 if(!VAR_0) ++VAR_2;
 VAR_1 = (PFNGLGETQUERYOBJECTUI64VEXTPROC)FUNC_0("glGetQueryObjectui64vEXT");
 if(!VAR_1) ++VAR_2;
 return VAR_2;
}
