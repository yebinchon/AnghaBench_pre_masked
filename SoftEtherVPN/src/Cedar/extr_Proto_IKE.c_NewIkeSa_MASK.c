
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int ResponderCookie; scalar_t__ InitiatorCookie; int TransformSetting; int LastCommTick; int FirstCommTick; scalar_t__ Mode; int * IkeClient; scalar_t__ Id; } ;
struct TYPE_19__ {int CryptoKeySize; int LifeSeconds; int LifeKilobytes; TYPE_3__* Crypto; TYPE_2__* Hash; TYPE_1__* Dh; } ;
struct TYPE_18__ {int Now; scalar_t__ CurrentIkeSaId; } ;
struct TYPE_17__ {int Name; } ;
struct TYPE_16__ {int Name; } ;
struct TYPE_15__ {int Name; } ;
typedef TYPE_4__ IKE_SERVER ;
typedef TYPE_5__ IKE_SA_TRANSFORM_SETTING ;
typedef TYPE_6__ IKE_SA ;
typedef int IKE_CLIENT ;


 int FUNC_0 (int *,TYPE_5__*,int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_4__*,int *,TYPE_6__*,int *,char*,int ,scalar_t__,int ,int ,int ,int ,int,int ,int ) ;
 TYPE_6__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;

IKE_SA *FUNC_6(IKE_SERVER *VAR_1, IKE_CLIENT *VAR_2, UINT64 VAR_3, UINT VAR_4, IKE_SA_TRANSFORM_SETTING *VAR_5)
{
 IKE_SA *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0 || VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_4(sizeof(IKE_SA));

 VAR_6->Id = ++VAR_1->CurrentIkeSaId;

 VAR_6->IkeClient = VAR_2;
 VAR_6->InitiatorCookie = VAR_3;
 VAR_6->ResponderCookie = FUNC_2(VAR_1);
 VAR_6->Mode = VAR_4;
 VAR_6->FirstCommTick = VAR_6->LastCommTick = VAR_1->Now;
 FUNC_0(&VAR_6->TransformSetting, VAR_5, sizeof(IKE_SA_TRANSFORM_SETTING));

 FUNC_1("New IKE SA (Mode = %u): %I64u <--> %I64u (%s %s %s(%u) %u %u)\n",
  VAR_4,
  VAR_6->InitiatorCookie,
  VAR_6->ResponderCookie,
  VAR_5->Dh->Name, VAR_5->Hash->Name, VAR_5->Crypto->Name, VAR_5->CryptoKeySize,
  VAR_5->LifeKilobytes, VAR_5->LifeSeconds);

 FUNC_3(VAR_1, ((void*)0), VAR_6, ((void*)0), "LI_NEW_IKE_SA",
  (VAR_4 == VAR_0 ? FUNC_5("LI_TAG_MAINMODE") : FUNC_5("LI_TAG_AGGRESSIVE")),
  VAR_6->InitiatorCookie, VAR_6->ResponderCookie,
  VAR_5->Dh->Name, VAR_5->Hash->Name, VAR_5->Crypto->Name, VAR_5->CryptoKeySize * 8,
  VAR_5->LifeKilobytes, VAR_5->LifeSeconds);

 return VAR_6;
}
