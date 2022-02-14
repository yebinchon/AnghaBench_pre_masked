
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint32_t ;
typedef int u_int32_t ;
typedef int tcp_ci ;
struct socket {int so_state; int so_error; } ;
struct sockaddr_in6 {int sin6_len; int sin6_port; int sin6_family; } ;
struct in6pcb {int in6p_flags; int in6p_faddr; int in6p_fport; int in6p_laddr; int in6p_lport; struct ifnet* in6p_last_outifp; } ;
struct ifnet {int if_index; } ;
struct conninfo_tcp {int sin6_len; int sin6_port; int sin6_family; } ;
typedef int socklen_t ;
typedef int sin6 ;
typedef int sae_connid_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct sockaddr_in6*,int) ;
 int FUNC_2 (struct sockaddr_in6*,int ,int) ;
 int FUNC_3 (struct sockaddr_in6*,int *,int *) ;
 int FUNC_4 (int,int) ;
 struct in6pcb* FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,struct sockaddr_in6*) ;

int
FUNC_7(struct socket *VAR_16, sae_connid_t VAR_17, uint32_t *VAR_18,
    uint32_t *VAR_19, int32_t *VAR_20, user_addr_t VAR_21, socklen_t *VAR_22,
    user_addr_t VAR_23, socklen_t *VAR_24, uint32_t *VAR_25,
    user_addr_t VAR_26, uint32_t *VAR_27)
{
 struct in6pcb *VAR_28 = FUNC_5(VAR_16);
 struct sockaddr_in6 VAR_29;
 struct ifnet *VAR_30 = ((void*)0);
 int VAR_31 = 0;
 u_int32_t VAR_32 = 0;





 if (VAR_28 == ((void*)0)) {
  VAR_31 = VAR_7;
  goto out;
 }

 if (VAR_17 != VAR_13 && VAR_17 != VAR_12 && VAR_17 != 1) {
  VAR_31 = VAR_7;
  goto out;
 }

 VAR_30 = VAR_28->in6p_last_outifp;
 *VAR_19 = ((VAR_30 != ((void*)0)) ? VAR_30->if_index : 0);
 *VAR_20 = VAR_16->so_error;
 *VAR_18 = 0;
 if (VAR_16->so_state & VAR_14)
  *VAR_18 |= (VAR_5 | VAR_6);
 if (VAR_28->in6p_flags & VAR_9)
  *VAR_18 |= VAR_2;
 if (!(VAR_28->in6p_flags & VAR_10))
  *VAR_18 |= VAR_3;
 if (!(VAR_28->in6p_flags & VAR_8))
  *VAR_18 |= VAR_4;

 FUNC_1(&VAR_29, sizeof (VAR_29));
 VAR_29 = sizeof (VAR_29);
 VAR_29 = VAR_0;


 VAR_29 = VAR_28->in6p_lport;
 FUNC_3(&VAR_29, &VAR_28->in6p_laddr, ((void*)0));
 if (*VAR_22 == 0) {
  *VAR_22 = VAR_29;
 } else {
  if (VAR_21 != VAR_15) {
   VAR_32 = FUNC_4(*VAR_22, sizeof (VAR_29));
   VAR_31 = FUNC_2(&VAR_29, VAR_21, VAR_32);
   if (VAR_31 != 0)
    goto out;
   *VAR_22 = VAR_32;
  }
 }


 VAR_29 = VAR_28->in6p_fport;
 FUNC_3(&VAR_29, &VAR_28->in6p_faddr, ((void*)0));
 if (*VAR_24 == 0) {
  *VAR_24 = VAR_29;
 } else {
  if (VAR_23 != VAR_15) {
   VAR_32 = FUNC_4(*VAR_24, sizeof (VAR_29));
   VAR_31 = FUNC_2(&VAR_29, VAR_23, VAR_32);
   if (VAR_31 != 0)
    goto out;
   *VAR_24 = VAR_32;
  }
 }

 if (FUNC_0(VAR_16) == VAR_11) {
  struct conninfo_tcp VAR_33;

  *VAR_25 = VAR_1;
  if (*VAR_27 == 0) {
   *VAR_27 = sizeof (VAR_33);
  } else {
   if (VAR_26 != VAR_15) {
    VAR_32 = FUNC_4(*VAR_27, sizeof (VAR_33));
    FUNC_1(&VAR_33, sizeof (VAR_33));
    FUNC_6(VAR_16, &VAR_33);
    VAR_31 = FUNC_2(&VAR_33, VAR_26, VAR_32);
    if (VAR_31 != 0)
     goto out;
    *VAR_27 = VAR_32;
   }
  }
 } else {
  *VAR_25 = 0;
  *VAR_27 = 0;
 }

out:
 return (VAR_31);
}
