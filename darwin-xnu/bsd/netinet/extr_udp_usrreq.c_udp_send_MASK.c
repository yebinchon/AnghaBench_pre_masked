
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct mbuf {int dummy; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int,struct mbuf*,struct sockaddr*,struct mbuf*,struct proc*) ;
 int FUNC_1 (struct mbuf*) ;
 scalar_t__ FUNC_2 (struct inpcb*) ;
 struct inpcb* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct inpcb*,struct mbuf*,struct sockaddr*,struct mbuf*,struct proc*) ;

int
FUNC_5(struct socket *VAR_1, int VAR_2, struct mbuf *VAR_3,
    struct sockaddr *VAR_4, struct mbuf *VAR_5, struct proc *VAR_6)
{

#pragma unused(flags)

 struct inpcb *VAR_7;

 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7 == ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_1(VAR_3);
  if (VAR_5 != ((void*)0))
   FUNC_1(VAR_5);
  return (VAR_0);
 }
 return (FUNC_4(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6));
}
