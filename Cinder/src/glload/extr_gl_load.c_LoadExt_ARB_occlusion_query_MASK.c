
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISQUERYARBPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTUIVARBPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTIVARBPROC ;
typedef scalar_t__ PFNGLGETQUERYIVARBPROC ;
typedef scalar_t__ PFNGLGENQUERIESARBPROC ;
typedef scalar_t__ PFNGLENDQUERYARBPROC ;
typedef scalar_t__ PFNGLDELETEQUERIESARBPROC ;
typedef scalar_t__ PFNGLBEGINQUERYARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_8 = 0;
 VAR_0 = (PFNGLBEGINQUERYARBPROC)FUNC_0("glBeginQueryARB");
 if(!VAR_0) ++VAR_8;
 VAR_1 = (PFNGLDELETEQUERIESARBPROC)FUNC_0("glDeleteQueriesARB");
 if(!VAR_1) ++VAR_8;
 VAR_2 = (PFNGLENDQUERYARBPROC)FUNC_0("glEndQueryARB");
 if(!VAR_2) ++VAR_8;
 VAR_3 = (PFNGLGENQUERIESARBPROC)FUNC_0("glGenQueriesARB");
 if(!VAR_3) ++VAR_8;
 VAR_4 = (PFNGLGETQUERYOBJECTIVARBPROC)FUNC_0("glGetQueryObjectivARB");
 if(!VAR_4) ++VAR_8;
 VAR_5 = (PFNGLGETQUERYOBJECTUIVARBPROC)FUNC_0("glGetQueryObjectuivARB");
 if(!VAR_5) ++VAR_8;
 VAR_6 = (PFNGLGETQUERYIVARBPROC)FUNC_0("glGetQueryivARB");
 if(!VAR_6) ++VAR_8;
 VAR_7 = (PFNGLISQUERYARBPROC)FUNC_0("glIsQueryARB");
 if(!VAR_7) ++VAR_8;
 return VAR_8;
}
