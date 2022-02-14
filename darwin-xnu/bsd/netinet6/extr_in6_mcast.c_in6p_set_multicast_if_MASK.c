
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sockopt {int sopt_valsize; } ;
struct ip6_moptions {struct ifnet* im6o_multicast_ifp; } ;
struct inpcb {int dummy; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ip6_moptions*) ;
 int FUNC_1 (struct ip6_moptions*) ;
 int FUNC_2 (struct ip6_moptions*) ;
 scalar_t__ VAR_4 ;
 struct ifnet** VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct ip6_moptions* FUNC_5 (struct inpcb*) ;
 int FUNC_6 (struct sockopt*,size_t*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct inpcb *VAR_6, struct sockopt *VAR_7)
{
 struct ifnet *VAR_8;
 struct ip6_moptions *VAR_9;
 u_int VAR_10;
 int VAR_11;

 if (VAR_7->sopt_valsize != sizeof(u_int))
  return (VAR_1);

 VAR_11 = FUNC_6(VAR_7, &VAR_10, sizeof(u_int), sizeof(u_int));
 if (VAR_11)
  return (VAR_11);

 FUNC_4();
 if ((u_int)VAR_4 < VAR_10) {
  FUNC_3();
  return (VAR_1);
 }

 VAR_8 = VAR_5[VAR_10];
 FUNC_3();
 if (VAR_8 == ((void*)0) || (VAR_8->if_flags & VAR_3) == 0)
  return (VAR_0);

 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9 == ((void*)0))
  return (VAR_2);

 FUNC_0(VAR_9);
 VAR_9->im6o_multicast_ifp = VAR_8;
 FUNC_2(VAR_9);
 FUNC_1(VAR_9);

 return (0);
}
