
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMAPPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLMAPPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLMAPCONTROLPOINTSNVPROC ;
typedef scalar_t__ PFNGLGETMAPPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETMAPPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLGETMAPCONTROLPOINTSNVPROC ;
typedef scalar_t__ PFNGLGETMAPATTRIBPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLGETMAPATTRIBPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLEVALMAPSNVPROC ;


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
 VAR_0 = (PFNGLEVALMAPSNVPROC)FUNC_0("glEvalMapsNV");
 if(!VAR_0) ++VAR_9;
 VAR_1 = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC)FUNC_0("glGetMapAttribParameterfvNV");
 if(!VAR_1) ++VAR_9;
 VAR_2 = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC)FUNC_0("glGetMapAttribParameterivNV");
 if(!VAR_2) ++VAR_9;
 VAR_3 = (PFNGLGETMAPCONTROLPOINTSNVPROC)FUNC_0("glGetMapControlPointsNV");
 if(!VAR_3) ++VAR_9;
 VAR_4 = (PFNGLGETMAPPARAMETERFVNVPROC)FUNC_0("glGetMapParameterfvNV");
 if(!VAR_4) ++VAR_9;
 VAR_5 = (PFNGLGETMAPPARAMETERIVNVPROC)FUNC_0("glGetMapParameterivNV");
 if(!VAR_5) ++VAR_9;
 VAR_6 = (PFNGLMAPCONTROLPOINTSNVPROC)FUNC_0("glMapControlPointsNV");
 if(!VAR_6) ++VAR_9;
 VAR_7 = (PFNGLMAPPARAMETERFVNVPROC)FUNC_0("glMapParameterfvNV");
 if(!VAR_7) ++VAR_9;
 VAR_8 = (PFNGLMAPPARAMETERIVNVPROC)FUNC_0("glMapParameterivNV");
 if(!VAR_8) ++VAR_9;
 return VAR_9;
}
