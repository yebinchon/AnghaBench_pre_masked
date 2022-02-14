
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISENABLEDINDEXEDEXTPROC ;
typedef scalar_t__ PFNGLGETINTEGERINDEXEDVEXTPROC ;
typedef scalar_t__ PFNGLGETBOOLEANINDEXEDVEXTPROC ;
typedef scalar_t__ PFNGLENABLEINDEXEDEXTPROC ;
typedef scalar_t__ PFNGLDISABLEINDEXEDEXTPROC ;
typedef scalar_t__ PFNGLCOLORMASKINDEXEDEXTPROC ;


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
 VAR_0 = (PFNGLCOLORMASKINDEXEDEXTPROC)FUNC_0("glColorMaskIndexedEXT");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLDISABLEINDEXEDEXTPROC)FUNC_0("glDisableIndexedEXT");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLENABLEINDEXEDEXTPROC)FUNC_0("glEnableIndexedEXT");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLGETBOOLEANINDEXEDVEXTPROC)FUNC_0("glGetBooleanIndexedvEXT");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLGETINTEGERINDEXEDVEXTPROC)FUNC_0("glGetIntegerIndexedvEXT");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLISENABLEDINDEXEDEXTPROC)FUNC_0("glIsEnabledIndexedEXT");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
