
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC ;
typedef scalar_t__ PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_2 = 0;
 VAR_0 = (PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC)FUNC_0("glMultiDrawArraysIndirectAMD");
 if(!VAR_0) ++VAR_2;
 VAR_1 = (PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC)FUNC_0("glMultiDrawElementsIndirectAMD");
 if(!VAR_1) ++VAR_2;
 return VAR_2;
}
