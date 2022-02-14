
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSETPBUFFERATTRIBARBPROC ;
typedef scalar_t__ PFNWGLRELEASETEXIMAGEARBPROC ;
typedef scalar_t__ PFNWGLBINDTEXIMAGEARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNWGLBINDTEXIMAGEARBPROC)FUNC_0("wglBindTexImageARB");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNWGLRELEASETEXIMAGEARBPROC)FUNC_0("wglReleaseTexImageARB");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNWGLSETPBUFFERATTRIBARBPROC)FUNC_0("wglSetPbufferAttribARB");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
