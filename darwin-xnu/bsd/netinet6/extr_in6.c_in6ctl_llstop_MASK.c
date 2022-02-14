
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * s6_addr16; } ;
struct TYPE_10__ {TYPE_3__ sin6_addr; } ;
struct nd_prefix {int ndpr_plen; TYPE_2__ ndpr_prefix; struct ifnet* ndpr_ifp; } ;
struct TYPE_12__ {struct ifnet* ifa_ifp; } ;
struct TYPE_9__ {int sin6_addr; } ;
struct in6_ifaddr {struct in6_ifaddr* ia_next; TYPE_4__ ia_ifa; TYPE_1__ ia_addr; } ;
struct ifnet {int dummy; } ;
typedef int pr0 ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct nd_prefix*) ;
 int FUNC_6 (struct nd_prefix*) ;
 int FUNC_7 (struct nd_prefix*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct nd_prefix*,int) ;
 int VAR_2 ;
 struct in6_ifaddr* VAR_3 ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_3__*,struct ifnet*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_4 ;
 struct nd_prefix* FUNC_16 (struct nd_prefix*,int ) ;
 int FUNC_17 (struct nd_prefix*) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_18(struct ifnet *VAR_5)
{
 struct in6_ifaddr *VAR_6;
 struct nd_prefix VAR_7, *VAR_8;

 FUNC_8(VAR_5 != ((void*)0));


 FUNC_15(&VAR_2);
 VAR_6 = VAR_3;
 while (VAR_6 != ((void*)0)) {
  if (VAR_6->ia_ifa.ifa_ifp != VAR_5) {
   VAR_6 = VAR_6->ia_next;
   continue;
  }
  FUNC_1(&VAR_6->ia_ifa);
  if (FUNC_4(&VAR_6->ia_addr.sin6_addr)) {
   FUNC_0(&VAR_6->ia_ifa);
   FUNC_3(&VAR_6->ia_ifa);
   FUNC_14(&VAR_2);
   FUNC_10(&VAR_6->ia_ifa);
   FUNC_2(&VAR_6->ia_ifa);
   FUNC_15(&VAR_2);






   VAR_6 = VAR_3;
   continue;
  }
  FUNC_3(&VAR_6->ia_ifa);
  VAR_6 = VAR_6->ia_next;
 }
 FUNC_14(&VAR_2);


 FUNC_9(&VAR_7, sizeof(VAR_7));
 VAR_7 = 64;
 VAR_7 = VAR_5;
 VAR_7[0] = VAR_0;
 FUNC_11(&VAR_7, VAR_5, ((void*)0));
 VAR_8 = FUNC_16(&VAR_7, VAR_1);
 if (VAR_8) {
  FUNC_12(VAR_4);
  FUNC_5(VAR_8);
  FUNC_17(VAR_8);
  FUNC_7(VAR_8);
  FUNC_6(VAR_8);
  FUNC_13(VAR_4);
 }

 return (0);
}
