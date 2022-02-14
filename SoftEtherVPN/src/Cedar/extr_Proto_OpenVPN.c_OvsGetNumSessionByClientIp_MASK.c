
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int SessionList; } ;
struct TYPE_5__ {int ClientIp; } ;
typedef TYPE_1__ OPENVPN_SESSION ;
typedef TYPE_2__ OPENVPN_SERVER ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

UINT FUNC_3(OPENVPN_SERVER *VAR_0, IP *VAR_1)
{
 UINT VAR_2;
 UINT VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_0->SessionList);VAR_2++)
 {
  OPENVPN_SESSION *VAR_4 = FUNC_1(VAR_0->SessionList, VAR_2);

  if (FUNC_0(&VAR_4->ClientIp, VAR_1) == 0)
  {
   VAR_3++;
  }
 }

 return VAR_3;
}
