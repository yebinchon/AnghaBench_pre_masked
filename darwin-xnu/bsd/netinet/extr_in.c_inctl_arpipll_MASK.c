
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
 int VAR_3 ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(struct ifnet *VAR_4, struct ifreq *VAR_5)
{
 int VAR_6 = 0, VAR_7;

 FUNC_0(VAR_4 != ((void*)0));

 FUNC_1(&VAR_5->ifr_intval, &VAR_7, sizeof (VAR_7));
 VAR_3 = 1;

 FUNC_3(VAR_4);
 if (VAR_7) {






  if (VAR_4->if_eflags & VAR_2) {
   VAR_7 = 0;
   VAR_6 = VAR_0;
  } else {
   VAR_4->if_eflags |= VAR_1;
  }
 }
 if (!VAR_7)
  VAR_4->if_eflags &= ~VAR_1;
 FUNC_2(VAR_4);

 return (VAR_6);
}
