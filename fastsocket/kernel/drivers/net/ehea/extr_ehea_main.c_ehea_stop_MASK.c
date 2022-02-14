
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct ehea_port {int flags; int port_lock; int stats_work; int reset_task; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ehea_port* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct ehea_port*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct ehea_port*) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_1)
{
 int VAR_2;
 struct ehea_port *VAR_3 = FUNC_7(VAR_1);

 if (FUNC_8(VAR_3))
  FUNC_4("disabling port %s", VAR_1->name);

 FUNC_11(VAR_0, &VAR_3->flags);
 FUNC_1(&VAR_3->reset_task);
 FUNC_0(&VAR_3->stats_work);
 FUNC_5(&VAR_3->port_lock);
 FUNC_9(VAR_1);
 FUNC_10(VAR_3);
 VAR_2 = FUNC_3(VAR_1);
 FUNC_6(&VAR_3->port_lock);
 FUNC_2(VAR_0, &VAR_3->flags);
 return VAR_2;
}
