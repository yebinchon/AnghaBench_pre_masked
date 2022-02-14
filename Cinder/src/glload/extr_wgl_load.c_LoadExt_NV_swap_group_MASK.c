
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRESETFRAMECOUNTNVPROC ;
typedef scalar_t__ PFNWGLQUERYSWAPGROUPNVPROC ;
typedef scalar_t__ PFNWGLQUERYMAXSWAPGROUPSNVPROC ;
typedef scalar_t__ PFNWGLQUERYFRAMECOUNTNVPROC ;
typedef scalar_t__ PFNWGLJOINSWAPGROUPNVPROC ;
typedef scalar_t__ PFNWGLBINDSWAPBARRIERNVPROC ;


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
 VAR_0 = (PFNWGLBINDSWAPBARRIERNVPROC)FUNC_0("wglBindSwapBarrierNV");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNWGLJOINSWAPGROUPNVPROC)FUNC_0("wglJoinSwapGroupNV");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNWGLQUERYFRAMECOUNTNVPROC)FUNC_0("wglQueryFrameCountNV");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNWGLQUERYMAXSWAPGROUPSNVPROC)FUNC_0("wglQueryMaxSwapGroupsNV");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNWGLQUERYSWAPGROUPNVPROC)FUNC_0("wglQuerySwapGroupNV");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNWGLRESETFRAMECOUNTNVPROC)FUNC_0("wglResetFrameCountNV");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
