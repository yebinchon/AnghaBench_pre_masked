
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC ;
typedef scalar_t__ PFNWGLDESTROYIMAGEBUFFERI3DPROC ;
typedef scalar_t__ PFNWGLCREATEIMAGEBUFFERI3DPROC ;
typedef scalar_t__ PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)FUNC_0("wglAssociateImageBufferEventsI3D");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNWGLCREATEIMAGEBUFFERI3DPROC)FUNC_0("wglCreateImageBufferI3D");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNWGLDESTROYIMAGEBUFFERI3DPROC)FUNC_0("wglDestroyImageBufferI3D");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)FUNC_0("wglReleaseImageBufferEventsI3D");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
