
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int SessionList; } ;
struct TYPE_5__ {scalar_t__ ServerSessionId; } ;
typedef TYPE_1__ OPENVPN_SESSION ;
typedef TYPE_2__ OPENVPN_SERVER ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;

UINT64 FUNC_3(OPENVPN_SERVER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 while (1)
 {
  UINT64 VAR_1 = FUNC_2();
  UINT VAR_2;
  bool VAR_3 = 0;

  if (VAR_1 == 0 || VAR_1 == (UINT64)(0xFFFFFFFFFFFFFFFFULL))
  {
   continue;
  }

  for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->SessionList);VAR_2++)
  {
   OPENVPN_SESSION *VAR_4 = FUNC_0(VAR_0->SessionList, VAR_2);
   if (VAR_4->ServerSessionId == VAR_1)
   {
    VAR_3 = 1;
   }
  }

  if (VAR_3 == 0)
  {
   return VAR_1;
  }
 }
}
