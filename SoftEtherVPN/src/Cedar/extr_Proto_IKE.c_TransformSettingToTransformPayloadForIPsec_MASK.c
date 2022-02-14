
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int HashId; int DhId; scalar_t__ LifeSeconds; scalar_t__ LifeKilobytes; int CryptoKeySize; int CapsuleMode; int CryptoId; TYPE_1__* Crypto; int * Dh; } ;
struct TYPE_4__ {scalar_t__ VariableKeySize; } ;
typedef int LIST ;
typedef TYPE_2__ IPSEC_SA_TRANSFORM_SETTING ;
typedef int IKE_SERVER ;
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
 scalar_t__ VAR_8 ;
 int * FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int *) ;

IKE_PACKET_PAYLOAD *FUNC_4(IKE_SERVER *VAR_9, IPSEC_SA_TRANSFORM_SETTING *VAR_10)
{
 LIST *VAR_11;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_11 = FUNC_3(((void*)0));

 FUNC_0(VAR_11, FUNC_2(VAR_4, VAR_10->HashId));

 if (VAR_10->Dh != ((void*)0))
 {
  FUNC_0(VAR_11, FUNC_2(VAR_3, VAR_10->DhId));
 }

 if (VAR_10->LifeSeconds != VAR_8)
 {
  FUNC_0(VAR_11, FUNC_2(VAR_6, VAR_1));
  FUNC_0(VAR_11, FUNC_2(VAR_7, VAR_10->LifeSeconds));
 }

 if (VAR_10->LifeKilobytes != VAR_8)
 {
  FUNC_0(VAR_11, FUNC_2(VAR_6, VAR_0));
  FUNC_0(VAR_11, FUNC_2(VAR_7, VAR_10->LifeKilobytes));
 }

 if (VAR_10->Crypto->VariableKeySize)
 {
  FUNC_0(VAR_11, FUNC_2(VAR_5, VAR_10->CryptoKeySize * 8));
 }

 FUNC_0(VAR_11, FUNC_2(VAR_2, VAR_10->CapsuleMode));

 return FUNC_1(1, VAR_10->CryptoId, VAR_11);
}
