
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXQUERYCHANNELRECTSGIXPROC ;
typedef scalar_t__ PFNGLXQUERYCHANNELDELTASSGIXPROC ;
typedef scalar_t__ PFNGLXCHANNELRECTSYNCSGIXPROC ;
typedef scalar_t__ PFNGLXCHANNELRECTSGIXPROC ;
typedef scalar_t__ PFNGLXBINDCHANNELTOWINDOWSGIXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLXBINDCHANNELTOWINDOWSGIXPROC)FUNC_0("glXBindChannelToWindowSGIX");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLXCHANNELRECTSGIXPROC)FUNC_0("glXChannelRectSGIX");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLXCHANNELRECTSYNCSGIXPROC)FUNC_0("glXChannelRectSyncSGIX");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLXQUERYCHANNELDELTASSGIXPROC)FUNC_0("glXQueryChannelDeltasSGIX");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLXQUERYCHANNELRECTSGIXPROC)FUNC_0("glXQueryChannelRectSGIX");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
