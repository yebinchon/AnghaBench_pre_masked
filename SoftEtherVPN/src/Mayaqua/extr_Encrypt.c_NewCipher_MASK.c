
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct evp_cipher_ctx_st {int dummy; } ;
struct TYPE_4__ {int IsNullCipher; int IsAeadCipher; int * Cipher; int IvSize; int KeySize; int BlockSize; void* Ctx; int Name; } ;
typedef TYPE_1__ CIPHER ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,int,char*) ;
 void* FUNC_12 (int) ;

CIPHER *FUNC_13(char *VAR_1)
{
 CIPHER *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_12(sizeof(CIPHER));

 FUNC_11(VAR_2->Name, sizeof(VAR_2->Name), VAR_1);

 if (FUNC_10(VAR_1, "[null-cipher]") == 0 ||
  FUNC_10(VAR_1, "NULL") == 0 ||
  FUNC_9(VAR_1))
 {
  VAR_2->IsNullCipher = 1;
  return VAR_2;
 }

 VAR_2->Cipher = FUNC_7(VAR_2->Name);
 if (VAR_2->Cipher == ((void*)0))
 {
  FUNC_0("NewCipher(): Cipher %s not found by EVP_get_cipherbyname().\n", VAR_2->Name);
  FUNC_8(VAR_2);
  return ((void*)0);
 }




 VAR_2->Ctx = FUNC_12(sizeof(struct evp_cipher_ctx_st));
 FUNC_1(VAR_2->Ctx);


 VAR_2->IsAeadCipher = FUNC_4(VAR_2->Cipher) & VAR_0;
 VAR_2->BlockSize = FUNC_3(VAR_2->Cipher);
 VAR_2->KeySize = FUNC_6(VAR_2->Cipher);
 VAR_2->IvSize = FUNC_5(VAR_2->Cipher);

 return VAR_2;
}
