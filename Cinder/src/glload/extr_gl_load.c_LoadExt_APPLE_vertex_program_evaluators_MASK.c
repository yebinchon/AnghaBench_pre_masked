
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMAPVERTEXATTRIB2FAPPLEPROC ;
typedef scalar_t__ PFNGLMAPVERTEXATTRIB2DAPPLEPROC ;
typedef scalar_t__ PFNGLMAPVERTEXATTRIB1FAPPLEPROC ;
typedef scalar_t__ PFNGLMAPVERTEXATTRIB1DAPPLEPROC ;
typedef scalar_t__ PFNGLISVERTEXATTRIBENABLEDAPPLEPROC ;
typedef scalar_t__ PFNGLENABLEVERTEXATTRIBAPPLEPROC ;
typedef scalar_t__ PFNGLDISABLEVERTEXATTRIBAPPLEPROC ;


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
 VAR_0 = (PFNGLDISABLEVERTEXATTRIBAPPLEPROC)FUNC_0("glDisableVertexAttribAPPLE");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLENABLEVERTEXATTRIBAPPLEPROC)FUNC_0("glEnableVertexAttribAPPLE");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLISVERTEXATTRIBENABLEDAPPLEPROC)FUNC_0("glIsVertexAttribEnabledAPPLE");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLMAPVERTEXATTRIB1DAPPLEPROC)FUNC_0("glMapVertexAttrib1dAPPLE");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLMAPVERTEXATTRIB1FAPPLEPROC)FUNC_0("glMapVertexAttrib1fAPPLE");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLMAPVERTEXATTRIB2DAPPLEPROC)FUNC_0("glMapVertexAttrib2dAPPLE");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLMAPVERTEXATTRIB2FAPPLEPROC)FUNC_0("glMapVertexAttrib2fAPPLE");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
