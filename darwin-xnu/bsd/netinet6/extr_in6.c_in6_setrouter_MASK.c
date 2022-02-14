
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_ifinfo {int flags; int lock; scalar_t__ initialized; } ;
struct ifnet {int if_flags; int if_eflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nd_ifinfo* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ifnet*,int ) ;
 int * VAR_5 ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_10(struct ifnet *VAR_6, int VAR_7)
{
 FUNC_1(VAR_6 != ((void*)0));

 if (VAR_6->if_flags & VAR_3)
  return (VAR_0);

 if (VAR_7) {
  struct nd_ifinfo *VAR_8 = ((void*)0);

  VAR_8 = FUNC_0(VAR_6);
  if (VAR_8 != ((void*)0) && VAR_8->initialized) {
   FUNC_7(&VAR_8->lock);
   if (VAR_8->flags & VAR_4) {

    VAR_8->flags &= ~VAR_4;
    FUNC_8(&VAR_8->lock);
    (void) FUNC_9(VAR_6, VAR_1);
   } else {
    FUNC_8(&VAR_8->lock);
   }
  }
 }

 FUNC_5(VAR_6);
 if (VAR_7) {
  VAR_6->if_eflags |= VAR_2;
 } else {
  VAR_6->if_eflags &= ~VAR_2;
 }
 FUNC_4(VAR_6);

 FUNC_7(VAR_5);
 FUNC_2(VAR_6);
 FUNC_8(VAR_5);

 FUNC_3(VAR_6, VAR_7);

 return (FUNC_6(VAR_6, VAR_1));
}
