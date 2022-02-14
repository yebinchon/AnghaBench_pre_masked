
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXSTORAGE3DPROC ;
typedef scalar_t__ PFNGLTEXSTORAGE2DPROC ;
typedef scalar_t__ PFNGLTEXSTORAGE1DPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNGLTEXSTORAGE1DPROC)FUNC_0("glTexStorage1D");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNGLTEXSTORAGE2DPROC)FUNC_0("glTexStorage2D");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNGLTEXSTORAGE3DPROC)FUNC_0("glTexStorage3D");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
