
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_intval; } ;
struct ifnet {int if_flags; int if_eflags; } ;
typedef int intval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_5(struct ifnet *VAR_5, struct ifreq *VAR_6)
{
 int VAR_7 = 0, VAR_8;

 FUNC_0(VAR_5 != ((void*)0));


 if (VAR_5->if_flags & VAR_4)
  return (VAR_0);

 FUNC_1(&VAR_6->ifr_intval, &VAR_8, sizeof (VAR_8));

 FUNC_3(VAR_5);
 if (VAR_8) {
  VAR_5->if_eflags |= VAR_3;
  VAR_5->if_eflags &= ~(VAR_1 | VAR_2);
 } else {
  VAR_5->if_eflags &= ~VAR_3;
 }
 FUNC_2(VAR_5);


 FUNC_4(VAR_5);

 return (VAR_7);
}
