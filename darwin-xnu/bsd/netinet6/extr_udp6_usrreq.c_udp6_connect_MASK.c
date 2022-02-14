
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct socket {int so_flags1; int last_pid; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct inpcb {int inp_flags; scalar_t__ inp_flowhash; int inp_flow; int in6p_flags; int necp_client_uuid; int inp_vflag; int in6p_faddr; TYPE_1__ inp_faddr; } ;
struct TYPE_4__ {int nas_socket_inet6_dgram_connected; int nas_socket_inet_dgram_connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct socket*,struct sockaddr*,struct proc*) ;
 int FUNC_4 (struct socket*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct inpcb*,struct sockaddr*,struct proc*) ;
 int FUNC_7 (struct sockaddr_in*,struct sockaddr_in6*) ;
 int FUNC_8 (struct inpcb*,struct sockaddr*,struct proc*,int ,int *) ;
 scalar_t__ FUNC_9 (struct inpcb*) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int ,int ,struct inpcb*) ;
 scalar_t__ FUNC_11 (struct inpcb*) ;
 int FUNC_12 (struct inpcb*) ;
 TYPE_2__ VAR_12 ;
 int FUNC_13 (struct socket*,int ) ;
 int FUNC_14 (struct socket*,int ) ;
 int FUNC_15 (struct socket*) ;
 struct inpcb* FUNC_16 (struct socket*) ;
 int FUNC_17 (int ) ;

int
FUNC_18(struct socket *VAR_13, struct sockaddr *VAR_14, struct proc *VAR_15)
{
 struct inpcb *VAR_16;
 int VAR_17;




 VAR_16 = FUNC_16(VAR_13);
 if (VAR_16 == ((void*)0))
  return (VAR_0);





 if ((VAR_16->inp_flags & VAR_5) == 0) {
  struct sockaddr_in6 *VAR_18;

  VAR_18 = (struct sockaddr_in6 *)(void *)VAR_14;
  if (FUNC_1(&VAR_18->sin6_addr)) {
   struct sockaddr_in VAR_19;

   if (VAR_16->inp_faddr.s_addr != VAR_6)
    return (VAR_1);

   if (!(VAR_13->so_flags1 & VAR_10)) {
    VAR_13->so_flags1 |= VAR_10;
    FUNC_2(VAR_12.nas_socket_inet_dgram_connected);
   }

   FUNC_7(&VAR_19, VAR_18);





   VAR_17 = FUNC_8(VAR_16, (struct sockaddr *)&VAR_19,
       VAR_15, VAR_3, ((void*)0));
   if (VAR_17 == 0) {
    VAR_16->inp_vflag |= VAR_7;
    VAR_16->inp_vflag &= ~VAR_8;
    FUNC_15(VAR_13);
   }
   return (VAR_17);
  }
 }

 if (!FUNC_0(&VAR_16->in6p_faddr))
  return (VAR_1);

 if (!(VAR_13->so_flags1 & VAR_10)) {
  VAR_13->so_flags1 |= VAR_10;
  FUNC_2(VAR_12.nas_socket_inet6_dgram_connected);
 }
 VAR_17 = FUNC_6(VAR_16, VAR_14, VAR_15);
 if (VAR_17 == 0) {

  if (VAR_11 ||
      (VAR_16->inp_flags & VAR_5) == 0) {
   VAR_16->inp_vflag &= ~VAR_7;
   VAR_16->inp_vflag |= VAR_8;
  }
  FUNC_15(VAR_13);
  if (VAR_16->inp_flowhash == 0)
   VAR_16->inp_flowhash = FUNC_9(VAR_16);

  if (VAR_16->inp_flow == 0 &&
      VAR_16->in6p_flags & VAR_4) {
   VAR_16->inp_flow &= ~VAR_9;
   VAR_16->inp_flow |=
       (FUNC_5(VAR_16->inp_flowhash) & VAR_9);
  }
 }
 return (VAR_17);
}
