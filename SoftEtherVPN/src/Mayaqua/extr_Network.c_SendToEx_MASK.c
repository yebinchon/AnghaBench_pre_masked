
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int yes ;
struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
typedef int USHORT ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_10__ {int* addr; } ;
struct TYPE_9__ {int IgnoreSendErr; int IsRawSocket; scalar_t__ Type; scalar_t__ socket; int UdpBroadcast; int lock; int SendNum; int SendSize; scalar_t__ IPv6; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ IP ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int,void*,int,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_13 ;
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
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct sockaddr_in*,int) ;
 scalar_t__ VAR_24 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,void*,int,int ,struct sockaddr*,int) ;
 int FUNC_10 (scalar_t__,int ,int ,char*,int) ;

UINT FUNC_11(SOCK *VAR_25, IP *VAR_26, UINT VAR_27, void *VAR_28, UINT VAR_29, bool VAR_30)
{
 SOCKET VAR_31;
 int VAR_32;
 struct sockaddr_in VAR_33;

 if (VAR_25 != ((void*)0))
 {
  VAR_25->IgnoreSendErr = 0;
 }
 if (VAR_25 == ((void*)0) || VAR_26 == ((void*)0) || (VAR_25->IsRawSocket == 0 && VAR_27 == 0) || VAR_28 == ((void*)0))
 {
  return 0;
 }
 if (VAR_27 >= 65536 && VAR_25->IsRawSocket == 0)
 {
  return 0;
 }
 if (VAR_25->Type != VAR_10 || VAR_25->socket == VAR_8)
 {
  return 0;
 }
 if (VAR_29 == 0)
 {
  return 0;
 }

 if (VAR_25->IPv6)
 {
  return FUNC_4(VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30);
 }

 if (FUNC_2(VAR_26) == 0)
 {
  return 0;
 }

 VAR_31 = VAR_25->socket;
 FUNC_7(&VAR_33, sizeof(VAR_33));
 VAR_33.sin_family = VAR_0;
 if (VAR_25->IsRawSocket == 0)
 {
  VAR_33.sin_port = FUNC_8((USHORT)VAR_27);
 }
 FUNC_1(&VAR_33.sin_addr, VAR_26);

 if ((VAR_26->addr[0] == 255 && VAR_26->addr[1] == 255 &&
  VAR_26->addr[2] == 255 && VAR_26->addr[3] == 255) ||
  (VAR_26->addr[0] >= 224 && VAR_26->addr[0] <= 239)
  || VAR_30)
 {
  if (VAR_25->UdpBroadcast == 0)
  {
   bool VAR_34 = 1;

   VAR_25->UdpBroadcast = 1;

   (void)FUNC_10(VAR_31, VAR_11, VAR_12, (char *)&VAR_34, sizeof(VAR_34));
  }
 }

 VAR_32 = FUNC_9(VAR_31, VAR_28, VAR_29, 0, (struct sockaddr *)&VAR_33, sizeof(VAR_33));
 if (VAR_32 != (int)VAR_29)
 {
  VAR_25->IgnoreSendErr = 0;
  if (VAR_24 == VAR_2 || VAR_24 == VAR_3 || VAR_24 == VAR_5 || VAR_24 == VAR_6 || VAR_24 == VAR_7 || VAR_24 == VAR_4)
  {
   VAR_25->IgnoreSendErr = 1;
  }
  else if (VAR_24 == VAR_1)
  {
   return VAR_9;
  }

  return 0;
 }

 FUNC_3(VAR_25->lock);
 {
  VAR_25->SendSize += (UINT64)VAR_29;
  VAR_25->SendNum++;
 }
 FUNC_5(VAR_25->lock);

 return VAR_32;
}
