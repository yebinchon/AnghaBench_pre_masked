
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLXRESETFRAMECOUNTNVPROC ;
typedef scalar_t__ PFNGLXQUERYSWAPGROUPNVPROC ;
typedef scalar_t__ PFNGLXQUERYMAXSWAPGROUPSNVPROC ;
typedef scalar_t__ PFNGLXQUERYFRAMECOUNTNVPROC ;
typedef scalar_t__ PFNGLXJOINSWAPGROUPNVPROC ;
typedef scalar_t__ PFNGLXBINDSWAPBARRIERNVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_6 = 0;
 VAR_0 = (PFNGLXBINDSWAPBARRIERNVPROC)FUNC_0("glXBindSwapBarrierNV");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLXJOINSWAPGROUPNVPROC)FUNC_0("glXJoinSwapGroupNV");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLXQUERYFRAMECOUNTNVPROC)FUNC_0("glXQueryFrameCountNV");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLXQUERYMAXSWAPGROUPSNVPROC)FUNC_0("glXQueryMaxSwapGroupsNV");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLXQUERYSWAPGROUPNVPROC)FUNC_0("glXQuerySwapGroupNV");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLXRESETFRAMECOUNTNVPROC)FUNC_0("glXResetFrameCountNV");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
