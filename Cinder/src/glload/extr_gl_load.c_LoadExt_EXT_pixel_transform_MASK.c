
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLPIXELTRANSFORMPARAMETERIEXTPROC ;
typedef scalar_t__ PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLPIXELTRANSFORMPARAMETERFEXTPROC ;
typedef scalar_t__ PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_6 = 0;
 VAR_0 = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)FUNC_0("glGetPixelTransformParameterfvEXT");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)FUNC_0("glGetPixelTransformParameterivEXT");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)FUNC_0("glPixelTransformParameterfEXT");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)FUNC_0("glPixelTransformParameterfvEXT");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)FUNC_0("glPixelTransformParameteriEXT");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)FUNC_0("glPixelTransformParameterivEXT");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
