
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct socket {int so_flags1; int last_pid; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct inpcb {scalar_t__ inp_flowhash; int necp_client_uuid; TYPE_1__ inp_faddr; } ;
struct TYPE_4__ {int nas_socket_inet_dgram_connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct socket*,struct sockaddr*,struct proc*) ;
 int FUNC_2 (struct socket*,scalar_t__) ;
 int FUNC_3 (struct inpcb*,struct sockaddr*,struct proc*,int ,int *) ;
 scalar_t__ FUNC_4 (struct inpcb*) ;
 int FUNC_5 (int ,int ,struct inpcb*) ;
 scalar_t__ FUNC_6 (struct inpcb*) ;
 scalar_t__ FUNC_7 (struct inpcb*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_8 (struct socket*,int ) ;
 int FUNC_9 (struct socket*,int ) ;
 int FUNC_10 (struct socket*) ;
 struct inpcb* FUNC_11 (struct socket*) ;
 int FUNC_12 (int ) ;

int
FUNC_13(struct socket *VAR_7, struct sockaddr *VAR_8, struct proc *VAR_9)
{
 struct inpcb *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_11(VAR_7);
 if (VAR_10 == ((void*)0))
  return (VAR_0);
 if (VAR_10->inp_faddr.s_addr != VAR_4)
  return (VAR_1);

 if (!(VAR_7->so_flags1 & VAR_5)) {
  VAR_7->so_flags1 |= VAR_5;
  FUNC_0(VAR_6.nas_socket_inet_dgram_connected);
 }
 VAR_11 = FUNC_3(VAR_10, VAR_8, VAR_9, VAR_3, ((void*)0));
 if (VAR_11 == 0) {
  FUNC_10(VAR_7);
  if (VAR_10->inp_flowhash == 0)
   VAR_10->inp_flowhash = FUNC_4(VAR_10);
 }
 return (VAR_11);
}
