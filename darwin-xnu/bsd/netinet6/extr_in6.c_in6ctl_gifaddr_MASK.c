
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sockaddr_in6 {int dummy; } ;
struct in6_ifreq {struct sockaddr_in6 ifr_dstaddr; struct sockaddr_in6 ifr_addr; } ;
struct in6_ifaddr {int ia_ifa; struct sockaddr_in6 ia_dstaddr; struct sockaddr_in6 ia_addr; } ;
struct ifnet {int if_flags; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr_in6*,struct sockaddr_in6*,int) ;
 int FUNC_4 (struct sockaddr_in6*,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_5(struct ifnet *VAR_4, struct in6_ifaddr *VAR_5, u_long VAR_6,
    struct in6_ifreq *VAR_7)
{
 struct sockaddr_in6 VAR_8;
 int VAR_9 = 0;

 FUNC_2(VAR_4 != ((void*)0));

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 switch (VAR_6) {
 case 129:
  FUNC_0(&VAR_5->ia_ifa);
  FUNC_3(&VAR_5->ia_addr, &VAR_8, sizeof (VAR_8));
  FUNC_1(&VAR_5->ia_ifa);
  if ((VAR_9 = FUNC_4(&VAR_8, VAR_3)) != 0)
   break;
  FUNC_3(&VAR_8, &VAR_7->ifr_addr, sizeof (VAR_8));
  break;

 case 128:
  if (!(VAR_4->if_flags & VAR_2)) {
   VAR_9 = VAR_1;
   break;
  }




  FUNC_0(&VAR_5->ia_ifa);
  FUNC_3(&VAR_5->ia_dstaddr, &VAR_8, sizeof (VAR_8));
  FUNC_1(&VAR_5->ia_ifa);
  if ((VAR_9 = FUNC_4(&VAR_8, VAR_3)) != 0)
   break;
  FUNC_3(&VAR_8, &VAR_7->ifr_dstaddr, sizeof (VAR_8));
  break;

 default:
  FUNC_2(0);

 }

 return (VAR_9);
}
