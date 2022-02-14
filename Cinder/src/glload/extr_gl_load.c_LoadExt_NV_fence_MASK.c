
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTESTFENCENVPROC ;
typedef scalar_t__ PFNGLSETFENCENVPROC ;
typedef scalar_t__ PFNGLISFENCENVPROC ;
typedef scalar_t__ PFNGLGETFENCEIVNVPROC ;
typedef scalar_t__ PFNGLGENFENCESNVPROC ;
typedef scalar_t__ PFNGLFINISHFENCENVPROC ;
typedef scalar_t__ PFNGLDELETEFENCESNVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_7 = 0;
 VAR_0 = (PFNGLDELETEFENCESNVPROC)FUNC_0("glDeleteFencesNV");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLFINISHFENCENVPROC)FUNC_0("glFinishFenceNV");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLGENFENCESNVPROC)FUNC_0("glGenFencesNV");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLGETFENCEIVNVPROC)FUNC_0("glGetFenceivNV");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLISFENCENVPROC)FUNC_0("glIsFenceNV");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLSETFENCENVPROC)FUNC_0("glSetFenceNV");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLTESTFENCENVPROC)FUNC_0("glTestFenceNV");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
