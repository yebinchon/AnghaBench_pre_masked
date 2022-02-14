
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXBINDINGDIVISORPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBLFORMATPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBIFORMATPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBFORMATPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBBINDINGPROC ;
typedef scalar_t__ PFNGLBINDVERTEXBUFFERPROC ;


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
 VAR_0 = (PFNGLBINDVERTEXBUFFERPROC)FUNC_0("glBindVertexBuffer");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLVERTEXATTRIBBINDINGPROC)FUNC_0("glVertexAttribBinding");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLVERTEXATTRIBFORMATPROC)FUNC_0("glVertexAttribFormat");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLVERTEXATTRIBIFORMATPROC)FUNC_0("glVertexAttribIFormat");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLVERTEXATTRIBLFORMATPROC)FUNC_0("glVertexAttribLFormat");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLVERTEXBINDINGDIVISORPROC)FUNC_0("glVertexBindingDivisor");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
