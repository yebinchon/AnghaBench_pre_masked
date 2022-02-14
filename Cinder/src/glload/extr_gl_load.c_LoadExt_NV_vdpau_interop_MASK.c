
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVDPAUUNREGISTERSURFACENVPROC ;
typedef scalar_t__ PFNGLVDPAUUNMAPSURFACESNVPROC ;
typedef scalar_t__ PFNGLVDPAUSURFACEACCESSNVPROC ;
typedef scalar_t__ PFNGLVDPAUREGISTERVIDEOSURFACENVPROC ;
typedef scalar_t__ PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC ;
typedef scalar_t__ PFNGLVDPAUMAPSURFACESNVPROC ;
typedef scalar_t__ PFNGLVDPAUISSURFACENVPROC ;
typedef scalar_t__ PFNGLVDPAUINITNVPROC ;
typedef scalar_t__ PFNGLVDPAUGETSURFACEIVNVPROC ;
typedef scalar_t__ PFNGLVDPAUFININVPROC ;


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
 VAR_0 = (PFNGLVDPAUFININVPROC)FUNC_0("glVDPAUFiniNV");
 if(!VAR_0) ++VAR_10;
 VAR_1 = (PFNGLVDPAUGETSURFACEIVNVPROC)FUNC_0("glVDPAUGetSurfaceivNV");
 if(!VAR_1) ++VAR_10;
 VAR_2 = (PFNGLVDPAUINITNVPROC)FUNC_0("glVDPAUInitNV");
 if(!VAR_2) ++VAR_10;
 VAR_3 = (PFNGLVDPAUISSURFACENVPROC)FUNC_0("glVDPAUIsSurfaceNV");
 if(!VAR_3) ++VAR_10;
 VAR_4 = (PFNGLVDPAUMAPSURFACESNVPROC)FUNC_0("glVDPAUMapSurfacesNV");
 if(!VAR_4) ++VAR_10;
 VAR_5 = (PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)FUNC_0("glVDPAURegisterOutputSurfaceNV");
 if(!VAR_5) ++VAR_10;
 VAR_6 = (PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)FUNC_0("glVDPAURegisterVideoSurfaceNV");
 if(!VAR_6) ++VAR_10;
 VAR_7 = (PFNGLVDPAUSURFACEACCESSNVPROC)FUNC_0("glVDPAUSurfaceAccessNV");
 if(!VAR_7) ++VAR_10;
 VAR_8 = (PFNGLVDPAUUNMAPSURFACESNVPROC)FUNC_0("glVDPAUUnmapSurfacesNV");
 if(!VAR_8) ++VAR_10;
 VAR_9 = (PFNGLVDPAUUNREGISTERSURFACENVPROC)FUNC_0("glVDPAUUnregisterSurfaceNV");
 if(!VAR_9) ++VAR_10;
 return VAR_10;
}
