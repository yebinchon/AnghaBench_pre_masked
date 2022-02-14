
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ip_mc_list {struct ip_mc_list* next; } ;
struct in_device {struct ip_mc_list* mc_list; } ;


 struct in_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ip_mc_list*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct in_device *VAR_1;
 struct ip_mc_list *VAR_2;

 FUNC_2();
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  for (VAR_2 = VAR_1->mc_list; VAR_2; VAR_2 = VAR_2->next)
   FUNC_1(VAR_2);
 }

 FUNC_3();
}
