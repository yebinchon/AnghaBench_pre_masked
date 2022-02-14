
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int so_flags1; TYPE_1__* so_proto; int so_state_change_cnt; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct in6_addr {int dummy; } ;
struct inpcb {scalar_t__ inp_lport; scalar_t__ inp_fport; TYPE_3__* inp_pcbinfo; int in6p_faddr; int in6p_flags; struct ifnet* in6p_last_outifp; struct in6_addr in6p_laddr; struct socket* inp_socket; } ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {int ipi_lock; } ;
struct TYPE_5__ {int nas_socket_inet_dgram_dns; } ;
struct TYPE_4__ {scalar_t__ pr_protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct inpcb*,int *,struct proc*) ;
 int FUNC_6 (struct inpcb*,struct sockaddr*,struct in6_addr*,struct ifnet**) ;
 struct inpcb* FUNC_7 (TYPE_3__*,int *,scalar_t__,struct in6_addr*,scalar_t__,int ,int *) ;
 int FUNC_8 (struct inpcb*,int ,int) ;
 int FUNC_9 (struct inpcb*) ;
 scalar_t__ FUNC_10 (struct inpcb*,struct ifnet*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (struct inpcb*) ;
 int FUNC_15 (struct socket*,int ) ;
 int FUNC_16 (struct socket*,int ) ;
 int FUNC_17 (struct socket*,int) ;

int
FUNC_18(struct inpcb *VAR_9, struct sockaddr *VAR_10, struct proc *VAR_11)
{
 struct in6_addr VAR_12;
 struct sockaddr_in6 *VAR_13 = (struct sockaddr_in6 *)(void *)VAR_10;
 struct inpcb *VAR_14;
 int VAR_15 = 0;
 struct ifnet *VAR_16 = ((void*)0);
 struct socket *VAR_17 = VAR_9->inp_socket;






 if (VAR_17->so_proto->pr_protocol == VAR_2 &&
     VAR_13->sin6_port == FUNC_3(53) && !(VAR_17->so_flags1 & VAR_3)) {
      VAR_17->so_flags1 |= VAR_3;
  FUNC_1(VAR_7.nas_socket_inet_dgram_dns);
 }
 if ((VAR_15 = FUNC_6(VAR_9, VAR_10, &VAR_12, &VAR_16)) != 0) {
  if (VAR_16 != ((void*)0) && FUNC_10(VAR_9, VAR_16))
   FUNC_17(VAR_17,
       (VAR_5 | VAR_4));
  goto done;
 }
 FUNC_16(VAR_17, 0);
 VAR_14 = FUNC_7(VAR_9->inp_pcbinfo, &VAR_13->sin6_addr,
     VAR_13->sin6_port, FUNC_0(&VAR_9->in6p_laddr) ?
     &VAR_12 : &VAR_9->in6p_laddr, VAR_9->inp_lport, 0, ((void*)0));
 FUNC_15(VAR_17, 0);
 if (VAR_14 != ((void*)0)) {
  FUNC_8(VAR_14, VAR_6, VAR_14 == VAR_9 ? 1 : 0);
  VAR_15 = VAR_0;
  goto done;
 }
 if (FUNC_0(&VAR_9->in6p_laddr)) {
  if (VAR_9->inp_lport == 0) {
   VAR_15 = FUNC_5(VAR_9, ((void*)0), VAR_11);
   if (VAR_15)
    goto done;
  }
  VAR_9->in6p_laddr = VAR_12;
  VAR_9->in6p_last_outifp = VAR_16;
  VAR_9->in6p_flags |= VAR_1;
 }
 if (!FUNC_13(VAR_9->inp_pcbinfo->ipi_lock)) {

  FUNC_16(VAR_17, 0);
  FUNC_12(VAR_9->inp_pcbinfo->ipi_lock);
  FUNC_15(VAR_17, 0);
 }
 VAR_9->in6p_faddr = VAR_13->sin6_addr;
 VAR_9->inp_fport = VAR_13->sin6_port;
 if (VAR_8 && FUNC_2(VAR_17) == VAR_2)
  FUNC_14(VAR_9);
 FUNC_9(VAR_9);
 FUNC_11(VAR_9->inp_pcbinfo->ipi_lock);

done:
 if (VAR_16 != ((void*)0))
  FUNC_4(VAR_16);

 return (VAR_15);
}
