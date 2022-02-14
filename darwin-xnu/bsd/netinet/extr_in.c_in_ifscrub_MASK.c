
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ifaddr {int ia_flags; int ia_ifa; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,int,int ) ;

void
FUNC_5(struct ifnet *VAR_6, struct in_ifaddr *VAR_7, int VAR_8)
{
 FUNC_0(&VAR_7->ia_ifa);
 if ((VAR_7->ia_flags & VAR_0) == 0) {
  FUNC_1(&VAR_7->ia_ifa);
  return;
 }
 FUNC_1(&VAR_7->ia_ifa);
 if (!VAR_8)
  FUNC_2(VAR_5);
 if (VAR_6->if_flags & (VAR_1|VAR_2))
  FUNC_4(&(VAR_7->ia_ifa), (int)VAR_4, VAR_3);
 else
  FUNC_4(&(VAR_7->ia_ifa), (int)VAR_4, 0);
 FUNC_0(&VAR_7->ia_ifa);
 VAR_7->ia_flags &= ~VAR_0;
 FUNC_1(&VAR_7->ia_ifa);
 if (!VAR_8)
  FUNC_3(VAR_5);
}
