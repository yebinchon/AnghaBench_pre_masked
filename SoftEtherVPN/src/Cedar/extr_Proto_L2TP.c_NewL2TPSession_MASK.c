
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int IsV3; TYPE_1__* Tunnel; int IsCiscoV3; scalar_t__ SessionId2; scalar_t__ SessionId1; } ;
struct TYPE_7__ {int IsV3; int IsCiscoV3; int SessionList; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SESSION ;
typedef int L2TP_SERVER ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int) ;

L2TP_SESSION *FUNC_4(L2TP_SERVER *VAR_1, L2TP_TUNNEL *VAR_2, UINT VAR_3)
{
 L2TP_SESSION *VAR_4;
 UINT VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return ((void*)0);
 }

 if (FUNC_2(VAR_2->SessionList) >= VAR_0)
 {
  return ((void*)0);
 }

 if (VAR_2->IsV3 == 0)
 {
  VAR_5 = FUNC_0(VAR_2, VAR_2->IsV3);
 }
 else
 {
  VAR_5 = FUNC_1(VAR_1);
 }
 if (VAR_5 == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(sizeof(L2TP_SESSION));

 VAR_4->SessionId1 = VAR_3;
 VAR_4->SessionId2 = VAR_5;

 VAR_4->IsV3 = VAR_2->IsV3;
 VAR_4->IsCiscoV3 = VAR_2->IsCiscoV3;

 VAR_4->Tunnel = VAR_2;

 return VAR_4;
}
