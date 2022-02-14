
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLLISTPARAMETERIVSGIXPROC ;
typedef scalar_t__ PFNGLLISTPARAMETERISGIXPROC ;
typedef scalar_t__ PFNGLLISTPARAMETERFVSGIXPROC ;
typedef scalar_t__ PFNGLLISTPARAMETERFSGIXPROC ;
typedef scalar_t__ PFNGLGETLISTPARAMETERIVSGIXPROC ;
typedef scalar_t__ PFNGLGETLISTPARAMETERFVSGIXPROC ;


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
 VAR_0 = (PFNGLGETLISTPARAMETERFVSGIXPROC)FUNC_0("glGetListParameterfvSGIX");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLGETLISTPARAMETERIVSGIXPROC)FUNC_0("glGetListParameterivSGIX");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLLISTPARAMETERFSGIXPROC)FUNC_0("glListParameterfSGIX");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLLISTPARAMETERFVSGIXPROC)FUNC_0("glListParameterfvSGIX");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLLISTPARAMETERISGIXPROC)FUNC_0("glListParameteriSGIX");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLLISTPARAMETERIVSGIXPROC)FUNC_0("glListParameterivSGIX");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
