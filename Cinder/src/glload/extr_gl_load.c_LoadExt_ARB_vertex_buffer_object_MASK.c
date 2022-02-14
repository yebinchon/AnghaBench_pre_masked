
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNMAPBUFFERARBPROC ;
typedef scalar_t__ PFNGLMAPBUFFERARBPROC ;
typedef scalar_t__ PFNGLISBUFFERARBPROC ;
typedef scalar_t__ PFNGLGETBUFFERSUBDATAARBPROC ;
typedef scalar_t__ PFNGLGETBUFFERPOINTERVARBPROC ;
typedef scalar_t__ PFNGLGETBUFFERPARAMETERIVARBPROC ;
typedef scalar_t__ PFNGLGENBUFFERSARBPROC ;
typedef scalar_t__ PFNGLDELETEBUFFERSARBPROC ;
typedef scalar_t__ PFNGLBUFFERSUBDATAARBPROC ;
typedef scalar_t__ PFNGLBUFFERDATAARBPROC ;
typedef scalar_t__ PFNGLBINDBUFFERARBPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_11 = 0;
 VAR_0 = (PFNGLBINDBUFFERARBPROC)FUNC_0("glBindBufferARB");
 if(!VAR_0) ++VAR_11;
 VAR_1 = (PFNGLBUFFERDATAARBPROC)FUNC_0("glBufferDataARB");
 if(!VAR_1) ++VAR_11;
 VAR_2 = (PFNGLBUFFERSUBDATAARBPROC)FUNC_0("glBufferSubDataARB");
 if(!VAR_2) ++VAR_11;
 VAR_3 = (PFNGLDELETEBUFFERSARBPROC)FUNC_0("glDeleteBuffersARB");
 if(!VAR_3) ++VAR_11;
 VAR_4 = (PFNGLGENBUFFERSARBPROC)FUNC_0("glGenBuffersARB");
 if(!VAR_4) ++VAR_11;
 VAR_5 = (PFNGLGETBUFFERPARAMETERIVARBPROC)FUNC_0("glGetBufferParameterivARB");
 if(!VAR_5) ++VAR_11;
 VAR_6 = (PFNGLGETBUFFERPOINTERVARBPROC)FUNC_0("glGetBufferPointervARB");
 if(!VAR_6) ++VAR_11;
 VAR_7 = (PFNGLGETBUFFERSUBDATAARBPROC)FUNC_0("glGetBufferSubDataARB");
 if(!VAR_7) ++VAR_11;
 VAR_8 = (PFNGLISBUFFERARBPROC)FUNC_0("glIsBufferARB");
 if(!VAR_8) ++VAR_11;
 VAR_9 = (PFNGLMAPBUFFERARBPROC)FUNC_0("glMapBufferARB");
 if(!VAR_9) ++VAR_11;
 VAR_10 = (PFNGLUNMAPBUFFERARBPROC)FUNC_0("glUnmapBufferARB");
 if(!VAR_10) ++VAR_11;
 return VAR_11;
}
