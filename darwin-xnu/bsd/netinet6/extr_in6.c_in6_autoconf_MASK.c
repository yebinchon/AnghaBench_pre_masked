
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct ifnet* ifa_ifp; } ;
struct in6_ifaddr {int ia6_flags; struct in6_ifaddr* ia_next; TYPE_1__ ia_ifa; } ;
struct ifnet {int if_flags; int if_eflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 int VAR_6 ;
 struct in6_ifaddr* VAR_7 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_10(struct ifnet *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 FUNC_4(VAR_8 != ((void*)0));

 if (VAR_8->if_flags & VAR_4)
  return (VAR_1);

 if (VAR_9) {






  FUNC_6(VAR_8);
  if (VAR_8->if_eflags & VAR_3) {
   VAR_8->if_eflags &= ~VAR_2;
   VAR_10 = VAR_0;
  } else {
   VAR_8->if_eflags |= VAR_2;
  }
  FUNC_5(VAR_8);
 } else {
  struct in6_ifaddr *VAR_11 = ((void*)0);

  FUNC_6(VAR_8);
  VAR_8->if_eflags &= ~VAR_2;
  FUNC_5(VAR_8);


  FUNC_9(&VAR_6);
  VAR_11 = VAR_7;
  while (VAR_11 != ((void*)0)) {
   if (VAR_11->ia_ifa.ifa_ifp != VAR_8) {
    VAR_11 = VAR_11->ia_next;
    continue;
   }
   FUNC_1(&VAR_11->ia_ifa);
   if (VAR_11->ia6_flags & VAR_5) {
    FUNC_0(&VAR_11->ia_ifa);
    FUNC_3(&VAR_11->ia_ifa);
    FUNC_8(&VAR_6);
    FUNC_7(&VAR_11->ia_ifa);
    FUNC_2(&VAR_11->ia_ifa);
    FUNC_9(&VAR_6);






    VAR_11 = VAR_7;
    continue;
   }
   FUNC_3(&VAR_11->ia_ifa);
   VAR_11 = VAR_11->ia_next;
  }
  FUNC_8(&VAR_6);
 }
 return (VAR_10);
}
