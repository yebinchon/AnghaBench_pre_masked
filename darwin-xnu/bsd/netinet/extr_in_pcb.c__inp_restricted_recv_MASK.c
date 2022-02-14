
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_flags; struct ifnet* inp_boundifp; } ;
struct ifnet {int if_eflags; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct inpcb*) ;
 int VAR_2 ;
 int FUNC_5 (struct inpcb*) ;
 scalar_t__ FUNC_6 (struct inpcb*) ;
 scalar_t__ FUNC_7 (struct inpcb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int VAR_5 ;

__attribute__((used)) static boolean_t
FUNC_9(struct inpcb *VAR_6, struct ifnet *VAR_7)
{
 FUNC_8(VAR_6 != ((void*)0));




 if (!VAR_5)
  return (VAR_0);

 if (VAR_7 == ((void*)0))
  return (VAR_0);

 if (FUNC_1(VAR_7) && FUNC_6(VAR_6))
  return (VAR_4);

 if (FUNC_2(VAR_7) && FUNC_7(VAR_6))
  return (VAR_4);

 if (FUNC_0(VAR_7) && !FUNC_4(VAR_6))
  return (VAR_4);

 if (!(VAR_7->if_eflags & VAR_1))
  return (VAR_0);

 if (VAR_6->inp_flags & VAR_3)
  return (VAR_0);

 if ((VAR_6->inp_flags & VAR_2) && VAR_6->inp_boundifp == VAR_7)
  return (VAR_0);

 if (FUNC_3(VAR_7) && !FUNC_5(VAR_6))
  return (VAR_4);

 return (VAR_4);
}
