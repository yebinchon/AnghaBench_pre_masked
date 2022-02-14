
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct rtentry {struct ifaddr* rt_ifa; } ;
struct TYPE_2__ {int sin6_addr; } ;
struct in6_ifaddr {TYPE_1__ ia_addr; } ;
struct ifaddr {int ifa_addr; } ;
typedef int all1_sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct sockaddr_in6*,int) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char*,int ,int) ;
 int VAR_8 ;
 int FUNC_8 (int,struct ifaddr*,int,struct rtentry*) ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (int,int ,int ,struct sockaddr*,int,struct rtentry**) ;
 int FUNC_11 (struct rtentry*,struct ifaddr*) ;

__attribute__((used)) static void
FUNC_12(int VAR_9, struct ifaddr *VAR_10)
{
 struct sockaddr_in6 VAR_11;
 struct rtentry *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_3(&VAR_11, sizeof (VAR_11));
 VAR_11.sin6_family = VAR_0;
 VAR_11.sin6_len = sizeof (struct sockaddr_in6);
 VAR_11.sin6_addr = VAR_7;
 FUNC_5(VAR_8);
 VAR_13 = FUNC_10(VAR_9, VAR_10->ifa_addr, VAR_10->ifa_addr,
     (struct sockaddr *)&VAR_11, VAR_4|VAR_2|VAR_3, &VAR_12);
 if (VAR_13 != 0) {
  FUNC_7(VAR_1, "in6_ifloop_request: "
      "%s operation failed for %s (errno=%d)\n",
      VAR_9 == VAR_5 ? "ADD" : "DELETE",
      FUNC_4(&((struct in6_ifaddr *)VAR_10)->ia_addr.sin6_addr),
      VAR_13);
 }

 if (VAR_12 != ((void*)0))
  FUNC_0(VAR_12);







 if (VAR_9 == VAR_5 && VAR_12 && VAR_10 != VAR_12->rt_ifa) {
  FUNC_11(VAR_12, VAR_10);
 }







 if (VAR_12 != ((void*)0)) {
  FUNC_8(VAR_9, VAR_10, VAR_13, VAR_12);
  if (VAR_9 == VAR_6) {
   FUNC_2(VAR_12);
   FUNC_9(VAR_12);
  } else {

   FUNC_1(VAR_12);
   FUNC_2(VAR_12);
  }
 }
 FUNC_6(VAR_8);
}
