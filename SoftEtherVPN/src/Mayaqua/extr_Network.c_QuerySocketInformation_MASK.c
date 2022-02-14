
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_scope_id; struct in6_addr sin6_addr; int sin6_port; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int sockaddr6 ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int ipv6_scope_id; } ;
struct TYPE_5__ {scalar_t__ Type; int IsTtlSupported; int lock; scalar_t__ CurrentTtl; scalar_t__ IPv6; int socket; scalar_t__ UdpMaxMsgSize; int RawSocketIPProtocol; scalar_t__ RemotePort; scalar_t__ LocalPort; scalar_t__ IsRawSocket; TYPE_3__ LocalIP; TYPE_3__ RemoteIP; } ;
typedef TYPE_1__ SOCK ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,struct in_addr*) ;
 int FUNC_1 (TYPE_3__*,struct in6_addr*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_6 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__,char*,int*) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(SOCK *VAR_9)
{

 if (VAR_9 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_9->lock);
 {
  struct sockaddr_in6 VAR_10;
  struct in6_addr *VAR_11;
  int VAR_12;
  DWORD VAR_13;
  UINT VAR_14 = 0;

  if (VAR_9->Type == VAR_4)
  {

   VAR_12 = sizeof(VAR_10);
   if (FUNC_5(VAR_9->socket, (struct sockaddr *)&VAR_10, (int *)&VAR_12) == 0)
   {
    if (VAR_12 >= sizeof(struct sockaddr_in6))
    {
     VAR_9->RemotePort = (UINT)FUNC_8(VAR_10);
     VAR_11 = &VAR_10;
     FUNC_1(&VAR_9->RemoteIP, VAR_11);
     VAR_9->RemoteIP.ipv6_scope_id = VAR_10;
    }
    else
    {
     struct sockaddr_in *VAR_15;
     struct in_addr *VAR_16;

     VAR_15 = (struct sockaddr_in *)&VAR_10;
     VAR_9->RemotePort = (UINT)FUNC_8(VAR_15->sin_port);
     VAR_16 = &VAR_15->sin_addr;
     FUNC_0(&VAR_9->RemoteIP, VAR_16);
    }
   }
  }


  VAR_12 = sizeof(VAR_10);
  if (FUNC_6(VAR_9->socket, (struct sockaddr *)&VAR_10, (int *)&VAR_12) == 0)
  {
   if (VAR_12 >= sizeof(struct sockaddr_in6))
   {
    VAR_9->LocalPort = (UINT)FUNC_8(VAR_10);
    VAR_11 = &VAR_10;
    FUNC_1(&VAR_9->LocalIP, VAR_11);
    VAR_9->LocalIP.ipv6_scope_id = VAR_10;
   }
   else
   {
    struct sockaddr_in *VAR_17;
    struct in_addr *VAR_18;

    VAR_17 = (struct sockaddr_in *)&VAR_10;
    VAR_9->LocalPort = (UINT)FUNC_8(VAR_17->sin_port);
    VAR_18 = &VAR_17->sin_addr;
    FUNC_0(&VAR_9->LocalIP, VAR_18);
   }
  }

  if (VAR_9->IsRawSocket)
  {
   VAR_9->LocalPort = VAR_9->RemotePort = FUNC_3(VAR_9->RawSocketIPProtocol);
  }

  if (VAR_9->Type == VAR_5)
  {
   VAR_9->UdpMaxMsgSize = VAR_8;
  }

  if (VAR_9->IPv6)
  {



  }
  else
  {



  }


  VAR_12 = sizeof(DWORD);
  if (VAR_14 == 0 ||
   FUNC_7(VAR_9->socket, (VAR_9->IPv6 ? VAR_1 : VAR_0), VAR_14, (char *)&VAR_13, &VAR_12) != 0)
  {
   VAR_9->IsTtlSupported = 0;
  }
  else
  {
   VAR_9->IsTtlSupported = 1;
   VAR_9->CurrentTtl = VAR_13;
  }
 }
 FUNC_4(VAR_9->lock);
}
