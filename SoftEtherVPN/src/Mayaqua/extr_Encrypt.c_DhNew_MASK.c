
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {int const* priv_key; int const* pub_key; int * g; void* p; } ;
struct TYPE_12__ {int Size; int Buf; } ;
struct TYPE_11__ {int Size; TYPE_7__* dh; void* MyPrivateKey; void* MyPublicKey; } ;
typedef TYPE_1__ DH_CTX ;
typedef TYPE_2__ BUF ;
typedef int BIGNUM ;


 void* FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int const*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,int const**,int const**) ;
 TYPE_7__* FUNC_6 () ;
 int FUNC_7 (TYPE_7__*,int *,int *,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (char*) ;
 TYPE_1__* FUNC_10 (int) ;

DH_CTX *FUNC_11(char *VAR_0, UINT VAR_1)
{
 DH_CTX *VAR_2;
 BUF *VAR_3;





 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_9(VAR_0);

 VAR_2 = FUNC_10(sizeof(DH_CTX));

 VAR_2->dh = FUNC_6();






 VAR_2->dh->p = FUNC_3(VAR_3->Buf, VAR_3->Size);
 VAR_2->dh->g = FUNC_0();
 FUNC_1(VAR_2->dh->g, VAR_1);


 FUNC_4(VAR_2->dh);






 VAR_2->MyPublicKey = FUNC_2(VAR_2->dh->pub_key);
 VAR_2->MyPrivateKey = FUNC_2(VAR_2->dh->priv_key);


 VAR_2->Size = VAR_3->Size;

 FUNC_8(VAR_3);

 return VAR_2;
}
