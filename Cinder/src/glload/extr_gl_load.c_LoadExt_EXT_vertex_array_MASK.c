
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXPOINTEREXTPROC ;
typedef scalar_t__ PFNGLTEXCOORDPOINTEREXTPROC ;
typedef scalar_t__ PFNGLNORMALPOINTEREXTPROC ;
typedef scalar_t__ PFNGLINDEXPOINTEREXTPROC ;
typedef scalar_t__ PFNGLGETPOINTERVEXTPROC ;
typedef scalar_t__ PFNGLEDGEFLAGPOINTEREXTPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSEXTPROC ;
typedef scalar_t__ PFNGLCOLORPOINTEREXTPROC ;
typedef scalar_t__ PFNGLARRAYELEMENTEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_9 = 0;
 VAR_0 = (PFNGLARRAYELEMENTEXTPROC)FUNC_0("glArrayElementEXT");
 if(!VAR_0) ++VAR_9;
 VAR_1 = (PFNGLCOLORPOINTEREXTPROC)FUNC_0("glColorPointerEXT");
 if(!VAR_1) ++VAR_9;
 VAR_2 = (PFNGLDRAWARRAYSEXTPROC)FUNC_0("glDrawArraysEXT");
 if(!VAR_2) ++VAR_9;
 VAR_3 = (PFNGLEDGEFLAGPOINTEREXTPROC)FUNC_0("glEdgeFlagPointerEXT");
 if(!VAR_3) ++VAR_9;
 VAR_4 = (PFNGLGETPOINTERVEXTPROC)FUNC_0("glGetPointervEXT");
 if(!VAR_4) ++VAR_9;
 VAR_5 = (PFNGLINDEXPOINTEREXTPROC)FUNC_0("glIndexPointerEXT");
 if(!VAR_5) ++VAR_9;
 VAR_6 = (PFNGLNORMALPOINTEREXTPROC)FUNC_0("glNormalPointerEXT");
 if(!VAR_6) ++VAR_9;
 VAR_7 = (PFNGLTEXCOORDPOINTEREXTPROC)FUNC_0("glTexCoordPointerEXT");
 if(!VAR_7) ++VAR_9;
 VAR_8 = (PFNGLVERTEXPOINTEREXTPROC)FUNC_0("glVertexPointerEXT");
 if(!VAR_8) ++VAR_9;
 return VAR_9;
}
