
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;
struct ifaddr {int ifa_debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifaddr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 struct in6_addr* FUNC_6 (struct sockaddr_in6*,int ,struct ifnet*,int ,struct in6_addr*,struct ifnet**,int*,struct ifaddr**) ;
 scalar_t__ VAR_5 ;

struct ifaddr *
FUNC_7(struct sockaddr_in6 *VAR_6, struct ifnet *VAR_7, int VAR_8) {
 int VAR_9 = 0;
 struct ifnet *VAR_10 = ((void*)0);
 struct in6_addr VAR_11 = {};
 struct in6_addr *VAR_12 = ((void*)0);
 struct ifaddr *VAR_13 = ((void*)0);

 if((VAR_12 = FUNC_6(VAR_6,
     (VAR_5 ? VAR_4 : 0),
     VAR_7, 0, &VAR_11, &VAR_10, &VAR_9, &VAR_13)) == ((void*)0)) {
  if (VAR_9 == 0)
   VAR_9 = VAR_0;
  FUNC_2(VAR_10 == ((void*)0));
  if (VAR_13 != ((void*)0)) {
   FUNC_0(VAR_13);
   VAR_13 = ((void*)0);
  }
  goto done;
 }

 if (VAR_10 != VAR_7) {
  if (VAR_9 == 0)
   VAR_9 = VAR_2;
  if (VAR_13 != ((void*)0)) {
   FUNC_0(VAR_13);
   VAR_13 = ((void*)0);
  }
  goto done;
 }

 FUNC_2(VAR_13 != ((void*)0));
 FUNC_4(VAR_7);
 if ((VAR_13->ifa_debug & VAR_3) != 0) {
  VAR_9 = VAR_1;
  FUNC_3(VAR_7);
  if (VAR_13 != ((void*)0)) {
   FUNC_0(VAR_13);
   VAR_13 = ((void*)0);
  }
  goto done;
 }
 FUNC_3(VAR_7);

done:
 FUNC_1("Returned with error: %d", VAR_9);
 if (VAR_10 != ((void*)0))
  FUNC_5(VAR_10);
 return (VAR_13);
}
