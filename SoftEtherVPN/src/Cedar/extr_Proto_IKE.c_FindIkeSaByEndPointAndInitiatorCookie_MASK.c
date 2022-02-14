
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ ClientPort; scalar_t__ ServerPort; int ServerIP; int ClientIP; } ;
struct TYPE_8__ {scalar_t__ InitiatorCookie; scalar_t__ Mode; TYPE_3__* IkeClient; } ;
struct TYPE_7__ {int IkeSaList; } ;
typedef int IP ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_SA ;
typedef TYPE_3__ IKE_CLIENT ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

IKE_SA *FUNC_3(IKE_SERVER *VAR_0, IP *VAR_1, UINT VAR_2, IP *VAR_3, UINT VAR_4, UINT64 VAR_5, UINT VAR_6)
{
 UINT VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2 == 0 || VAR_4 == 0 || VAR_5 == 0)
 {
  return ((void*)0);
 }

 for (VAR_7 = 0;VAR_7 < FUNC_2(VAR_0->IkeSaList);VAR_7++)
 {
  IKE_SA *VAR_8 = FUNC_1(VAR_0->IkeSaList, VAR_7);
  IKE_CLIENT *VAR_9;

  VAR_9 = VAR_8->IkeClient;

  if (FUNC_0(&VAR_9->ClientIP, VAR_1) == 0 &&
   FUNC_0(&VAR_9->ServerIP, VAR_3) == 0 &&
   VAR_9->ClientPort == VAR_2 &&
   VAR_9->ServerPort == VAR_4 &&
   VAR_8->InitiatorCookie == VAR_5 &&
   VAR_8->Mode == VAR_6)
  {
   return VAR_8;
  }
 }

 return ((void*)0);
}
