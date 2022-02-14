
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int (* set_multi ) (struct net_device*) ;} ;
struct net_device {int dummy; } ;


 struct netxen_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct netxen_adapter *VAR_1 = FUNC_0(VAR_0);

 VAR_1->set_multi(VAR_0);
}
