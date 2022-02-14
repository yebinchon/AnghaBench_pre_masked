
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int IsHMac; int const* Md; void* Ctx; } ;
typedef TYPE_1__ MD ;
typedef int HMAC_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*,void*,void*,scalar_t__ const) ;
 int FUNC_5 (TYPE_1__*,void*,scalar_t__) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static UINT FUNC_7(const EVP_MD *VAR_0, void *VAR_1, void *VAR_2, UINT VAR_3, const void *VAR_4, const UINT VAR_5)
{
 MD *VAR_6;
 UINT VAR_7 = 0;


 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0 || (VAR_4 == ((void*)0) && VAR_5 != 0))
 {
  return 0;
 }

 VAR_6 = FUNC_6(sizeof(MD));



 VAR_6->Ctx = FUNC_6(sizeof(HMAC_CTX));
 FUNC_2(VAR_6->Ctx);

 VAR_6->Md = VAR_0;
 VAR_6->IsHMac = 1;

 if (FUNC_5(VAR_6, VAR_2, VAR_3) == 0)
 {
  FUNC_0("Internal_HMac(): SetMdKey() failed!\n");
  goto final;
 }

 VAR_7 = FUNC_4(VAR_6, VAR_1, (void *)VAR_4, VAR_5);
 if (VAR_7 == 0)
 {
  FUNC_0("Internal_HMac(): MdProcess() returned 0!\n");
 }

final:
 FUNC_1(VAR_6);
 return VAR_7;
}
