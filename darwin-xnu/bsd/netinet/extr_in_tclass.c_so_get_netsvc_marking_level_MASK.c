
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags1; } ;
struct inpcb {struct ifnet* inp_last_outifp; } ;
struct in6pcb {struct ifnet* in6p_last_outifp; } ;
struct ifnet {int if_eflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct socket*) ;
 int VAR_6 ;
 struct in6pcb* FUNC_1 (struct socket*) ;
 struct inpcb* FUNC_2 (struct socket*) ;

int
FUNC_3(struct socket *VAR_7)
{
 int VAR_8 = VAR_5;
 struct ifnet *VAR_9 = ((void*)0);

 switch (FUNC_0(VAR_7)) {
  case 129: {
   struct inpcb *VAR_10 = FUNC_2(VAR_7);

   if (VAR_10 != ((void*)0))
    VAR_9 = VAR_10->inp_last_outifp;
   break;
  }
  case 128: {
   struct in6pcb *VAR_11 = FUNC_1(VAR_7);

   if (VAR_11 != ((void*)0))
    VAR_9 = VAR_11->in6p_last_outifp;
   break;
  }
  default:
   break;
 }
 if (VAR_9 != ((void*)0)) {
  if ((VAR_9->if_eflags &
      (VAR_1 | VAR_0)) ==
      (VAR_1 | VAR_0)) {
   if ((VAR_7->so_flags1 & VAR_6))
    VAR_8 = VAR_3;
   else
    VAR_8 = VAR_4;
  } else {
   VAR_8 = VAR_2;
  }
 }
 return (VAR_8);
}
