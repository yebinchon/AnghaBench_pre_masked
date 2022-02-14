
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSAVEBUFFERREGIONARBPROC ;
typedef scalar_t__ PFNWGLRESTOREBUFFERREGIONARBPROC ;
typedef scalar_t__ PFNWGLDELETEBUFFERREGIONARBPROC ;
typedef scalar_t__ PFNWGLCREATEBUFFERREGIONARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNWGLCREATEBUFFERREGIONARBPROC)FUNC_0("wglCreateBufferRegionARB");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNWGLDELETEBUFFERREGIONARBPROC)FUNC_0("wglDeleteBufferRegionARB");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNWGLRESTOREBUFFERREGIONARBPROC)FUNC_0("wglRestoreBufferRegionARB");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNWGLSAVEBUFFERREGIONARBPROC)FUNC_0("wglSaveBufferRegionARB");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
