
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_11__ {int NextIv; int * Key; int Iv; } ;
struct TYPE_10__ {scalar_t__ FlagEncrypted; } ;
struct TYPE_9__ {int IsIvExisting; int BlockSize; int * CryptoKey; int Iv; } ;
typedef int IKE_SERVER ;
typedef TYPE_1__ IKE_SA ;
typedef TYPE_2__ IKE_PACKET ;
typedef TYPE_3__ IKE_CRYPTO_PARAM ;


 int FUNC_0 (int *,int ,int ) ;
 TYPE_2__* FUNC_1 (void*,scalar_t__,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

IKE_PACKET *FUNC_3(IKE_SERVER *VAR_0, IKE_SA *VAR_1, void *VAR_2, UINT VAR_3)
{
 IKE_PACKET *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || (VAR_3 != 0 && VAR_2 == ((void*)0)))
 {
  return ((void*)0);
 }

 if (VAR_1->IsIvExisting == 0 || VAR_1->CryptoKey == ((void*)0))
 {
  VAR_4 = FUNC_1(VAR_2, VAR_3, ((void*)0));
 }
 else
 {
  IKE_CRYPTO_PARAM VAR_5;

  FUNC_0(&VAR_5.Iv, VAR_1->Iv, VAR_1->BlockSize);
  VAR_5.Key = VAR_1->CryptoKey;

  VAR_4 = FUNC_1(VAR_2, VAR_3, &VAR_5);

  if (VAR_4->FlagEncrypted)
  {
   FUNC_2(VAR_1, VAR_5.NextIv, VAR_1->BlockSize);
  }
 }

 return VAR_4;
}
