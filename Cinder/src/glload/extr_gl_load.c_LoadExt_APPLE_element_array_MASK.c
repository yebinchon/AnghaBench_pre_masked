
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC ;
typedef scalar_t__ PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC ;
typedef scalar_t__ PFNGLELEMENTPOINTERAPPLEPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTARRAYAPPLEPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLDRAWELEMENTARRAYAPPLEPROC)FUNC_0("glDrawElementArrayAPPLE");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)FUNC_0("glDrawRangeElementArrayAPPLE");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLELEMENTPOINTERAPPLEPROC)FUNC_0("glElementPointerAPPLE");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)FUNC_0("glMultiDrawElementArrayAPPLE");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)FUNC_0("glMultiDrawRangeElementArrayAPPLE");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
