
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVIEWPORTINDEXEDFVPROC ;
typedef scalar_t__ PFNGLVIEWPORTINDEXEDFPROC ;
typedef scalar_t__ PFNGLVIEWPORTARRAYVPROC ;
typedef scalar_t__ PFNGLSCISSORINDEXEDVPROC ;
typedef scalar_t__ PFNGLSCISSORINDEXEDPROC ;
typedef scalar_t__ PFNGLSCISSORARRAYVPROC ;
typedef scalar_t__ PFNGLGETFLOATI_VPROC ;
typedef scalar_t__ PFNGLGETDOUBLEI_VPROC ;
typedef scalar_t__ PFNGLDEPTHRANGEINDEXEDPROC ;
typedef scalar_t__ PFNGLDEPTHRANGEARRAYVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_10 = 0;
 VAR_0 = (PFNGLDEPTHRANGEARRAYVPROC)FUNC_0("glDepthRangeArrayv");
 if(!VAR_0) ++VAR_10;
 VAR_1 = (PFNGLDEPTHRANGEINDEXEDPROC)FUNC_0("glDepthRangeIndexed");
 if(!VAR_1) ++VAR_10;
 VAR_2 = (PFNGLGETDOUBLEI_VPROC)FUNC_0("glGetDoublei_v");
 if(!VAR_2) ++VAR_10;
 VAR_3 = (PFNGLGETFLOATI_VPROC)FUNC_0("glGetFloati_v");
 if(!VAR_3) ++VAR_10;
 VAR_4 = (PFNGLSCISSORARRAYVPROC)FUNC_0("glScissorArrayv");
 if(!VAR_4) ++VAR_10;
 VAR_5 = (PFNGLSCISSORINDEXEDPROC)FUNC_0("glScissorIndexed");
 if(!VAR_5) ++VAR_10;
 VAR_6 = (PFNGLSCISSORINDEXEDVPROC)FUNC_0("glScissorIndexedv");
 if(!VAR_6) ++VAR_10;
 VAR_7 = (PFNGLVIEWPORTARRAYVPROC)FUNC_0("glViewportArrayv");
 if(!VAR_7) ++VAR_10;
 VAR_8 = (PFNGLVIEWPORTINDEXEDFPROC)FUNC_0("glViewportIndexedf");
 if(!VAR_8) ++VAR_10;
 VAR_9 = (PFNGLVIEWPORTINDEXEDFVPROC)FUNC_0("glViewportIndexedfv");
 if(!VAR_9) ++VAR_10;
 return VAR_10;
}
