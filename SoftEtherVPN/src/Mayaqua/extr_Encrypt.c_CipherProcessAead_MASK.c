
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int IsAeadCipher; int Encrypt; int Ctx; scalar_t__ IsNullCipher; } ;
typedef TYPE_1__ CIPHER ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,scalar_t__,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int*) ;
 int FUNC_4 (int ,int *,int *,int *,void*,int) ;
 int FUNC_5 (int ,void*,int*,void*,scalar_t__) ;
 int FUNC_6 () ;

UINT FUNC_7(CIPHER *VAR_2, void *VAR_3, void *VAR_4, UINT VAR_5, void *VAR_6, void *VAR_7, UINT VAR_8, void *VAR_9, UINT VAR_10)
{
 int VAR_11 = VAR_8;
 int VAR_12 = 0;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 else if (VAR_2->IsNullCipher)
 {
  FUNC_0(VAR_6, VAR_7, VAR_8);
  return VAR_8;
 }
 else if (VAR_2->IsAeadCipher == 0 || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0 || VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == 0)
 {
  return 0;
 }

 if (FUNC_4(VAR_2->Ctx, ((void*)0), ((void*)0), ((void*)0), VAR_3, VAR_2->Encrypt) == 0)
 {
  FUNC_1("CipherProcessAead(): EVP_CipherInit_ex() failed with error: %s\n", FUNC_6());
  return 0;
 }

 if (VAR_2->Encrypt == 0)
 {
  if (FUNC_2(VAR_2->Ctx, VAR_1, VAR_5, VAR_4) == 0)
  {
   FUNC_1("CipherProcessAead(): EVP_CIPHER_CTX_ctrl() failed to set the tag!\n");
   return 0;
  }
 }

 if (VAR_9 != ((void*)0) && VAR_10 != 0)
 {
  if (FUNC_5(VAR_2->Ctx, ((void*)0), &VAR_11, VAR_9, VAR_10) == 0)
  {
   FUNC_1("CipherProcessAead(): EVP_CipherUpdate() failed with error: %s\n", FUNC_6());
   return 0;
  }
 }

 if (FUNC_5(VAR_2->Ctx, VAR_6, &VAR_11, VAR_7, VAR_8) == 0)
 {
  FUNC_1("CipherProcessAead(): EVP_CipherUpdate() failed with error: %s\n", FUNC_6());
  return 0;
 }

 if (FUNC_3(VAR_2->Ctx, ((UCHAR *)VAR_6) + (UINT)VAR_11, &VAR_12) == 0)
 {
  FUNC_1("CipherProcessAead(): EVP_CipherFinal_ex() failed with error: %s\n", FUNC_6());
  return 0;
 }

 if (VAR_2->Encrypt)
 {
  if (FUNC_2(VAR_2->Ctx, VAR_0, VAR_5, VAR_4) == 0)
  {
   FUNC_1("CipherProcessAead(): EVP_CIPHER_CTX_ctrl() failed to get the tag!\n");
   return 0;
  }
 }

 return VAR_11 + VAR_12;
}
