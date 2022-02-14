
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int yes ;
struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; int sin6_port; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
typedef int USHORT ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_9__ {int ipv6_scope_id; } ;
struct TYPE_8__ {int IgnoreSendErr; int IsRawSocket; scalar_t__ Type; scalar_t__ socket; int UdpBroadcast; int lock; int SendNum; int SendSize; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ IP ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct sockaddr_in6*,int) ;
 scalar_t__ VAR_25 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,void*,int,int ,struct sockaddr*,int) ;
 int FUNC_9 (scalar_t__,int ,int ,char*,int) ;

UINT FUNC_10(SOCK *VAR_26, IP *VAR_27, UINT VAR_28, void *VAR_29, UINT VAR_30, bool VAR_31)
{
 SOCKET VAR_32;
 int VAR_33;
 struct sockaddr_in6 VAR_34;
 UINT VAR_35;

 if (VAR_26 != ((void*)0))
 {
  VAR_26->IgnoreSendErr = 0;
 }
 if (VAR_26 == ((void*)0) || VAR_27 == ((void*)0) || (VAR_26->IsRawSocket == 0 && VAR_28 == 0) || VAR_29 == ((void*)0))
 {
  return 0;
 }
 if (VAR_28 >= 65536 && VAR_26->IsRawSocket == 0)
 {
  return 0;
 }
 if (VAR_26->Type != VAR_11 || VAR_26->socket == VAR_8)
 {
  return 0;
 }
 if (VAR_30 == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_27) == 0)
 {
  return 0;
 }

 VAR_32 = VAR_26->socket;
 FUNC_6(&VAR_34, sizeof(VAR_34));
 VAR_34.sin6_family = VAR_0;
 if (VAR_26->IsRawSocket == 0)
 {
  VAR_34.sin6_port = FUNC_7((USHORT)VAR_28);
 }
 FUNC_1(&VAR_34.sin6_addr, VAR_27);
 VAR_34.sin6_scope_id = VAR_27->ipv6_scope_id;

 VAR_35 = FUNC_0(VAR_27);

 if ((VAR_35 & VAR_9) || VAR_31)
 {
  if (VAR_26->UdpBroadcast == 0)
  {
   bool VAR_36 = 1;

   VAR_26->UdpBroadcast = 1;

   (void)FUNC_9(VAR_32, VAR_12, VAR_13, (char *)&VAR_36, sizeof(VAR_36));
  }
 }

 VAR_33 = FUNC_8(VAR_32, VAR_29, VAR_30, 0, (struct sockaddr *)&VAR_34, sizeof(VAR_34));
 if (VAR_33 != (int)VAR_30)
 {
  VAR_26->IgnoreSendErr = 0;
  if (VAR_25 == VAR_2 || VAR_25 == VAR_3 || VAR_25 == VAR_5 || VAR_25 == VAR_6 || VAR_25 == VAR_7 || VAR_25 == VAR_4)
  {
   VAR_26->IgnoreSendErr = 1;
  }
  else if (VAR_25 == VAR_1)
  {
   return VAR_10;
  }

  return 0;
 }

 FUNC_3(VAR_26->lock);
 {
  VAR_26->SendSize += (UINT64)VAR_30;
  VAR_26->SendNum++;
 }
 FUNC_4(VAR_26->lock);

 return VAR_33;
}
