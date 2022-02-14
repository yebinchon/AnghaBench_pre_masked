
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC ;
typedef scalar_t__ PFNGLDEFORMSGIXPROC ;
typedef scalar_t__ PFNGLDEFORMATIONMAP3FSGIXPROC ;
typedef scalar_t__ PFNGLDEFORMATIONMAP3DSGIXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLDEFORMSGIXPROC)FUNC_0("glDeformSGIX");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLDEFORMATIONMAP3DSGIXPROC)FUNC_0("glDeformationMap3dSGIX");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLDEFORMATIONMAP3FSGIXPROC)FUNC_0("glDeformationMap3fSGIX");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)FUNC_0("glLoadIdentityDeformationMapSGIX");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
