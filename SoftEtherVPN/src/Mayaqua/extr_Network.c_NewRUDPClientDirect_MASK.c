
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int TargetIpAndPortInited; int DoNotSetTargetConnectedSock; int Lock; int * TargetConnectedSock; int TargetConnectedEvent; int SockEvent; scalar_t__ TargetPort; int TargetIp; } ;
typedef int SOCK_EVENT ;
typedef int SOCK ;
typedef TYPE_1__ RUDP_STACK ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int,char*,int *,int *,int *,scalar_t__,int *,int *,int,int,int *,int *,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,int*) ;

SOCK *FUNC_9(char *VAR_5, IP *VAR_6, UINT VAR_7, UINT *VAR_8, UINT VAR_9, bool *VAR_10, SOCK *VAR_11, SOCK_EVENT *VAR_12, UINT VAR_13, bool VAR_14)
{
 RUDP_STACK *VAR_15;
 UINT VAR_16 = 0;
 SOCK *VAR_17 = ((void*)0);

 if (VAR_8 == ((void*)0))
 {
  VAR_8 = &VAR_16;
 }
 if (VAR_9 == 0)
 {
  VAR_9 = VAR_4;
 }
 *VAR_8 = VAR_2;
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == 0)
 {
  return ((void*)0);
 }

 VAR_15 = FUNC_4(0, VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_13, VAR_11, VAR_12, 0, VAR_14, VAR_6, ((void*)0), 0, ((void*)0));
 if (VAR_15 == ((void*)0))
 {
  *VAR_8 = VAR_2;
  return ((void*)0);
 }


 FUNC_3(VAR_15->Lock);
 {
  FUNC_0(&VAR_15->TargetIp, VAR_6, sizeof(IP));
  VAR_15->TargetPort = VAR_7;
  VAR_15->TargetIpAndPortInited = 1;
 }
 FUNC_7(VAR_15->Lock);
 FUNC_6(VAR_15->SockEvent);


 FUNC_8(VAR_15->TargetConnectedEvent, VAR_9, VAR_10);
 FUNC_3(VAR_15->Lock);
 {
  if (VAR_15->TargetConnectedSock != ((void*)0))
  {

   VAR_17 = VAR_15->TargetConnectedSock;
   VAR_15->TargetConnectedSock = ((void*)0);
  }
  else
  {
   VAR_15->DoNotSetTargetConnectedSock = 1;
  }
 }
 FUNC_7(VAR_15->Lock);

 if (VAR_17 == ((void*)0))
 {

  *VAR_8 = VAR_1;
  FUNC_2(VAR_15);
 }
 else if (VAR_10 != ((void*)0) && (*VAR_10))
 {

  *VAR_8 = VAR_3;

  FUNC_1(VAR_17);
  FUNC_5(VAR_17);

  VAR_17 = ((void*)0);
 }
 else
 {
  *VAR_8 = VAR_0;
 }

 return VAR_17;
}
