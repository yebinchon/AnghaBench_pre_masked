
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct ifnet* ifa_ifp; } ;
struct in6_ifaddr {TYPE_1__ ia_ifa; struct in6_ifaddr* ia_next; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct in6_ifaddr* VAR_2 ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

void
FUNC_7(struct ifnet *VAR_4)
{
 struct in6_ifaddr *VAR_5;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_2(VAR_3, VAR_0);

 FUNC_6(&VAR_1);
 VAR_5 = VAR_2;
 while (VAR_5 != ((void*)0)) {
  if (VAR_5->ia_ifa.ifa_ifp != VAR_4) {
   VAR_5 = VAR_5->ia_next;
   continue;
  }
  FUNC_0(&VAR_5->ia_ifa);
  FUNC_5(&VAR_1);
  FUNC_4(&VAR_5->ia_ifa);
  FUNC_1(&VAR_5->ia_ifa);
  FUNC_6(&VAR_1);






  VAR_5 = VAR_2;
 }
 FUNC_5(&VAR_1);

 FUNC_3(VAR_4);
}
