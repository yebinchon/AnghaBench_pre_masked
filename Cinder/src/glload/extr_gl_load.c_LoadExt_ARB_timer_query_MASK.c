
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLQUERYCOUNTERPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTUI64VPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTI64VPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNGLGETQUERYOBJECTI64VPROC)FUNC_0("glGetQueryObjecti64v");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNGLGETQUERYOBJECTUI64VPROC)FUNC_0("glGetQueryObjectui64v");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNGLQUERYCOUNTERPROC)FUNC_0("glQueryCounter");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
