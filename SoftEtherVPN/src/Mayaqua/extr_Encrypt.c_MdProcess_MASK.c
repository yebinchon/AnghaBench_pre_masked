
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Ctx; scalar_t__ IsHMac; scalar_t__ IsNullMd; } ;
typedef TYPE_1__ MD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,void*,scalar_t__*) ;
 int FUNC_2 (int ,void*,scalar_t__) ;
 int FUNC_3 (int ,void*,scalar_t__*) ;
 int FUNC_4 (int ,int *,int ,int *,int *) ;
 int FUNC_5 (int ,void*,scalar_t__) ;
 int FUNC_6 () ;

UINT FUNC_7(MD *VAR_0, void *VAR_1, void *VAR_2, UINT VAR_3)
{
 UINT VAR_4 = 0;


 if (VAR_0 == ((void*)0) || VAR_0->IsNullMd || VAR_1 == ((void*)0) || (VAR_2 == ((void*)0) && VAR_3 != 0))
 {
  return 0;
 }

 if (VAR_0->IsHMac)
 {

  if (FUNC_4(VAR_0->Ctx, ((void*)0), 0, ((void*)0), ((void*)0)) == 0)
  {
   FUNC_0("MdProcess(): HMAC_Init_ex() failed with error: %s\n", FUNC_6());
   return 0;
  }

  if (FUNC_5(VAR_0->Ctx, VAR_2, VAR_3) == 0)
  {
   FUNC_0("MdProcess(): HMAC_Update() failed with error: %s\n", FUNC_6());
   return 0;
  }

  if (FUNC_3(VAR_0->Ctx, VAR_1, &VAR_4) == 0)
  {
   FUNC_0("MdProcess(): HMAC_Final() failed with error: %s\n", FUNC_6());
  }
 }
 else
 {
  if (FUNC_2(VAR_0->Ctx, VAR_2, VAR_3) == 0)
  {
   FUNC_0("MdProcess(): EVP_DigestUpdate() failed with error: %s\n", FUNC_6());
   return 0;
  }

  if (FUNC_1(VAR_0->Ctx, VAR_1, &VAR_4) == 0)
  {
   FUNC_0("MdProcess(): EVP_DigestFinal_ex() failed with error: %s\n", FUNC_6());
  }
 }

 return VAR_4;
}
