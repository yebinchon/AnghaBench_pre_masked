
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct macvlan_port* macvlan_port; } ;
struct macvlan_port {int dummy; } ;


 int FUNC_0 (struct macvlan_port*) ;
 int FUNC_1 (struct macvlan_port*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct macvlan_port *VAR_1 = VAR_0->macvlan_port;

 FUNC_1(VAR_0->macvlan_port, ((void*)0));
 FUNC_2();
 FUNC_0(VAR_1);
}
