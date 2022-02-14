
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRELEASEPBUFFERDCEXTPROC ;
typedef scalar_t__ PFNWGLQUERYPBUFFEREXTPROC ;
typedef scalar_t__ PFNWGLGETPBUFFERDCEXTPROC ;
typedef scalar_t__ PFNWGLDESTROYPBUFFEREXTPROC ;
typedef scalar_t__ PFNWGLCREATEPBUFFEREXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNWGLCREATEPBUFFEREXTPROC)FUNC_0("wglCreatePbufferEXT");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNWGLDESTROYPBUFFEREXTPROC)FUNC_0("wglDestroyPbufferEXT");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNWGLGETPBUFFERDCEXTPROC)FUNC_0("wglGetPbufferDCEXT");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNWGLQUERYPBUFFEREXTPROC)FUNC_0("wglQueryPbufferEXT");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNWGLRELEASEPBUFFERDCEXTPROC)FUNC_0("wglReleasePbufferDCEXT");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
