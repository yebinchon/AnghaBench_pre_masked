
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEEXTPROC ;
typedef scalar_t__ PFNGLCOLORTABLEEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLCOLORTABLEEXTPROC)FUNC_0("glColorTableEXT");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLGETCOLORTABLEEXTPROC)FUNC_0("glGetColorTableEXT");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)FUNC_0("glGetColorTableParameterfvEXT");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)FUNC_0("glGetColorTableParameterivEXT");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
