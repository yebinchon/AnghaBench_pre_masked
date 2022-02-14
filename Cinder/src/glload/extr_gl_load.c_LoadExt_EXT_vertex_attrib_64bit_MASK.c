
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXATTRIBLPOINTEREXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL4DVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL4DEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL3DVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL3DEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL2DVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL2DEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL1DVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL1DEXTPROC ;
typedef scalar_t__ PFNGLGETVERTEXATTRIBLDVEXTPROC ;


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
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_10 = 0;
 VAR_0 = (PFNGLGETVERTEXATTRIBLDVEXTPROC)FUNC_0("glGetVertexAttribLdvEXT");
 if(!VAR_0) ++VAR_10;
 VAR_1 = (PFNGLVERTEXATTRIBL1DEXTPROC)FUNC_0("glVertexAttribL1dEXT");
 if(!VAR_1) ++VAR_10;
 VAR_2 = (PFNGLVERTEXATTRIBL1DVEXTPROC)FUNC_0("glVertexAttribL1dvEXT");
 if(!VAR_2) ++VAR_10;
 VAR_3 = (PFNGLVERTEXATTRIBL2DEXTPROC)FUNC_0("glVertexAttribL2dEXT");
 if(!VAR_3) ++VAR_10;
 VAR_4 = (PFNGLVERTEXATTRIBL2DVEXTPROC)FUNC_0("glVertexAttribL2dvEXT");
 if(!VAR_4) ++VAR_10;
 VAR_5 = (PFNGLVERTEXATTRIBL3DEXTPROC)FUNC_0("glVertexAttribL3dEXT");
 if(!VAR_5) ++VAR_10;
 VAR_6 = (PFNGLVERTEXATTRIBL3DVEXTPROC)FUNC_0("glVertexAttribL3dvEXT");
 if(!VAR_6) ++VAR_10;
 VAR_7 = (PFNGLVERTEXATTRIBL4DEXTPROC)FUNC_0("glVertexAttribL4dEXT");
 if(!VAR_7) ++VAR_10;
 VAR_8 = (PFNGLVERTEXATTRIBL4DVEXTPROC)FUNC_0("glVertexAttribL4dvEXT");
 if(!VAR_8) ++VAR_10;
 VAR_9 = (PFNGLVERTEXATTRIBLPOINTEREXTPROC)FUNC_0("glVertexAttribLPointerEXT");
 if(!VAR_9) ++VAR_10;
 return VAR_10;
}
