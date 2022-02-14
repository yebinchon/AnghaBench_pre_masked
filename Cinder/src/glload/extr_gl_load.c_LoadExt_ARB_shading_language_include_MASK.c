
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLNAMEDSTRINGARBPROC ;
typedef scalar_t__ PFNGLISNAMEDSTRINGARBPROC ;
typedef scalar_t__ PFNGLGETNAMEDSTRINGIVARBPROC ;
typedef scalar_t__ PFNGLGETNAMEDSTRINGARBPROC ;
typedef scalar_t__ PFNGLDELETENAMEDSTRINGARBPROC ;
typedef scalar_t__ PFNGLCOMPILESHADERINCLUDEARBPROC ;


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
 VAR_0 = (PFNGLCOMPILESHADERINCLUDEARBPROC)FUNC_0("glCompileShaderIncludeARB");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLDELETENAMEDSTRINGARBPROC)FUNC_0("glDeleteNamedStringARB");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLGETNAMEDSTRINGARBPROC)FUNC_0("glGetNamedStringARB");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLGETNAMEDSTRINGIVARBPROC)FUNC_0("glGetNamedStringivARB");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLISNAMEDSTRINGARBPROC)FUNC_0("glIsNamedStringARB");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLNAMEDSTRINGARBPROC)FUNC_0("glNamedStringARB");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
