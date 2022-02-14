
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPUSHDEBUGGROUPPROC ;
typedef scalar_t__ PFNGLPOPDEBUGGROUPPROC ;
typedef scalar_t__ PFNGLOBJECTPTRLABELPROC ;
typedef scalar_t__ PFNGLOBJECTLABELPROC ;
typedef scalar_t__ PFNGLGETPOINTERVPROC ;
typedef scalar_t__ PFNGLGETOBJECTPTRLABELPROC ;
typedef scalar_t__ PFNGLGETOBJECTLABELPROC ;
typedef scalar_t__ PFNGLGETDEBUGMESSAGELOGPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEINSERTPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECONTROLPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECALLBACKPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_11 = 0;
 VAR_0 = (PFNGLDEBUGMESSAGECALLBACKPROC)FUNC_0("glDebugMessageCallback");
 if(!VAR_0) ++VAR_11;
 VAR_1 = (PFNGLDEBUGMESSAGECONTROLPROC)FUNC_0("glDebugMessageControl");
 if(!VAR_1) ++VAR_11;
 VAR_2 = (PFNGLDEBUGMESSAGEINSERTPROC)FUNC_0("glDebugMessageInsert");
 if(!VAR_2) ++VAR_11;
 VAR_3 = (PFNGLGETDEBUGMESSAGELOGPROC)FUNC_0("glGetDebugMessageLog");
 if(!VAR_3) ++VAR_11;
 VAR_4 = (PFNGLGETOBJECTLABELPROC)FUNC_0("glGetObjectLabel");
 if(!VAR_4) ++VAR_11;
 VAR_5 = (PFNGLGETOBJECTPTRLABELPROC)FUNC_0("glGetObjectPtrLabel");
 if(!VAR_5) ++VAR_11;
 VAR_6 = (PFNGLGETPOINTERVPROC)FUNC_0("glGetPointerv");
 if(!VAR_6) ++VAR_11;
 VAR_7 = (PFNGLOBJECTLABELPROC)FUNC_0("glObjectLabel");
 if(!VAR_7) ++VAR_11;
 VAR_8 = (PFNGLOBJECTPTRLABELPROC)FUNC_0("glObjectPtrLabel");
 if(!VAR_8) ++VAR_11;
 VAR_9 = (PFNGLPOPDEBUGGROUPPROC)FUNC_0("glPopDebugGroup");
 if(!VAR_9) ++VAR_11;
 VAR_10 = (PFNGLPUSHDEBUGGROUPPROC)FUNC_0("glPushDebugGroup");
 if(!VAR_10) ++VAR_11;
 return VAR_11;
}
