
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXATTRIBLPOINTERPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL4DVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL4DPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL3DVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL3DPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL2DVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL2DPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL1DVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBL1DPROC ;
typedef scalar_t__ PFNGLGETVERTEXATTRIBLDVPROC ;


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
 VAR_0 = (PFNGLGETVERTEXATTRIBLDVPROC)FUNC_0("glGetVertexAttribLdv");
 if(!VAR_0) ++VAR_10;
 VAR_1 = (PFNGLVERTEXATTRIBL1DPROC)FUNC_0("glVertexAttribL1d");
 if(!VAR_1) ++VAR_10;
 VAR_2 = (PFNGLVERTEXATTRIBL1DVPROC)FUNC_0("glVertexAttribL1dv");
 if(!VAR_2) ++VAR_10;
 VAR_3 = (PFNGLVERTEXATTRIBL2DPROC)FUNC_0("glVertexAttribL2d");
 if(!VAR_3) ++VAR_10;
 VAR_4 = (PFNGLVERTEXATTRIBL2DVPROC)FUNC_0("glVertexAttribL2dv");
 if(!VAR_4) ++VAR_10;
 VAR_5 = (PFNGLVERTEXATTRIBL3DPROC)FUNC_0("glVertexAttribL3d");
 if(!VAR_5) ++VAR_10;
 VAR_6 = (PFNGLVERTEXATTRIBL3DVPROC)FUNC_0("glVertexAttribL3dv");
 if(!VAR_6) ++VAR_10;
 VAR_7 = (PFNGLVERTEXATTRIBL4DPROC)FUNC_0("glVertexAttribL4d");
 if(!VAR_7) ++VAR_10;
 VAR_8 = (PFNGLVERTEXATTRIBL4DVPROC)FUNC_0("glVertexAttribL4dv");
 if(!VAR_8) ++VAR_10;
 VAR_9 = (PFNGLVERTEXATTRIBLPOINTERPROC)FUNC_0("glVertexAttribLPointer");
 if(!VAR_9) ++VAR_10;
 return VAR_10;
}
