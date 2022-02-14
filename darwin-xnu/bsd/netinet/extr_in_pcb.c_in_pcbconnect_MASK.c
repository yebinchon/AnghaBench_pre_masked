
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_flags; int so_state_change_cnt; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct inpcb {scalar_t__ inp_lport; TYPE_1__* inp_pcbinfo; int inp_fport; int inp_faddr; int inp_flags; struct ifnet* inp_last_outifp; struct in_addr inp_laddr; struct socket* inp_socket; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int ipi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inpcb*,int ,int) ;
 int FUNC_2 (struct inpcb*,int *,struct proc*) ;
 int FUNC_3 (struct inpcb*,struct sockaddr*,struct in_addr*,unsigned int,struct ifnet**,int ) ;
 struct inpcb* FUNC_4 (TYPE_1__*,int ,int ,struct in_addr,scalar_t__,int ,int *) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (struct inpcb*) ;
 int FUNC_10 (struct socket*,int ) ;
 int FUNC_11 (struct socket*,int ) ;

int
FUNC_12(struct inpcb *VAR_9, struct sockaddr *VAR_10, struct proc *VAR_11,
    unsigned int VAR_12, struct ifnet **VAR_13)
{
 struct in_addr VAR_14;
 struct sockaddr_in *VAR_15 = (struct sockaddr_in *)(void *)VAR_10;
 struct inpcb *VAR_16;
 int VAR_17;
 struct socket *VAR_18 = VAR_9->inp_socket;
 if ((VAR_17 = FUNC_3(VAR_9, VAR_10, &VAR_14, VAR_12, VAR_13, 0)) != 0)
  return (VAR_17);

 FUNC_11(VAR_18, 0);
 VAR_16 = FUNC_4(VAR_9->inp_pcbinfo, VAR_15->sin_addr, VAR_15->sin_port,
     VAR_9->inp_laddr.s_addr ? VAR_9->inp_laddr : VAR_14,
     VAR_9->inp_lport, 0, ((void*)0));
 FUNC_10(VAR_18, 0);






 if ((VAR_18->so_flags & VAR_6) != 0)
  return (VAR_1);

 if (VAR_16 != ((void*)0)) {
  FUNC_1(VAR_16, VAR_7, VAR_16 == VAR_9 ? 1 : 0);
  return (VAR_0);
 }
 if (VAR_9->inp_laddr.s_addr == VAR_3) {
  if (VAR_9->inp_lport == 0) {
   VAR_17 = FUNC_2(VAR_9, ((void*)0), VAR_11);
   if (VAR_17)
    return (VAR_17);
  }
  if (!FUNC_8(VAR_9->inp_pcbinfo->ipi_lock)) {




   FUNC_11(VAR_18, 0);
   FUNC_7(VAR_9->inp_pcbinfo->ipi_lock);
   FUNC_10(VAR_18, 0);
  }
  VAR_9->inp_laddr = VAR_14;

  VAR_9->inp_last_outifp = (VAR_13 != ((void*)0)) ? *VAR_13 : ((void*)0);
  VAR_9->inp_flags |= VAR_4;
 } else {
  if (VAR_9->inp_lport == 0)
   return (VAR_2);
  if (!FUNC_8(VAR_9->inp_pcbinfo->ipi_lock)) {




   FUNC_11(VAR_18, 0);
   FUNC_7(VAR_9->inp_pcbinfo->ipi_lock);
   FUNC_10(VAR_18, 0);
  }
 }
 VAR_9->inp_faddr = VAR_15->sin_addr;
 VAR_9->inp_fport = VAR_15->sin_port;
 if (VAR_8 && FUNC_0(VAR_18) == VAR_5)
  FUNC_9(VAR_9);
 FUNC_5(VAR_9);
 FUNC_6(VAR_9->inp_pcbinfo->ipi_lock);
 return (0);
}
