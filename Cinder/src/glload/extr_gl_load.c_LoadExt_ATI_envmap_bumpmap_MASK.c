
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXBUMPPARAMETERIVATIPROC ;
typedef scalar_t__ PFNGLTEXBUMPPARAMETERFVATIPROC ;
typedef scalar_t__ PFNGLGETTEXBUMPPARAMETERIVATIPROC ;
typedef scalar_t__ PFNGLGETTEXBUMPPARAMETERFVATIPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)FUNC_0("glGetTexBumpParameterfvATI");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)FUNC_0("glGetTexBumpParameterivATI");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLTEXBUMPPARAMETERFVATIPROC)FUNC_0("glTexBumpParameterfvATI");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLTEXBUMPPARAMETERIVATIPROC)FUNC_0("glTexBumpParameterivATI");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
