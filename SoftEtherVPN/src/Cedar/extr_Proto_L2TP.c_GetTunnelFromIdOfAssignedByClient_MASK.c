
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int TunnelList; } ;
struct TYPE_6__ {scalar_t__ TunnelId1; int ClientIp; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SERVER ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

L2TP_TUNNEL *FUNC_3(L2TP_SERVER *VAR_0, IP *VAR_1, UINT VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_2 == 0)
 {
  return ((void*)0);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_0->TunnelList);VAR_3++)
 {
  L2TP_TUNNEL *VAR_4 = FUNC_1(VAR_0->TunnelList, VAR_3);

  if (VAR_4->TunnelId1 == VAR_2 && FUNC_0(&VAR_4->ClientIp, VAR_1) == 0)
  {
   return VAR_4;
  }
 }

 return ((void*)0);
}
