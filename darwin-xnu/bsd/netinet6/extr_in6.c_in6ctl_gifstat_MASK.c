
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int ifru_icmp6stat; int ifru_stat; } ;
struct in6_ifreq {TYPE_1__ ifr_ifru; } ;
struct ifnet {int if_index; } ;
struct TYPE_4__ {int icmp6_ifstat; int in6_ifstat; } ;


 TYPE_2__* FUNC_0 (struct ifnet*) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(struct ifnet *VAR_0, u_long VAR_1, struct in6_ifreq *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 FUNC_1(VAR_0 != ((void*)0));
 VAR_4 = VAR_0->if_index;

 switch (VAR_1) {
 case 128:

  if (FUNC_0(VAR_0) == ((void*)0)) {

   FUNC_3(&VAR_2->ifr_ifru.ifru_stat,
       sizeof (VAR_2->ifr_ifru.ifru_stat));
  } else {
   FUNC_2(&FUNC_0(VAR_0)->in6_ifstat,
       &VAR_2->ifr_ifru.ifru_stat,
       sizeof (VAR_2->ifr_ifru.ifru_stat));
  }
  break;

 case 129:

  if (FUNC_0(VAR_0) == ((void*)0)) {

   FUNC_3(&VAR_2->ifr_ifru.ifru_icmp6stat,
       sizeof (VAR_2->ifr_ifru.ifru_icmp6stat));
  } else {
   FUNC_2(&FUNC_0(VAR_0)->icmp6_ifstat,
       &VAR_2->ifr_ifru.ifru_icmp6stat,
       sizeof (VAR_2->ifr_ifru.ifru_icmp6stat));
  }
  break;

 default:
  FUNC_1(0);

 }

 return (VAR_3);
}
