
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int TunnelList; } ;
struct TYPE_6__ {scalar_t__ TunnelId1; int IsV3; int ClientIp; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SERVER ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

L2TP_TUNNEL *FUNC_4(L2TP_SERVER *VAR_0, IP *VAR_1, UINT VAR_2, bool VAR_3)
{
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_2 == 0)
 {
  return ((void*)0);
 }

 for (VAR_4 = 0;VAR_4 < FUNC_3(VAR_0->TunnelList);VAR_4++)
 {
  L2TP_TUNNEL *VAR_5 = FUNC_2(VAR_0->TunnelList, VAR_4);

  if (VAR_5->TunnelId1 == VAR_2 && FUNC_0(&VAR_5->ClientIp, VAR_1) == 0)
  {
   if (FUNC_1(VAR_5->IsV3, VAR_3))
   {
    return VAR_5;
   }
  }
 }

 return ((void*)0);
}
