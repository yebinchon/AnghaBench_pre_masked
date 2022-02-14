
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLTEXCOORDPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLSECONDARYCOLORPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLNORMALPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLINDEXPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLFOGCOORDPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLEDGEFLAGPOINTERLISTIBMPROC ;
typedef scalar_t__ PFNGLCOLORPOINTERLISTIBMPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_8 = 0;
 VAR_0 = (PFNGLCOLORPOINTERLISTIBMPROC)FUNC_0("glColorPointerListIBM");
 if(!VAR_0) ++VAR_8;
 VAR_1 = (PFNGLEDGEFLAGPOINTERLISTIBMPROC)FUNC_0("glEdgeFlagPointerListIBM");
 if(!VAR_1) ++VAR_8;
 VAR_2 = (PFNGLFOGCOORDPOINTERLISTIBMPROC)FUNC_0("glFogCoordPointerListIBM");
 if(!VAR_2) ++VAR_8;
 VAR_3 = (PFNGLINDEXPOINTERLISTIBMPROC)FUNC_0("glIndexPointerListIBM");
 if(!VAR_3) ++VAR_8;
 VAR_4 = (PFNGLNORMALPOINTERLISTIBMPROC)FUNC_0("glNormalPointerListIBM");
 if(!VAR_4) ++VAR_8;
 VAR_5 = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)FUNC_0("glSecondaryColorPointerListIBM");
 if(!VAR_5) ++VAR_8;
 VAR_6 = (PFNGLTEXCOORDPOINTERLISTIBMPROC)FUNC_0("glTexCoordPointerListIBM");
 if(!VAR_6) ++VAR_8;
 VAR_7 = (PFNGLVERTEXPOINTERLISTIBMPROC)FUNC_0("glVertexPointerListIBM");
 if(!VAR_7) ++VAR_8;
 return VAR_8;
}
