
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct socket {int so_state; } ;
struct sockaddr_in6 {int sin6_len; scalar_t__ sin6_scope_id; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct mbuf {int dummy; } ;
struct inpcb {int in6p_faddr; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct sockaddr_in6*,int) ;
 int FUNC_3 (struct mbuf*) ;
 scalar_t__ FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct mbuf*,struct socket*,struct sockaddr_in6*,struct mbuf*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 struct inpcb* FUNC_7 (struct socket*) ;

__attribute__((used)) static int
FUNC_8(struct socket *VAR_6, int VAR_7, struct mbuf *VAR_8, struct sockaddr *VAR_9,
    struct mbuf *VAR_10, struct proc *VAR_11)
{
#pragma unused(flags, p)
 struct inpcb *VAR_12 = FUNC_7(VAR_6);
 struct sockaddr_in6 VAR_13;
 struct sockaddr_in6 *VAR_14 = (struct sockaddr_in6 *)(void *)VAR_9;
 int VAR_15 = 0;

 if (VAR_12 == ((void*)0)



  ) {
  if (VAR_12 == ((void*)0))
   VAR_15 = VAR_1;
  else
   VAR_15 = VAR_4;
  goto bad;
 }


 if (VAR_6->so_state & VAR_5) {
  if (VAR_9 != ((void*)0)) {
   VAR_15 = VAR_2;
   goto bad;
  }

  FUNC_2(&VAR_13, sizeof(VAR_13));
  VAR_13.sin6_family = VAR_0;
  VAR_13.sin6_len = sizeof(struct sockaddr_in6);
  FUNC_1(&VAR_12->in6p_faddr, &VAR_13.sin6_addr,
        sizeof(struct in6_addr));
  VAR_14 = &VAR_13;
 } else {
  if (VAR_9 == ((void*)0)) {
   VAR_15 = VAR_3;
   goto bad;
  }
  VAR_13 = *(struct sockaddr_in6 *)(void *)VAR_9;
  VAR_14 = &VAR_13;
 }





 return (FUNC_5(VAR_8, VAR_6, VAR_14, VAR_10, 1));

bad:
 FUNC_0(VAR_15 != 0);

 if (VAR_8 != ((void*)0))
  FUNC_3(VAR_8);
 if (VAR_10 != ((void*)0))
  FUNC_3(VAR_10);

 return (VAR_15);
}
