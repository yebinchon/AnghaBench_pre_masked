
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ SrcPort; int DstIP; int SrcIP; } ;
typedef TYPE_1__ UDPPACKET ;
struct TYPE_9__ {int HasError; scalar_t__ Port; int IpAddress; int * Sock; } ;
typedef TYPE_2__ UDPLISTENER_SOCK ;
struct TYPE_10__ {int SockList; } ;
typedef TYPE_3__ UDPLISTENER ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

UDPLISTENER_SOCK *FUNC_6(UDPLISTENER *VAR_0, UDPPACKET *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_5(VAR_0->SockList);VAR_2++)
 {
  UDPLISTENER_SOCK *VAR_3 = FUNC_4(VAR_0->SockList, VAR_2);

  if (VAR_3->Sock != ((void*)0) && VAR_3->HasError == 0)
  {
   if (VAR_3->Port == VAR_1->SrcPort)
   {
    if (FUNC_0(&VAR_3->IpAddress, &VAR_1->SrcIP) == 0)
    {
     return VAR_3;
    }
   }
  }
 }

 for (VAR_2 = 0;VAR_2 < FUNC_5(VAR_0->SockList);VAR_2++)
 {
  UDPLISTENER_SOCK *VAR_4 = FUNC_4(VAR_0->SockList, VAR_2);

  if (VAR_4->Sock != ((void*)0) && VAR_4->HasError == 0)
  {
   if (VAR_4->Port == VAR_1->SrcPort)
   {
    if (FUNC_3(&VAR_4->IpAddress))
    {
     if ((FUNC_1(&VAR_1->DstIP) && FUNC_1(&VAR_4->IpAddress)) ||
      (FUNC_2(&VAR_1->DstIP) && FUNC_2(&VAR_4->IpAddress)))
     {
      return VAR_4;
     }
    }
   }
  }
 }

 return ((void*)0);
}
