
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int CryptoId; int HashId; int DhId; scalar_t__ LifeSeconds; scalar_t__ LifeKilobytes; int CryptoKeySize; TYPE_1__* Crypto; } ;
struct TYPE_4__ {scalar_t__ VariableKeySize; } ;
typedef int LIST ;
typedef int IKE_SERVER ;
typedef TYPE_2__ IKE_SA_TRANSFORM_SETTING ;
typedef int IKE_PACKET_PAYLOAD ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int * FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int *) ;

IKE_PACKET_PAYLOAD *FUNC_4(IKE_SERVER *VAR_12, IKE_SA_TRANSFORM_SETTING *VAR_13)
{
 LIST *VAR_14;

 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_14 = FUNC_3(((void*)0));

 FUNC_0(VAR_14, FUNC_2(VAR_5, VAR_13->CryptoId));
 FUNC_0(VAR_14, FUNC_2(VAR_7, VAR_13->HashId));
 FUNC_0(VAR_14, FUNC_2(VAR_4, VAR_0));
 FUNC_0(VAR_14, FUNC_2(VAR_6, VAR_13->DhId));

 if (VAR_13->LifeSeconds != VAR_11)
 {
  FUNC_0(VAR_14, FUNC_2(VAR_9, VAR_2));
  FUNC_0(VAR_14, FUNC_2(VAR_10, VAR_13->LifeSeconds));
 }

 if (VAR_13->LifeKilobytes != VAR_11)
 {
  FUNC_0(VAR_14, FUNC_2(VAR_9, VAR_1));
  FUNC_0(VAR_14, FUNC_2(VAR_10, VAR_13->LifeKilobytes));
 }

 if (VAR_13->Crypto->VariableKeySize)
 {
  FUNC_0(VAR_14, FUNC_2(VAR_8, VAR_13->CryptoKeySize * 8));
 }

 return FUNC_1(1, VAR_3, VAR_14);
}
