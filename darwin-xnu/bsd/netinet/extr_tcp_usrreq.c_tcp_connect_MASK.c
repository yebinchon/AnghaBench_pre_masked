
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct tcpcb {scalar_t__ t_state; int t_flags; int iss; int * t_timer; scalar_t__ t_starttime; struct inpcb* t_inpcb; } ;
struct socket {int dummy; } ;
struct TYPE_8__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_4__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct TYPE_5__ {int ro_rt; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct inpcb {scalar_t__ inp_lport; scalar_t__ inp_fport; scalar_t__ inp_flowhash; TYPE_1__ inp_route; TYPE_3__* inp_pcbinfo; TYPE_4__ inp_faddr; int inp_flags; struct ifnet* inp_last_outifp; struct in_addr inp_laddr; struct socket* inp_socket; } ;
struct ifnet {int dummy; } ;
struct TYPE_7__ {int ipi_lock; } ;
struct TYPE_6__ {int tcps_connattempt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tcpcb*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct tcpcb*) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct inpcb*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct ifnet*) ;
 scalar_t__ FUNC_4 (struct inpcb*,int ,int) ;
 int FUNC_5 (struct inpcb*,int *,struct proc*) ;
 int FUNC_6 (struct inpcb*,struct sockaddr*,struct in_addr*,int ,struct ifnet**,int ) ;
 struct inpcb* FUNC_7 (TYPE_3__*,TYPE_4__,scalar_t__,struct in_addr,scalar_t__,int ,int *) ;
 int FUNC_8 (struct inpcb*) ;
 scalar_t__ FUNC_9 (struct inpcb*) ;
 struct tcpcb* FUNC_10 (struct inpcb*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (struct socket*,int) ;
 int FUNC_17 (struct socket*,int) ;
 int FUNC_18 (struct socket*) ;
 struct tcpcb* FUNC_19 (struct tcpcb*) ;
 int VAR_12 ;
 int FUNC_20 (struct tcpcb*) ;
 scalar_t__ VAR_13 ;
 int FUNC_21 (struct tcpcb*) ;
 int FUNC_22 (struct tcpcb*,struct socket*,struct ifnet*) ;
 TYPE_2__ VAR_14 ;

__attribute__((used)) static int
FUNC_23(struct tcpcb *VAR_15, struct sockaddr *VAR_16, struct proc *VAR_17)
{
 struct inpcb *VAR_18 = VAR_15->t_inpcb, *VAR_19;
 struct socket *VAR_20 = VAR_18->inp_socket;
 struct tcpcb *VAR_21;
 struct sockaddr_in *VAR_22 = (struct sockaddr_in *)(void *)VAR_16;
 struct in_addr VAR_23;
 int VAR_24 = 0;
 struct ifnet *VAR_25 = ((void*)0);

 if (VAR_18->inp_lport == 0) {
  VAR_24 = FUNC_5(VAR_18, ((void*)0), VAR_17);
  if (VAR_24)
   goto done;
 }






 VAR_24 = FUNC_6(VAR_18, VAR_16, &VAR_23, VAR_2, &VAR_25, 0);
 if (VAR_24)
  goto done;

 FUNC_17(VAR_18->inp_socket, 0);
 VAR_19 = FUNC_7(VAR_18->inp_pcbinfo,
     VAR_22->sin_addr, VAR_22->sin_port,
     VAR_18->inp_laddr.s_addr != VAR_3 ? VAR_18->inp_laddr : VAR_23,
     VAR_18->inp_lport, 0, ((void*)0));

 FUNC_16(VAR_18->inp_socket, 0);
 if (VAR_19) {
  if (VAR_19 != VAR_18)
   FUNC_16(VAR_19->inp_socket, 1);
  if (FUNC_4(VAR_19, VAR_9, 1) == VAR_10) {
   if (VAR_19 != VAR_18)
    FUNC_17(VAR_19->inp_socket, 1);
   goto skip_oinp;
  }

  if (VAR_19 != VAR_18 && (VAR_21 = FUNC_10(VAR_19)) != ((void*)0) &&
      VAR_21->t_state == VAR_6 &&
      ((int)(VAR_13 - VAR_21->t_starttime)) < VAR_12 &&
      (VAR_21->t_flags & VAR_8)) {
   VAR_21 = FUNC_19(VAR_21);
  } else {
   FUNC_15("tcp_connect: inp=0x%llx err=EADDRINUSE\n",
       (uint64_t)FUNC_2(VAR_18));
   if (VAR_19 != VAR_18)
    FUNC_17(VAR_19->inp_socket, 1);
   VAR_24 = VAR_0;
   goto done;
  }
  if (VAR_19 != VAR_18)
   FUNC_17(VAR_19->inp_socket, 1);
 }
skip_oinp:
 if ((VAR_18->inp_laddr.s_addr == VAR_3 ? VAR_23.s_addr :
     VAR_18->inp_laddr.s_addr) == VAR_22->sin_addr.s_addr &&
     VAR_18->inp_lport == VAR_22->sin_port) {
  VAR_24 = VAR_1;
  goto done;
 }
 if (!FUNC_13(VAR_18->inp_pcbinfo->ipi_lock)) {

  FUNC_17(VAR_18->inp_socket, 0);
  FUNC_12(VAR_18->inp_pcbinfo->ipi_lock);
  FUNC_16(VAR_18->inp_socket, 0);
 }
 if (VAR_18->inp_laddr.s_addr == VAR_3) {
  VAR_18->inp_laddr = VAR_23;

  VAR_18->inp_last_outifp = VAR_25;

  VAR_18->inp_flags |= VAR_4;
 }
 VAR_18->inp_faddr = VAR_22->sin_addr;
 VAR_18->inp_fport = VAR_22->sin_port;
 FUNC_8(VAR_18);
 FUNC_11(VAR_18->inp_pcbinfo->ipi_lock);

 if (VAR_18->inp_flowhash == 0)
  VAR_18->inp_flowhash = FUNC_9(VAR_18);

 FUNC_22(VAR_15, VAR_20, VAR_25);

 FUNC_18(VAR_20);
 VAR_14.tcps_connattempt++;
 VAR_15->t_state = VAR_5;
 VAR_15->t_timer[VAR_7] = FUNC_0(VAR_15, FUNC_1(VAR_15));
 VAR_15->iss = FUNC_20(VAR_15);
 FUNC_21(VAR_15);
 if (VAR_11)
  FUNC_14(VAR_18->inp_route.ro_rt);

done:
 if (VAR_25 != ((void*)0))
  FUNC_3(VAR_25);

 return (VAR_24);
}
