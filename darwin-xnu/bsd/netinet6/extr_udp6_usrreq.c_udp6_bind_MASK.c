
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct inpcb {int inp_flags; int inp_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct inpcb*,struct sockaddr*,struct proc*) ;
 int FUNC_3 (struct sockaddr_in*,struct sockaddr_in6*) ;
 int FUNC_4 (struct inpcb*,struct sockaddr*,struct proc*) ;
 struct inpcb* FUNC_5 (struct socket*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_4, struct sockaddr *VAR_5, struct proc *VAR_6)
{
 struct inpcb *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_7->inp_vflag &= ~VAR_2;
 VAR_7->inp_vflag |= VAR_3;
 if ((VAR_7->inp_flags & VAR_1) == 0) {
  struct sockaddr_in6 *VAR_9;

  VAR_9 = (struct sockaddr_in6 *)(void *)VAR_5;

  if (FUNC_0(&VAR_9->sin6_addr)) {
   VAR_7->inp_vflag |= VAR_2;
  } else if (FUNC_1(&VAR_9->sin6_addr)) {
   struct sockaddr_in VAR_10;

   FUNC_3(&VAR_10, VAR_9);
   VAR_7->inp_vflag |= VAR_2;
   VAR_7->inp_vflag &= ~VAR_3;
   VAR_8 = FUNC_4(VAR_7, (struct sockaddr *)&VAR_10, VAR_6);
   return (VAR_8);
  }
 }

 VAR_8 = FUNC_2(VAR_7, VAR_5, VAR_6);
 return (VAR_8);
}
