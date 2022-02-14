
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXIMAGE3DMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLTEXIMAGE2DMULTISAMPLEPROC ;
typedef scalar_t__ PFNGLSAMPLEMASKIPROC ;
typedef scalar_t__ PFNGLGETMULTISAMPLEFVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLGETMULTISAMPLEFVPROC)FUNC_0("glGetMultisamplefv");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLSAMPLEMASKIPROC)FUNC_0("glSampleMaski");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)FUNC_0("glTexImage2DMultisample");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)FUNC_0("glTexImage3DMultisample");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
