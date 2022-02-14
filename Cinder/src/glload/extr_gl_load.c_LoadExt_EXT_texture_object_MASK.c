
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPRIORITIZETEXTURESEXTPROC ;
typedef scalar_t__ PFNGLISTEXTUREEXTPROC ;
typedef scalar_t__ PFNGLGENTEXTURESEXTPROC ;
typedef scalar_t__ PFNGLDELETETEXTURESEXTPROC ;
typedef scalar_t__ PFNGLBINDTEXTUREEXTPROC ;
typedef scalar_t__ PFNGLARETEXTURESRESIDENTEXTPROC ;


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
 VAR_0 = (PFNGLARETEXTURESRESIDENTEXTPROC)FUNC_0("glAreTexturesResidentEXT");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLBINDTEXTUREEXTPROC)FUNC_0("glBindTextureEXT");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLDELETETEXTURESEXTPROC)FUNC_0("glDeleteTexturesEXT");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLGENTEXTURESEXTPROC)FUNC_0("glGenTexturesEXT");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLISTEXTUREEXTPROC)FUNC_0("glIsTextureEXT");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLPRIORITIZETEXTURESEXTPROC)FUNC_0("glPrioritizeTexturesEXT");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
