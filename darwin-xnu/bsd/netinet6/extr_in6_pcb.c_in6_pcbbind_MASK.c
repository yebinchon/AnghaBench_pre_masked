
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef scalar_t__ u_short ;
struct socket {int so_options; int so_flags; int so_cred; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; void* sin6_addr; scalar_t__ sin6_scope_id; scalar_t__ sin6_flowinfo; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;
struct proc {int dummy; } ;
struct inpcbinfo {int ipi_lock; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct inpcb {int inp_flags; scalar_t__ inp_state; struct ifnet* in6p_last_outifp; scalar_t__ inp_lport; void* in6p_laddr; struct socket* inp_socket; TYPE_1__ inp_laddr; struct inpcbinfo* inp_pcbinfo; } ;
struct in6_ifaddr {int ia6_flags; } ;
struct ifnet {int dummy; } ;
struct ifaddr {struct ifnet* ifa_ifp; } ;
typedef int sin6 ;
typedef int kauth_cred_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (void**) ;
 scalar_t__ FUNC_4 (void**) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct sockaddr_in6*) ;
 struct sockaddr_in6* FUNC_6 (struct sockaddr*) ;
 scalar_t__ FUNC_7 (struct socket*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (struct sockaddr_in6*,int) ;
 struct ifaddr* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (void**,struct sockaddr_in6*,struct inpcb*,int *,int *) ;
 int VAR_21 ;
 struct inpcb* FUNC_11 (struct inpcbinfo*,void**,scalar_t__,int) ;
 int FUNC_12 (void**,struct inpcb*,struct proc*,int) ;
 int FUNC_13 (struct sockaddr_in*,struct sockaddr_in6*) ;
 void* VAR_22 ;
 scalar_t__ FUNC_14 (struct inpcb*,int) ;
 struct inpcb* FUNC_15 (struct inpcbinfo*,int ,scalar_t__,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct proc*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (struct socket*,int ,int *) ;
 int VAR_23 ;
 int FUNC_24 (struct socket*,int ) ;
 int FUNC_25 (struct socket*,int ) ;

int
FUNC_26(struct inpcb *VAR_24, struct sockaddr *VAR_25, struct proc *VAR_26)
{
 struct socket *VAR_27 = VAR_24->inp_socket;
 struct inpcbinfo *VAR_28 = VAR_24->inp_pcbinfo;
 u_short VAR_29 = 0;
 int VAR_30 = 0, VAR_31 = (VAR_27->so_options & VAR_20);
 struct ifnet *VAR_32 = ((void*)0);
 struct sockaddr_in6 VAR_33;

 int VAR_34;
 kauth_cred_t VAR_35;


 if (!VAR_21)
  return (VAR_3);
 if (!(VAR_27->so_options & (VAR_19|VAR_20)))
  VAR_30 = 1;

 FUNC_25(VAR_27, 0);
 FUNC_20(VAR_28->ipi_lock);
 if (VAR_24->inp_lport || !FUNC_4(&VAR_24->in6p_laddr)) {

  FUNC_19(VAR_28->ipi_lock);
  FUNC_24(VAR_27, 0);
  return (VAR_7);
 }

 FUNC_8(&VAR_33, sizeof (VAR_33));
 if (VAR_25 != ((void*)0)) {
  if (VAR_25->sa_len != sizeof (struct sockaddr_in6)) {
   FUNC_19(VAR_28->ipi_lock);
   FUNC_24(VAR_27, 0);
   return (VAR_7);
  }



  if (VAR_25->sa_family != VAR_0) {
   FUNC_19(VAR_28->ipi_lock);
   FUNC_24(VAR_27, 0);
   return (VAR_4);
  }
  VAR_29 = FUNC_6(VAR_25)->sin6_port;

  *(&VAR_33) = *FUNC_6(VAR_25);


  if (FUNC_10(&VAR_33, &VAR_33, VAR_24, ((void*)0),
      ((void*)0)) != 0) {
   FUNC_19(VAR_28->ipi_lock);
   FUNC_24(VAR_27, 0);
   return (VAR_7);
  }


                VAR_33 = 0;
                VAR_33 = 0;
  VAR_33 = 0;

  if (FUNC_3(&VAR_33)) {







   if (VAR_27->so_options & VAR_19)
    VAR_31 = VAR_19|VAR_20;
  } else if (!FUNC_4(&VAR_33)) {
   struct ifaddr *VAR_36;

   VAR_36 = FUNC_9(FUNC_5(&VAR_33));
   if (VAR_36 == ((void*)0)) {
    FUNC_19(VAR_28->ipi_lock);
    FUNC_24(VAR_27, 0);
    return (VAR_3);
   } else {







    FUNC_0(VAR_36);
    if (((struct in6_ifaddr *)VAR_36)->ia6_flags &
        (VAR_9 | VAR_12|
        VAR_11 | VAR_10)) {
     FUNC_2(VAR_36);
     FUNC_1(VAR_36);
     FUNC_19(VAR_28->ipi_lock);
     FUNC_24(VAR_27, 0);
     return (VAR_3);
    }
    VAR_32 = VAR_36->ifa_ifp;
    FUNC_2(VAR_36);
    FUNC_1(VAR_36);
   }
  }
  if (VAR_29 != 0) {
   struct inpcb *VAR_37;
   uid_t VAR_38;


   if (FUNC_21(VAR_29) < VAR_16 &&
    !FUNC_4(&VAR_33)) {
    VAR_35 = FUNC_17(VAR_26);
    VAR_34 = FUNC_22(VAR_35,
        VAR_17, 0);
    FUNC_18(&VAR_35);
    if (VAR_34 != 0) {
     FUNC_19(VAR_28->ipi_lock);
     FUNC_24(VAR_27, 0);
     return (VAR_1);
    }
   }

   if (!FUNC_3(&VAR_33) &&
       (VAR_38 = FUNC_16(VAR_27->so_cred)) != 0) {
    VAR_37 = FUNC_11(VAR_28,
        &VAR_33, VAR_29,
        VAR_15);
    if (VAR_37 != ((void*)0) && (!FUNC_4(
        &VAR_33) ||
        !FUNC_4(&VAR_37->in6p_laddr) ||
        !(VAR_37->inp_socket->so_options &
        VAR_20)) && (VAR_38 != FUNC_16(
        VAR_37->inp_socket->so_cred)) &&
        !(VAR_37->inp_socket->so_flags &
        VAR_18)) {
     FUNC_19(VAR_28->ipi_lock);
     FUNC_24(VAR_27, 0);
     return (VAR_2);
    }
    if (!(VAR_24->inp_flags & VAR_8) &&
        FUNC_4(&VAR_33)) {
     struct sockaddr_in VAR_39;

     FUNC_13(&VAR_39, &VAR_33);
     VAR_37 = FUNC_15(
         VAR_28, VAR_39.sin_addr, VAR_29,
         VAR_15);
     if (VAR_37 != ((void*)0) &&
         !(VAR_37->inp_socket->so_options &
         VAR_20) &&
         (FUNC_16(VAR_27->so_cred) !=
         FUNC_16(VAR_37->inp_socket->
         so_cred)) && (VAR_37->inp_laddr.s_addr !=
         VAR_13 || FUNC_7(VAR_27) ==
         FUNC_7(VAR_37->inp_socket))) {
      FUNC_19(VAR_28->ipi_lock);
      FUNC_24(VAR_27, 0);
      return (VAR_2);
     }
    }
   }
   VAR_37 = FUNC_11(VAR_28,
       &VAR_33, VAR_29, VAR_30);
   if (VAR_37 != ((void*)0) &&
       (VAR_31 & VAR_37->inp_socket->so_options) == 0) {
    FUNC_19(VAR_28->ipi_lock);
    FUNC_24(VAR_27, 0);
    return (VAR_2);
   }
   if (!(VAR_24->inp_flags & VAR_8) &&
       FUNC_4(&VAR_33)) {
    struct sockaddr_in VAR_40;

    FUNC_13(&VAR_40, &VAR_33);
    VAR_37 = FUNC_15(VAR_28,
        VAR_40.sin_addr, VAR_29, VAR_30);
    if (VAR_37 != ((void*)0) && (VAR_31 &
        VAR_37->inp_socket->so_options) == 0 &&
        (VAR_37->inp_laddr.s_addr != VAR_13 ||
        FUNC_7(VAR_27) == FUNC_7(VAR_37->inp_socket))) {
     FUNC_19(VAR_28->ipi_lock);
     FUNC_24(VAR_27, 0);
     return (VAR_2);
    }
   }
  }
 }

 FUNC_24(VAR_27, 0);





 if (VAR_24->inp_state == VAR_14) {
  FUNC_19(VAR_28->ipi_lock);
  return (VAR_6);
 }


 if (VAR_24->inp_lport || !FUNC_4(&VAR_24->in6p_laddr)) {
  FUNC_19(VAR_28->ipi_lock);
  return (VAR_7);
 }

 if (!FUNC_4(&VAR_33)) {
  VAR_24->in6p_laddr = VAR_33;
  VAR_24->in6p_last_outifp = VAR_32;
 }

 if (VAR_29 == 0) {
  int VAR_41;
  if ((VAR_41 = FUNC_12(&VAR_24->in6p_laddr, VAR_24, VAR_26, 1)) != 0) {

   VAR_24->in6p_laddr = VAR_22;
   VAR_24->in6p_last_outifp = ((void*)0);
   FUNC_19(VAR_28->ipi_lock);
   return (VAR_41);
  }
 } else {
  VAR_24->inp_lport = VAR_29;
  if (FUNC_14(VAR_24, 1) != 0) {
   VAR_24->in6p_laddr = VAR_22;
   VAR_24->inp_lport = 0;
   VAR_24->in6p_last_outifp = ((void*)0);
   FUNC_19(VAR_28->ipi_lock);
   return (VAR_5);
  }
 }
 FUNC_19(VAR_28->ipi_lock);
 FUNC_23(VAR_27, VAR_23, ((void*)0));
 return (0);
}
