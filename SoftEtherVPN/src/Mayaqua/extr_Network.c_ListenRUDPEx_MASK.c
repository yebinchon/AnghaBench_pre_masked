
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_9__ {TYPE_1__* UdpSock; } ;
struct TYPE_8__ {int ListenMode; int Connected; TYPE_3__* R_UDP_Stack; int LocalPort; int Type; } ;
struct TYPE_7__ {int LocalPort; } ;
typedef TYPE_2__ SOCK ;
typedef int RUDP_STACK_RPC_RECV_PROC ;
typedef int RUDP_STACK_INTERRUPTS_PROC ;
typedef TYPE_3__ RUDP_STACK ;
typedef int IP ;


 TYPE_3__* FUNC_0 (char*,int *,int *,void*,int ,int,int,int volatile*,int ,int *) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;

SOCK *FUNC_2(char *VAR_1, RUDP_STACK_INTERRUPTS_PROC *VAR_2, RUDP_STACK_RPC_RECV_PROC *VAR_3, void *VAR_4, UINT VAR_5, bool VAR_6, bool VAR_7,
       volatile UINT *VAR_8, UCHAR VAR_9, IP *VAR_10)
{
 SOCK *VAR_11;
 RUDP_STACK *VAR_12;


 VAR_12 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_12 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_11 = FUNC_1();

 VAR_11->Type = VAR_0;
 VAR_11->ListenMode = 1;
 VAR_11->Connected = 1;

 VAR_11->LocalPort = VAR_12->UdpSock->LocalPort;

 VAR_11->R_UDP_Stack = VAR_12;

 return VAR_11;
}
