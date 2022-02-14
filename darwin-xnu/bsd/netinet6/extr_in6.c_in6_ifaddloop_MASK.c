
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtentry {int rt_flags; TYPE_1__* rt_ifp; } ;
struct ifaddr {int ifa_addr; } ;
struct TYPE_2__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (int ,struct ifaddr*) ;
 struct rtentry* FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct ifaddr *VAR_3)
{
 struct rtentry *VAR_4;





 VAR_4 = FUNC_4(VAR_3->ifa_addr, 0, 0);
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4);
 if (VAR_4 == ((void*)0) || (VAR_4->rt_flags & VAR_1) == 0 ||
     (VAR_4->rt_ifp->if_flags & VAR_0) == 0) {
  if (VAR_4 != ((void*)0)) {
   FUNC_1(VAR_4);
   FUNC_2(VAR_4);
  }
  FUNC_3(VAR_2, VAR_3);
 } else if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
 }
}
