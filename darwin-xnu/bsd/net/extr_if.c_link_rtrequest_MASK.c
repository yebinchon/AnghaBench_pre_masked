
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rtentry {struct ifaddr* rt_ifa; } ;
struct ifnet {int dummy; } ;
struct ifaddr {void (* ifa_rtrequest ) (int,struct rtentry*,struct sockaddr*) ;struct ifnet* ifa_ifp; } ;


 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 struct ifaddr* FUNC_6 (struct sockaddr*,struct ifnet*) ;
 int VAR_2 ;
 struct sockaddr* FUNC_7 (struct rtentry*) ;
 int FUNC_8 (struct rtentry*,struct ifaddr*) ;

void
FUNC_9(int VAR_3, struct rtentry *VAR_4, struct sockaddr *VAR_5)
{
 struct ifaddr *VAR_6;
 struct sockaddr *VAR_7;
 struct ifnet *VAR_8;
 void (*VAR_9)(int, struct rtentry *, struct sockaddr *);

 FUNC_3(VAR_2, VAR_0);
 FUNC_5(VAR_4);

 if (VAR_3 != VAR_1 || ((VAR_6 = VAR_4->rt_ifa) == 0) ||
     ((VAR_8 = VAR_6->ifa_ifp) == 0) || ((VAR_7 = FUNC_7(VAR_4)) == 0))
  return;


 FUNC_4(VAR_4);

 VAR_6 = FUNC_6(VAR_7, VAR_8);
 if (VAR_6) {
  FUNC_8(VAR_4, VAR_6);
  FUNC_0(VAR_6);
  VAR_9 = VAR_6->ifa_rtrequest;
  FUNC_2(VAR_6);
  if (VAR_9 != ((void*)0) && VAR_9 != FUNC_9)
   VAR_9(VAR_3, VAR_4, VAR_5);
  FUNC_1(VAR_6);
 }
}
