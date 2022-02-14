
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXPARAMETERIUIVEXTPROC ;
typedef scalar_t__ PFNGLTEXPARAMETERIIVEXTPROC ;
typedef scalar_t__ PFNGLGETTEXPARAMETERIUIVEXTPROC ;
typedef scalar_t__ PFNGLGETTEXPARAMETERIIVEXTPROC ;
typedef scalar_t__ PFNGLCLEARCOLORIUIEXTPROC ;
typedef scalar_t__ PFNGLCLEARCOLORIIEXTPROC ;


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
 VAR_0 = (PFNGLCLEARCOLORIIEXTPROC)FUNC_0("glClearColorIiEXT");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLCLEARCOLORIUIEXTPROC)FUNC_0("glClearColorIuiEXT");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLGETTEXPARAMETERIIVEXTPROC)FUNC_0("glGetTexParameterIivEXT");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLGETTEXPARAMETERIUIVEXTPROC)FUNC_0("glGetTexParameterIuivEXT");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLTEXPARAMETERIIVEXTPROC)FUNC_0("glTexParameterIivEXT");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLTEXPARAMETERIUIVEXTPROC)FUNC_0("glTexParameterIuivEXT");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
