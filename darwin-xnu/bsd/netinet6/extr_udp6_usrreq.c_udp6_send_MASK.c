
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ so_cfil_db; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;
struct proc {int dummy; } ;
struct pr_usrreqs {int (* pru_send ) (struct socket*,int,struct mbuf*,struct sockaddr*,struct mbuf*,struct proc*) ;} ;
struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct inpcb {int inp_flags; int inp_vflag; int in6p_faddr; } ;
struct TYPE_2__ {struct pr_usrreqs* pr_usrreqs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int) ;
 struct m_tag* FUNC_3 (struct mbuf*,int *,int *,struct sockaddr**) ;
 int FUNC_4 (struct socket*,int,struct mbuf*,struct sockaddr*,struct mbuf*,struct proc*) ;
 int FUNC_5 (struct sockaddr*) ;
 scalar_t__ VAR_6 ;
 TYPE_1__** VAR_7 ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct m_tag*) ;
 int FUNC_8 (struct inpcb*) ;
 struct inpcb* FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*,int,struct mbuf*,struct sockaddr*,struct mbuf*,struct proc*) ;
 int FUNC_11 (struct inpcb*,struct mbuf*,struct sockaddr*,struct mbuf*,struct proc*) ;

__attribute__((used)) static int
FUNC_12(struct socket *VAR_8, int VAR_9, struct mbuf *VAR_10, struct sockaddr *VAR_11,
    struct mbuf *VAR_12, struct proc *VAR_13)
{
 struct inpcb *VAR_14;
 int VAR_15 = 0;
 VAR_14 = FUNC_9(VAR_8);
 if (VAR_14 == ((void*)0)) {
  VAR_15 = VAR_2;
  goto bad;
 }
 if (VAR_11 != ((void*)0)) {
  if (VAR_11->sa_len != sizeof (struct sockaddr_in6)) {
   VAR_15 = VAR_2;
   goto bad;
  }
  if (VAR_11->sa_family != VAR_0) {
   VAR_15 = VAR_1;
   goto bad;
  }
 }

 if (VAR_6 || (VAR_14->inp_flags & VAR_3) == 0) {
  int VAR_16;
  struct sockaddr_in6 *VAR_17 = ((void*)0);

  if (VAR_11 == ((void*)0)) {
   VAR_16 = (VAR_14->inp_vflag & VAR_4);
  } else {
   VAR_17 = (struct sockaddr_in6 *)(void *)VAR_11;
   VAR_16 =
       FUNC_1(&VAR_17->sin6_addr) ? 1 : 0;
  }
  if (VAR_16) {
   struct pr_usrreqs *VAR_18;

   if (VAR_17 != ((void*)0))
    FUNC_5(VAR_11);





   VAR_18 = VAR_7[VAR_5]->pr_usrreqs;
   VAR_15 = ((*VAR_18->pru_send)(VAR_8, VAR_9, VAR_10, VAR_11,
       VAR_12, VAR_13));





   return (VAR_15);
  }
 }
 VAR_15 = FUNC_11(VAR_14, VAR_10, VAR_11, VAR_12, VAR_13);




 return VAR_15;

bad:
 FUNC_2(VAR_15 != 0);

 if (VAR_10 != ((void*)0))
  FUNC_6(VAR_10);
 if (VAR_12 != ((void*)0))
  FUNC_6(VAR_12);




 return (VAR_15);
}
