
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int DhsList; int HashesList; int CryptosList; } ;
typedef int IKE_HASH ;
typedef TYPE_1__ IKE_ENGINE ;
typedef int IKE_DH ;
typedef int IKE_CRYPTO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(IKE_ENGINE *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_5(VAR_0->CryptosList);VAR_1++)
 {
  IKE_CRYPTO *VAR_2 = FUNC_4(VAR_0->CryptosList, VAR_1);

  FUNC_1(VAR_2);
 }

 FUNC_6(VAR_0->CryptosList);

 for (VAR_1 = 0;VAR_1 < FUNC_5(VAR_0->HashesList);VAR_1++)
 {
  IKE_HASH *VAR_3 = FUNC_4(VAR_0->HashesList, VAR_1);

  FUNC_3(VAR_3);
 }
 FUNC_6(VAR_0->HashesList);

 for (VAR_1 = 0;VAR_1 < FUNC_5(VAR_0->DhsList);VAR_1++)
 {
  IKE_DH *VAR_4 = FUNC_4(VAR_0->DhsList, VAR_1);

  FUNC_2(VAR_4);
 }
 FUNC_6(VAR_0->DhsList);

 FUNC_0(VAR_0);
}
