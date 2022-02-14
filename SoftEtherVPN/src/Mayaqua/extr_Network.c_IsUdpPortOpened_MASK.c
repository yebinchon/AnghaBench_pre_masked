
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int HasError; scalar_t__ Port; int IpAddress; int * Sock; } ;
typedef TYPE_1__ UDPLISTENER_SOCK ;
struct TYPE_6__ {int SockList; } ;
typedef TYPE_2__ UDPLISTENER ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

bool FUNC_4(UDPLISTENER *VAR_0, IP *VAR_1, UINT VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }

 if (VAR_1 != ((void*)0))
 {
  for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_0->SockList);VAR_3++)
  {
   UDPLISTENER_SOCK *VAR_4 = FUNC_2(VAR_0->SockList, VAR_3);

   if (VAR_4->Sock != ((void*)0) && VAR_4->HasError == 0)
   {
    if (VAR_4->Port == VAR_2)
    {
     if (FUNC_0(VAR_1, &VAR_4->IpAddress) == 0)
     {
      return 1;
     }
    }
   }
  }
 }

 for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_0->SockList);VAR_3++)
 {
  UDPLISTENER_SOCK *VAR_5 = FUNC_2(VAR_0->SockList, VAR_3);

  if (VAR_5->Sock != ((void*)0) && VAR_5->HasError == 0)
  {
   if (VAR_5->Port == VAR_2)
   {
    if (FUNC_1(&VAR_5->IpAddress))
    {
     return 1;
    }
   }
  }
 }

 return 0;
}
