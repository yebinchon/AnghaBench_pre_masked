
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int * SessionList; } ;
struct TYPE_4__ {scalar_t__ Established; } ;
typedef TYPE_1__ OPENVPN_SESSION ;
typedef TYPE_2__ OPENVPN_SERVER ;
typedef int LIST ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

UINT FUNC_2(void *VAR_0)
{
 LIST *VAR_1;
 UINT VAR_2;
 UINT VAR_3 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = ((OPENVPN_SERVER *)VAR_0)->SessionList;

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_1);VAR_2++)
 {
  OPENVPN_SESSION *VAR_4 = FUNC_0(VAR_1, VAR_2);

  if (VAR_4->Established)
  {
   ++VAR_3;
  }
 }

 return VAR_3;
}
