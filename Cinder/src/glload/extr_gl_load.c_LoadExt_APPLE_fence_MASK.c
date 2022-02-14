
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTESTOBJECTAPPLEPROC ;
typedef scalar_t__ PFNGLTESTFENCEAPPLEPROC ;
typedef scalar_t__ PFNGLSETFENCEAPPLEPROC ;
typedef scalar_t__ PFNGLISFENCEAPPLEPROC ;
typedef scalar_t__ PFNGLGENFENCESAPPLEPROC ;
typedef scalar_t__ PFNGLFINISHOBJECTAPPLEPROC ;
typedef scalar_t__ PFNGLFINISHFENCEAPPLEPROC ;
typedef scalar_t__ PFNGLDELETEFENCESAPPLEPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_8 = 0;
 VAR_0 = (PFNGLDELETEFENCESAPPLEPROC)FUNC_0("glDeleteFencesAPPLE");
 if(!VAR_0) ++VAR_8;
 VAR_1 = (PFNGLFINISHFENCEAPPLEPROC)FUNC_0("glFinishFenceAPPLE");
 if(!VAR_1) ++VAR_8;
 VAR_2 = (PFNGLFINISHOBJECTAPPLEPROC)FUNC_0("glFinishObjectAPPLE");
 if(!VAR_2) ++VAR_8;
 VAR_3 = (PFNGLGENFENCESAPPLEPROC)FUNC_0("glGenFencesAPPLE");
 if(!VAR_3) ++VAR_8;
 VAR_4 = (PFNGLISFENCEAPPLEPROC)FUNC_0("glIsFenceAPPLE");
 if(!VAR_4) ++VAR_8;
 VAR_5 = (PFNGLSETFENCEAPPLEPROC)FUNC_0("glSetFenceAPPLE");
 if(!VAR_5) ++VAR_8;
 VAR_6 = (PFNGLTESTFENCEAPPLEPROC)FUNC_0("glTestFenceAPPLE");
 if(!VAR_6) ++VAR_8;
 VAR_7 = (PFNGLTESTOBJECTAPPLEPROC)FUNC_0("glTestObjectAPPLE");
 if(!VAR_7) ++VAR_8;
 return VAR_8;
}
