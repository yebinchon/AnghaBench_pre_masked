
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXSUBIMAGE3DEXTPROC ;
typedef scalar_t__ PFNGLTEXIMAGE3DEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_2 = 0;
 VAR_0 = (PFNGLTEXIMAGE3DEXTPROC)FUNC_0("glTexImage3DEXT");
 if(!VAR_0) ++VAR_2;
 VAR_1 = (PFNGLTEXSUBIMAGE3DEXTPROC)FUNC_0("glTexSubImage3DEXT");
 if(!VAR_1) ++VAR_2;
 return VAR_2;
}
