
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int link_fault; } ;
struct net_device {int dummy; } ;
struct adapter {int work_lock; struct net_device** port; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adapter *VAR_0, int VAR_1)
{
 struct net_device *VAR_2 = VAR_0->port[VAR_1];
 struct port_info *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_0->work_lock);
 VAR_3->link_fault = 1;
 FUNC_2(&VAR_0->work_lock);
}
