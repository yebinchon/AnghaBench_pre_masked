
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMULTIMODEDRAWELEMENTSIBMPROC ;
typedef scalar_t__ PFNGLMULTIMODEDRAWARRAYSIBMPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_2 = 0;
 VAR_0 = (PFNGLMULTIMODEDRAWARRAYSIBMPROC)FUNC_0("glMultiModeDrawArraysIBM");
 if(!VAR_0) ++VAR_2;
 VAR_1 = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC)FUNC_0("glMultiModeDrawElementsIBM");
 if(!VAR_1) ++VAR_2;
 return VAR_2;
}
