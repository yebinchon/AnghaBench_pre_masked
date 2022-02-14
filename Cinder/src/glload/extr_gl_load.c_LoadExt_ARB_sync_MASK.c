
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLWAITSYNCPROC ;
typedef scalar_t__ PFNGLISSYNCPROC ;
typedef scalar_t__ PFNGLGETSYNCIVPROC ;
typedef scalar_t__ PFNGLGETINTEGER64VPROC ;
typedef scalar_t__ PFNGLFENCESYNCPROC ;
typedef scalar_t__ PFNGLDELETESYNCPROC ;
typedef scalar_t__ PFNGLCLIENTWAITSYNCPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_7 = 0;
 VAR_0 = (PFNGLCLIENTWAITSYNCPROC)FUNC_0("glClientWaitSync");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLDELETESYNCPROC)FUNC_0("glDeleteSync");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLFENCESYNCPROC)FUNC_0("glFenceSync");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLGETINTEGER64VPROC)FUNC_0("glGetInteger64v");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLGETSYNCIVPROC)FUNC_0("glGetSynciv");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLISSYNCPROC)FUNC_0("glIsSync");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLWAITSYNCPROC)FUNC_0("glWaitSync");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
