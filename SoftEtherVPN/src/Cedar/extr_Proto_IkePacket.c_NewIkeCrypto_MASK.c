
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {size_t CryptoId; char* Name; size_t* KeySizes; int VariableKeySize; size_t BlockSize; } ;
struct TYPE_7__ {int CryptosList; } ;
typedef TYPE_1__ IKE_ENGINE ;
typedef TYPE_2__ IKE_CRYPTO ;


 int FUNC_0 (int ,TYPE_2__*) ;
 size_t FUNC_1 (size_t,int) ;
 TYPE_2__* FUNC_2 (int) ;

IKE_CRYPTO *FUNC_3(IKE_ENGINE *VAR_0, UINT VAR_1, char *VAR_2, UINT *VAR_3, UINT VAR_4, UINT VAR_5)
{
 IKE_CRYPTO *VAR_6;
 UINT VAR_7;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_2(sizeof(IKE_CRYPTO));

 VAR_6->CryptoId = VAR_1;
 VAR_6->Name = VAR_2;

 for (VAR_7 = 0;VAR_7 < FUNC_1(VAR_4, 16);VAR_7++)
 {
  VAR_6->KeySizes[VAR_7] = VAR_3[VAR_7];
 }

 if (VAR_4 >= 2)
 {
  VAR_6->VariableKeySize = 1;
 }

 VAR_6->BlockSize = VAR_5;

 FUNC_0(VAR_0->CryptosList, VAR_6);

 return VAR_6;
}
