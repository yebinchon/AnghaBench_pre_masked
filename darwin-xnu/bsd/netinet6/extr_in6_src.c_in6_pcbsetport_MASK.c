
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct socket {int so_options; } ;
struct proc {int dummy; } ;
struct inpcbinfo {scalar_t__ ipi_lasthi; scalar_t__ ipi_lastlow; scalar_t__ ipi_lastport; int ipi_lock; } ;
struct inpcb {int inp_flags2; int inp_flags; scalar_t__ inp_lport; int * in6p_last_outifp; void* in6p_laddr; struct socket* inp_socket; struct inpcbinfo* inp_pcbinfo; } ;
struct in6_addr {int dummy; } ;
typedef int kauth_cred_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (struct inpcbinfo*,void**,scalar_t__,int) ;
 void* VAR_11 ;
 scalar_t__ FUNC_3 (struct inpcb*,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct socket*,int ) ;
 int FUNC_11 (struct socket*,int ) ;

int
FUNC_12(struct in6_addr *VAR_18, struct inpcb *VAR_19, struct proc *VAR_20,
    int VAR_21)
{
 struct socket *VAR_22 = VAR_19->inp_socket;
 u_int16_t VAR_23 = 0, VAR_24, VAR_25, *VAR_26;
 int VAR_27, VAR_28 = 0, VAR_29 = 0;
 boolean_t VAR_30;
 bool VAR_31;
 struct inpcbinfo *VAR_32 = VAR_19->inp_pcbinfo;
 kauth_cred_t VAR_33;
#pragma unused(laddr)
 if (!VAR_21) {
  if (!FUNC_8(VAR_32->ipi_lock)) {
   FUNC_11(VAR_19->inp_socket, 0);
   FUNC_7(VAR_32->ipi_lock);
   FUNC_10(VAR_19->inp_socket, 0);
  }





  if (VAR_19->inp_lport != 0) {
   FUNC_0(VAR_19->inp_flags2 & VAR_2);
   FUNC_6(VAR_32->ipi_lock);





   return (0);
  }
 }


 if ((VAR_22->so_options & (VAR_8|VAR_9)) == 0)
  VAR_29 = VAR_3;

 if (VAR_19->inp_flags & VAR_5) {
  VAR_24 = VAR_13;
  VAR_25 = VAR_14;
  VAR_26 = &VAR_32->ipi_lasthi;
 } else if (VAR_19->inp_flags & VAR_6) {
  VAR_33 = FUNC_4(VAR_20);
  VAR_28 = FUNC_9(VAR_33, VAR_7, 0);
  FUNC_5(&VAR_33);
  if (VAR_28 != 0) {
   if (!VAR_21)
    FUNC_6(VAR_32->ipi_lock);
   return (VAR_28);
  }
  VAR_24 = VAR_16;
  VAR_25 = VAR_17;
  VAR_26 = &VAR_32->ipi_lastlow;
 } else {
  VAR_24 = VAR_12;
  VAR_25 = VAR_15;
  VAR_26 = &VAR_32->ipi_lastport;
 }




 VAR_31 = 0;
 if (VAR_24 > VAR_25) {

  VAR_27 = VAR_24 - VAR_25;
  VAR_30 = VAR_10;
 } else {

  VAR_27 = VAR_25 - VAR_24;
  VAR_30 = VAR_1;
 }
 do {
  if (VAR_27-- < 0) {




   VAR_19->in6p_laddr = VAR_11;
   VAR_19->in6p_last_outifp = ((void*)0);
   if (!VAR_21)
    FUNC_6(VAR_32->ipi_lock);
   return (VAR_0);
  }
  if (VAR_30) {
   --*VAR_26;
   if (*VAR_26 > VAR_24 || *VAR_26 < VAR_25) {
    *VAR_26 = VAR_24;
   }
  } else {
   ++*VAR_26;
   if (*VAR_26 < VAR_24 || *VAR_26 > VAR_25)
    *VAR_26 = VAR_24;
  }
  VAR_23 = FUNC_1(*VAR_26);
  VAR_31 = (FUNC_2(VAR_32, &VAR_19->in6p_laddr,
          VAR_23, VAR_29) == ((void*)0));
 } while (!VAR_31);

 VAR_19->inp_lport = VAR_23;
 VAR_19->inp_flags |= VAR_4;

 if (FUNC_3(VAR_19, 1) != 0) {
  VAR_19->in6p_laddr = VAR_11;
  VAR_19->in6p_last_outifp = ((void*)0);

  VAR_19->inp_lport = 0;
  VAR_19->inp_flags &= ~VAR_4;
  if (!VAR_21)
   FUNC_6(VAR_32->ipi_lock);
  return (VAR_0);
 }

 if (!VAR_21)
  FUNC_6(VAR_32->ipi_lock);
 return (0);
}
