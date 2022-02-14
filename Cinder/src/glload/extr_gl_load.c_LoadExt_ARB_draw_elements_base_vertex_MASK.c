
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSBASEVERTEXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLDRAWELEMENTSBASEVERTEXPROC)FUNC_0("glDrawElementsBaseVertex");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)FUNC_0("glDrawElementsInstancedBaseVertex");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)FUNC_0("glDrawRangeElementsBaseVertex");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)FUNC_0("glMultiDrawElementsBaseVertex");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
