
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hmac_ctx_st {int dummy; } ;
struct evp_md_st {int dummy; } ;
struct TYPE_4__ {int IsNullMd; int IsHMac; struct evp_md_st const* Md; void* Ctx; int Size; int Name; } ;
typedef TYPE_1__ MD ;
typedef int EVP_MD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (void*,struct evp_md_st const*,int *) ;
 void* FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 () ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,int,char*) ;
 void* FUNC_13 (int) ;

MD *FUNC_14(char *VAR_0, bool VAR_1)
{
 MD *VAR_2;


 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_13(sizeof(MD));

 FUNC_12(VAR_2->Name, sizeof(VAR_2->Name), VAR_0);

 if (FUNC_11(VAR_0, "[null-digest]") == 0 ||
  FUNC_11(VAR_0, "NULL") == 0 ||
  FUNC_9(VAR_0))
 {
  VAR_2->IsNullMd = 1;
  return VAR_2;
 }

 VAR_2->Md = (const struct evp_md_st *)FUNC_5(VAR_0);
 if (VAR_2->Md == ((void*)0))
 {
  FUNC_0("NewMdEx(): Algorithm %s not found by EVP_get_digestbyname().\n", VAR_2->Name);
  FUNC_6(VAR_2);
  return ((void*)0);
 }

 VAR_2->Size = FUNC_4((const EVP_MD *)VAR_2->Md);
 VAR_2->IsHMac = VAR_1;

 if (VAR_1)
 {



  VAR_2->Ctx = FUNC_13(sizeof(struct hmac_ctx_st));
  FUNC_7(VAR_2->Ctx);

 }
 else
 {



  VAR_2->Ctx = FUNC_2();

  if (FUNC_1(VAR_2->Ctx, VAR_2->Md, ((void*)0)) == 0)
  {
   FUNC_0("NewMdEx(): EVP_DigestInit_ex() failed with error: %s\n", FUNC_10());
   FUNC_6(VAR_2);
  }
 }

 return VAR_2;
}
