
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETDEBUGMESSAGELOGARBPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEINSERTARBPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECONTROLARBPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECALLBACKARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLDEBUGMESSAGECALLBACKARBPROC)FUNC_0("glDebugMessageCallbackARB");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLDEBUGMESSAGECONTROLARBPROC)FUNC_0("glDebugMessageControlARB");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLDEBUGMESSAGEINSERTARBPROC)FUNC_0("glDebugMessageInsertARB");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLGETDEBUGMESSAGELOGARBPROC)FUNC_0("glGetDebugMessageLogARB");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
