
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_addr; scalar_t__ sin6_port; scalar_t__ sin6_scope_id; scalar_t__ sin6_flowinfo; } ;
struct sockaddr {int sa_len; } ;
struct proc {int dummy; } ;
struct inpcb {struct ifnet* in6p_last_outifp; int in6p_laddr; } ;
struct in6_ifaddr {int ia6_flags; } ;
struct ifnet {int dummy; } ;
struct ifaddr {struct ifnet* ifa_ifp; } ;
typedef int sin6 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sockaddr_in6*) ;
 struct sockaddr_in6* FUNC_5 (struct sockaddr*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct sockaddr_in6*,int) ;
 struct ifaddr* FUNC_8 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (struct inpcb*) ;
 int FUNC_10 (struct sockaddr_in6*,int ) ;
 struct inpcb* FUNC_11 (struct socket*) ;

__attribute__((used)) static int
FUNC_12(struct socket *VAR_11, struct sockaddr *VAR_12, struct proc *VAR_13)
{
#pragma unused(p)
 struct inpcb *VAR_14 = FUNC_11(VAR_11);
 struct sockaddr_in6 VAR_15;
 struct ifaddr *VAR_16 = ((void*)0);
 struct ifnet *VAR_17 = ((void*)0);
 int VAR_18;

 if (VAR_14 == ((void*)0)



  )
  return (VAR_14 == ((void*)0) ? VAR_2 : VAR_3);

 if (VAR_12->sa_len != sizeof (struct sockaddr_in6))
  return (VAR_2);

 if (FUNC_6(&VAR_9) || FUNC_5(VAR_12)->sin6_family != VAR_0)
  return (VAR_1);

 FUNC_7(&VAR_15, sizeof (VAR_15));
 *(&VAR_15) = *FUNC_5(VAR_12);

 if ((VAR_18 = FUNC_10(&VAR_15, VAR_10)) != 0)
  return (VAR_18);


 VAR_15 = 0;
 VAR_15 = 0;
 VAR_15 = 0;

 if (!FUNC_3(&VAR_15) &&
     (VAR_16 = FUNC_8(FUNC_4(&VAR_15))) == 0)
  return (VAR_1);
 if (VAR_16 != ((void*)0)) {
  FUNC_0(VAR_16);
  if (((struct in6_ifaddr *)VAR_16)->ia6_flags &
      (VAR_4 | VAR_8 | VAR_5 |
       VAR_7 | VAR_6)) {
   FUNC_2(VAR_16);
   FUNC_1(VAR_16);
   return (VAR_1);
  }
  VAR_17 = VAR_16->ifa_ifp;
  FUNC_2(VAR_16);
  FUNC_1(VAR_16);
 }
 VAR_14->in6p_laddr = VAR_15;
 VAR_14->in6p_last_outifp = VAR_17;

 return (0);
}
