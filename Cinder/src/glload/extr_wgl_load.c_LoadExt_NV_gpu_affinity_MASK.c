
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLENUMGPUSNVPROC ;
typedef scalar_t__ PFNWGLENUMGPUSFROMAFFINITYDCNVPROC ;
typedef scalar_t__ PFNWGLENUMGPUDEVICESNVPROC ;
typedef scalar_t__ PFNWGLDELETEDCNVPROC ;
typedef scalar_t__ PFNWGLCREATEAFFINITYDCNVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNWGLCREATEAFFINITYDCNVPROC)FUNC_0("wglCreateAffinityDCNV");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNWGLDELETEDCNVPROC)FUNC_0("wglDeleteDCNV");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNWGLENUMGPUDEVICESNVPROC)FUNC_0("wglEnumGpuDevicesNV");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC)FUNC_0("wglEnumGpusFromAffinityDCNV");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNWGLENUMGPUSNVPROC)FUNC_0("wglEnumGpusNV");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
