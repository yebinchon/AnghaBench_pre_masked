
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLGETPIXELFORMATATTRIBIVEXTPROC ;
typedef scalar_t__ PFNWGLGETPIXELFORMATATTRIBFVEXTPROC ;
typedef scalar_t__ PFNWGLCHOOSEPIXELFORMATEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNWGLCHOOSEPIXELFORMATEXTPROC)FUNC_0("wglChoosePixelFormatEXT");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)FUNC_0("wglGetPixelFormatAttribfvEXT");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)FUNC_0("wglGetPixelFormatAttribivEXT");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
