
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISOCCLUSIONQUERYNVPROC ;
typedef scalar_t__ PFNGLGETOCCLUSIONQUERYUIVNVPROC ;
typedef scalar_t__ PFNGLGETOCCLUSIONQUERYIVNVPROC ;
typedef scalar_t__ PFNGLGENOCCLUSIONQUERIESNVPROC ;
typedef scalar_t__ PFNGLENDOCCLUSIONQUERYNVPROC ;
typedef scalar_t__ PFNGLDELETEOCCLUSIONQUERIESNVPROC ;
typedef scalar_t__ PFNGLBEGINOCCLUSIONQUERYNVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_7 = 0;
 VAR_0 = (PFNGLBEGINOCCLUSIONQUERYNVPROC)FUNC_0("glBeginOcclusionQueryNV");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLDELETEOCCLUSIONQUERIESNVPROC)FUNC_0("glDeleteOcclusionQueriesNV");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLENDOCCLUSIONQUERYNVPROC)FUNC_0("glEndOcclusionQueryNV");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLGENOCCLUSIONQUERIESNVPROC)FUNC_0("glGenOcclusionQueriesNV");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLGETOCCLUSIONQUERYIVNVPROC)FUNC_0("glGetOcclusionQueryivNV");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLGETOCCLUSIONQUERYUIVNVPROC)FUNC_0("glGetOcclusionQueryuivNV");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLISOCCLUSIONQUERYNVPROC)FUNC_0("glIsOcclusionQueryNV");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
