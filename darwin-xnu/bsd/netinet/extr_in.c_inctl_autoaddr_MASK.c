
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_intval; } ;
struct ifnet {int if_eflags; } ;
typedef int intval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(struct ifnet *VAR_3, struct ifreq *VAR_4)
{
 int VAR_5 = 0, VAR_6;

 FUNC_0(VAR_3 != ((void*)0));

 FUNC_1(&VAR_4->ifr_intval, &VAR_6, sizeof (VAR_6));

 FUNC_3(VAR_3);
 if (VAR_6) {






  if (VAR_3->if_eflags & VAR_2) {
   VAR_6 = 0;
   VAR_5 = VAR_0;
  } else {
   VAR_3->if_eflags |= VAR_1;
  }
 }
 if (!VAR_6)
  VAR_3->if_eflags &= ~VAR_1;
 FUNC_2(VAR_3);

 return (VAR_5);
}
