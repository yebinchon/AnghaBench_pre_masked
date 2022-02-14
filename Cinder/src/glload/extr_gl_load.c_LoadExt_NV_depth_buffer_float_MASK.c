
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLDEPTHRANGEDNVPROC ;
typedef scalar_t__ PFNGLDEPTHBOUNDSDNVPROC ;
typedef scalar_t__ PFNGLCLEARDEPTHDNVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNGLCLEARDEPTHDNVPROC)FUNC_0("glClearDepthdNV");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNGLDEPTHBOUNDSDNVPROC)FUNC_0("glDepthBoundsdNV");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNGLDEPTHRANGEDNVPROC)FUNC_0("glDepthRangedNV");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
