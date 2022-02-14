
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {struct ifaddr* rt_ifa; } ;
struct ifaddr {int dummy; } ;


 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int VAR_1 ;

void
FUNC_5(struct rtentry *VAR_2, struct ifaddr *VAR_3)
{
 FUNC_2(VAR_1, VAR_0);

 FUNC_4(VAR_2);

 if (VAR_2->rt_ifa == VAR_3)
  return;


 FUNC_3(VAR_2);


 if (VAR_2->rt_ifa)
  FUNC_1(VAR_2->rt_ifa);


 VAR_2->rt_ifa = VAR_3;


 if (VAR_2->rt_ifa)
  FUNC_0(VAR_2->rt_ifa);
}
