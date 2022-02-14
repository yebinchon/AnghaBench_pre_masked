
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int IgnoreRecvErr; scalar_t__ Type; scalar_t__ socket; scalar_t__ LocalPort; int lock; int RecvSize; int RecvNum; scalar_t__ IsRawSocket; scalar_t__ IPv6; } ;
typedef TYPE_1__ SOCK ;
typedef int IP ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,scalar_t__*,void*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,void*,scalar_t__,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

UINT FUNC_9(SOCK *VAR_21, IP *VAR_22, UINT *VAR_23, void *VAR_24, UINT VAR_25)
{
 struct sockaddr_in VAR_26;
 int VAR_27 = 0;



 socklen_t VAR_28 = sizeof(VAR_26);



 if (VAR_21 != ((void*)0))
 {
  if (VAR_21->IPv6)
  {
   return FUNC_3(VAR_21, VAR_22, VAR_23, VAR_24, VAR_25);
  }

  VAR_21->IgnoreRecvErr = 0;
 }
 else
 {
  return 0;
 }

 if (VAR_22 == ((void*)0) || VAR_23 == ((void*)0) || VAR_24 == ((void*)0) || VAR_25 == 0)
 {
  return 0;
 }

 if (VAR_21->Type != VAR_9 || VAR_21->socket == VAR_7)
 {
  return 0;
 }

 VAR_27 = FUNC_7(VAR_21->socket, VAR_24, VAR_25, 0, (struct sockaddr *)&VAR_26, &VAR_28);
 if (VAR_27 > 0)
 {
  FUNC_1(VAR_22, &VAR_26.sin_addr);
  *VAR_23 = (UINT)FUNC_6(VAR_26.sin_port);
  if (VAR_21->IsRawSocket)
  {
   *VAR_23 = VAR_21->LocalPort;
  }

  FUNC_2(VAR_21->lock);
  {
   VAR_21->RecvNum++;
   VAR_21->RecvSize += (UINT64)VAR_27;
  }
  FUNC_4(VAR_21->lock);

  return (UINT)VAR_27;
 }
 else
 {
  if (VAR_20 == VAR_1 || VAR_20 == VAR_2 || VAR_20 == VAR_4 || VAR_20 == VAR_5 || VAR_20 == VAR_6 || VAR_20 == VAR_3)
  {
   VAR_21->IgnoreRecvErr = 1;
  }
  else if (VAR_20 == VAR_0)
  {
   return VAR_8;
  }
  else
  {
   FUNC_0("RecvFrom(): recvfrom() failed with error: %s\n", FUNC_8(VAR_20));
  }

  return 0;
 }
}
