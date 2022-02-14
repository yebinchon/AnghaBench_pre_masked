
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRELEASEPBUFFERDCARBPROC ;
typedef scalar_t__ PFNWGLQUERYPBUFFERARBPROC ;
typedef scalar_t__ PFNWGLGETPBUFFERDCARBPROC ;
typedef scalar_t__ PFNWGLDESTROYPBUFFERARBPROC ;
typedef scalar_t__ PFNWGLCREATEPBUFFERARBPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNWGLCREATEPBUFFERARBPROC)FUNC_0("wglCreatePbufferARB");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNWGLDESTROYPBUFFERARBPROC)FUNC_0("wglDestroyPbufferARB");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNWGLGETPBUFFERDCARBPROC)FUNC_0("wglGetPbufferDCARB");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNWGLQUERYPBUFFERARBPROC)FUNC_0("wglQueryPbufferARB");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNWGLRELEASEPBUFFERDCARBPROC)FUNC_0("wglReleasePbufferDCARB");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
