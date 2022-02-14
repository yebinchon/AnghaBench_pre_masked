
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {struct in6_addr sin6_addr; } ;
struct in6_ifaddr {int ia_ifa; TYPE_1__ ia_addr; } ;
struct ifnet {int if_flags; } ;
struct ifaddr {struct ifnet* ifa_ifp; } ;
struct dadq {int * dad_nonce; int dad_ns_ocount; int dad_ns_tcount; } ;


 int FUNC_0 (struct dadq*) ;
 int FUNC_1 (struct dadq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct ifnet*,int *,struct in6_addr*,int *,int *) ;

__attribute__((used)) static void
FUNC_6(struct dadq *VAR_5, struct ifaddr *VAR_6)
{
 struct in6_ifaddr *VAR_7 = (struct in6_ifaddr *)VAR_6;
 struct ifnet *VAR_8 = VAR_6->ifa_ifp;
 int VAR_9 = 0;
 struct in6_addr VAR_10;

 FUNC_0(VAR_5);
 VAR_5->dad_ns_tcount++;
 if ((VAR_8->if_flags & VAR_2) == 0) {
  FUNC_1(VAR_5);
  return;
 }
 if ((VAR_8->if_flags & VAR_1) == 0) {
  FUNC_1(VAR_5);
  return;
 }

 VAR_5->dad_ns_ocount++;
 FUNC_1(VAR_5);
 FUNC_2(&VAR_7->ia_ifa);
 VAR_10 = VAR_7->ia_addr.sin6_addr;
 FUNC_3(&VAR_7->ia_ifa);
 if (VAR_4 != 0 && !(VAR_8->if_flags & VAR_0)) {
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   VAR_5->dad_nonce[VAR_9] = FUNC_4();
 }
 FUNC_5(VAR_8, ((void*)0), &VAR_10, ((void*)0),
     (uint8_t *)&VAR_5->dad_nonce[0]);
}
