
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int32_t ;
struct nd_ifinfo {scalar_t__ initialized; scalar_t__ maxmtu; scalar_t__ linkmtu; int lock; } ;
struct ifnet {scalar_t__ if_mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct nd_ifinfo* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int ) ;

void
FUNC_6(struct ifnet *VAR_4)
{
 struct nd_ifinfo *VAR_5 = FUNC_0(VAR_4);
 u_int32_t VAR_6, VAR_7;

 if ((((void*)0) == VAR_5) || (VAR_0 == VAR_5->initialized)) {
  return;
 }

 FUNC_3(&VAR_5->lock);
 VAR_6 = VAR_5->maxmtu;
 VAR_7 = VAR_5->maxmtu = VAR_4->if_mtu;







 if (VAR_6 >= VAR_1 && VAR_5->maxmtu < VAR_1) {
  FUNC_5(VAR_2, "nd6_setmtu: "
      "new link MTU on %s (%u) is too small for IPv6\n",
      FUNC_1(VAR_4), (uint32_t)VAR_5->maxmtu);
 }
 VAR_5->linkmtu = VAR_4->if_mtu;
 FUNC_4(&VAR_5->lock);


 if (VAR_7 > VAR_3) {
  FUNC_2();
 }
}
