
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int IsHMac; scalar_t__ Md; int Ctx; } ;
typedef TYPE_1__ MD ;
typedef int EVP_MD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,void*,scalar_t__,int const*,int *) ;
 int FUNC_2 () ;

bool FUNC_3(MD *VAR_0, void *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_0->IsHMac == 0 || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }

 if (FUNC_1(VAR_0->Ctx, VAR_1, VAR_2, (const EVP_MD *)VAR_0->Md, ((void*)0)) == 0)
 {
  FUNC_0("SetMdKey(): HMAC_Init_ex() failed with error: %s\n", FUNC_2());
  return 0;
 }

 return 1;
}
