
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETDEBUGMESSAGELOGAMDPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEINSERTAMDPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGEENABLEAMDPROC ;
typedef scalar_t__ PFNGLDEBUGMESSAGECALLBACKAMDPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLDEBUGMESSAGECALLBACKAMDPROC)FUNC_0("glDebugMessageCallbackAMD");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLDEBUGMESSAGEENABLEAMDPROC)FUNC_0("glDebugMessageEnableAMD");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLDEBUGMESSAGEINSERTAMDPROC)FUNC_0("glDebugMessageInsertAMD");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLGETDEBUGMESSAGELOGAMDPROC)FUNC_0("glGetDebugMessageLogAMD");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
