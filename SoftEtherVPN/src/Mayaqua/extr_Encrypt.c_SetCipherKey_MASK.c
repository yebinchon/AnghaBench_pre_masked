
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IsNullCipher; int Encrypt; int Cipher; int * Ctx; } ;
typedef TYPE_1__ CIPHER ;


 int FUNC_0 (int *,int ,void*,int *,int) ;

void FUNC_1(CIPHER *VAR_0, void *VAR_1, bool VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_0->IsNullCipher == 0)
 {
  if (VAR_0->Ctx != ((void*)0))
  {
   FUNC_0(VAR_0->Ctx, VAR_0->Cipher, VAR_1, ((void*)0), VAR_2);
  }
 }

 VAR_0->Encrypt = VAR_2;
}
