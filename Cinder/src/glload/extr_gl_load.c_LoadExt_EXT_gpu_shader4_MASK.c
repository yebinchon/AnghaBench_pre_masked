
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORM4UIVEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM4UIEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM3UIVEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM3UIEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM2UIVEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM2UIEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM1UIVEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM1UIEXTPROC ;
typedef scalar_t__ PFNGLGETUNIFORMUIVEXTPROC ;
typedef scalar_t__ PFNGLGETFRAGDATALOCATIONEXTPROC ;
typedef scalar_t__ PFNGLBINDFRAGDATALOCATIONEXTPROC ;


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
 VAR_0 = (PFNGLBINDFRAGDATALOCATIONEXTPROC)FUNC_0("glBindFragDataLocationEXT");
 if(!VAR_0) ++VAR_11;
 VAR_1 = (PFNGLGETFRAGDATALOCATIONEXTPROC)FUNC_0("glGetFragDataLocationEXT");
 if(!VAR_1) ++VAR_11;
 VAR_2 = (PFNGLGETUNIFORMUIVEXTPROC)FUNC_0("glGetUniformuivEXT");
 if(!VAR_2) ++VAR_11;
 VAR_3 = (PFNGLUNIFORM1UIEXTPROC)FUNC_0("glUniform1uiEXT");
 if(!VAR_3) ++VAR_11;
 VAR_4 = (PFNGLUNIFORM1UIVEXTPROC)FUNC_0("glUniform1uivEXT");
 if(!VAR_4) ++VAR_11;
 VAR_5 = (PFNGLUNIFORM2UIEXTPROC)FUNC_0("glUniform2uiEXT");
 if(!VAR_5) ++VAR_11;
 VAR_6 = (PFNGLUNIFORM2UIVEXTPROC)FUNC_0("glUniform2uivEXT");
 if(!VAR_6) ++VAR_11;
 VAR_7 = (PFNGLUNIFORM3UIEXTPROC)FUNC_0("glUniform3uiEXT");
 if(!VAR_7) ++VAR_11;
 VAR_8 = (PFNGLUNIFORM3UIVEXTPROC)FUNC_0("glUniform3uivEXT");
 if(!VAR_8) ++VAR_11;
 VAR_9 = (PFNGLUNIFORM4UIEXTPROC)FUNC_0("glUniform4uiEXT");
 if(!VAR_9) ++VAR_11;
 VAR_10 = (PFNGLUNIFORM4UIVEXTPROC)FUNC_0("glUniform4uivEXT");
 if(!VAR_10) ++VAR_11;
 return VAR_11;
}
