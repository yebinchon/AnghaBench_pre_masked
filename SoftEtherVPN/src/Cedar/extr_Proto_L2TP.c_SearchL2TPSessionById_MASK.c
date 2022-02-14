
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int TunnelList; } ;
struct TYPE_7__ {scalar_t__ SessionId2; int IsV3; } ;
struct TYPE_6__ {int SessionList; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SESSION ;
typedef TYPE_3__ L2TP_SERVER ;


 scalar_t__ FUNC_0 (int ,int) ;
 void* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

L2TP_SESSION *FUNC_3(L2TP_SERVER *VAR_0, bool VAR_1, UINT VAR_2)
{
 UINT VAR_3, VAR_4;

 if (VAR_0 == ((void*)0) || VAR_2 == 0)
 {
  return ((void*)0);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_0->TunnelList);VAR_3++)
 {
  L2TP_TUNNEL *VAR_5 = FUNC_1(VAR_0->TunnelList, VAR_3);

  for (VAR_4 = 0;VAR_4 < FUNC_2(VAR_5->SessionList);VAR_4++)
  {
   L2TP_SESSION *VAR_6 = FUNC_1(VAR_5->SessionList, VAR_4);

   if (VAR_6->SessionId2 == VAR_2)
   {
    if (FUNC_0(VAR_6->IsV3, VAR_1))
    {
     return VAR_6;
    }
   }
  }
 }

 return ((void*)0);
}
