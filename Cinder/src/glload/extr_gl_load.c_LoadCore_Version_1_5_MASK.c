
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNMAPBUFFERPROC ;
typedef scalar_t__ PFNGLMAPBUFFERPROC ;
typedef scalar_t__ PFNGLISQUERYPROC ;
typedef scalar_t__ PFNGLISBUFFERPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTUIVPROC ;
typedef scalar_t__ PFNGLGETQUERYOBJECTIVPROC ;
typedef scalar_t__ PFNGLGETQUERYIVPROC ;
typedef scalar_t__ PFNGLGETBUFFERSUBDATAPROC ;
typedef scalar_t__ PFNGLGETBUFFERPOINTERVPROC ;
typedef scalar_t__ PFNGLGETBUFFERPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGENQUERIESPROC ;
typedef scalar_t__ PFNGLGENBUFFERSPROC ;
typedef scalar_t__ PFNGLENDQUERYPROC ;
typedef scalar_t__ PFNGLDELETEQUERIESPROC ;
typedef scalar_t__ PFNGLDELETEBUFFERSPROC ;
typedef scalar_t__ PFNGLBUFFERSUBDATAPROC ;
typedef scalar_t__ PFNGLBUFFERDATAPROC ;
typedef scalar_t__ PFNGLBINDBUFFERPROC ;
typedef scalar_t__ PFNGLBEGINQUERYPROC ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_19 = 0;
 VAR_0 = (PFNGLBEGINQUERYPROC)FUNC_0("glBeginQuery");
 if(!VAR_0) ++VAR_19;
 VAR_1 = (PFNGLBINDBUFFERPROC)FUNC_0("glBindBuffer");
 if(!VAR_1) ++VAR_19;
 VAR_2 = (PFNGLBUFFERDATAPROC)FUNC_0("glBufferData");
 if(!VAR_2) ++VAR_19;
 VAR_3 = (PFNGLBUFFERSUBDATAPROC)FUNC_0("glBufferSubData");
 if(!VAR_3) ++VAR_19;
 VAR_4 = (PFNGLDELETEBUFFERSPROC)FUNC_0("glDeleteBuffers");
 if(!VAR_4) ++VAR_19;
 VAR_5 = (PFNGLDELETEQUERIESPROC)FUNC_0("glDeleteQueries");
 if(!VAR_5) ++VAR_19;
 VAR_6 = (PFNGLENDQUERYPROC)FUNC_0("glEndQuery");
 if(!VAR_6) ++VAR_19;
 VAR_7 = (PFNGLGENBUFFERSPROC)FUNC_0("glGenBuffers");
 if(!VAR_7) ++VAR_19;
 VAR_8 = (PFNGLGENQUERIESPROC)FUNC_0("glGenQueries");
 if(!VAR_8) ++VAR_19;
 VAR_9 = (PFNGLGETBUFFERPARAMETERIVPROC)FUNC_0("glGetBufferParameteriv");
 if(!VAR_9) ++VAR_19;
 VAR_10 = (PFNGLGETBUFFERPOINTERVPROC)FUNC_0("glGetBufferPointerv");
 if(!VAR_10) ++VAR_19;
 VAR_11 = (PFNGLGETBUFFERSUBDATAPROC)FUNC_0("glGetBufferSubData");
 if(!VAR_11) ++VAR_19;
 VAR_12 = (PFNGLGETQUERYOBJECTIVPROC)FUNC_0("glGetQueryObjectiv");
 if(!VAR_12) ++VAR_19;
 VAR_13 = (PFNGLGETQUERYOBJECTUIVPROC)FUNC_0("glGetQueryObjectuiv");
 if(!VAR_13) ++VAR_19;
 VAR_14 = (PFNGLGETQUERYIVPROC)FUNC_0("glGetQueryiv");
 if(!VAR_14) ++VAR_19;
 VAR_15 = (PFNGLISBUFFERPROC)FUNC_0("glIsBuffer");
 if(!VAR_15) ++VAR_19;
 VAR_16 = (PFNGLISQUERYPROC)FUNC_0("glIsQuery");
 if(!VAR_16) ++VAR_19;
 VAR_17 = (PFNGLMAPBUFFERPROC)FUNC_0("glMapBuffer");
 if(!VAR_17) ++VAR_19;
 VAR_18 = (PFNGLUNMAPBUFFERPROC)FUNC_0("glUnmapBuffer");
 if(!VAR_18) ++VAR_19;
 return VAR_19;
}
