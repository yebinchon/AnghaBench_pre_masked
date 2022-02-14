
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct ehea_port {int stats_work; int port_lock; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ehea_port* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct ehea_port*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ehea_port*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_0)
{
 int VAR_1;
 struct ehea_port *VAR_2 = FUNC_5(VAR_0);

 FUNC_3(&VAR_2->port_lock);

 if (FUNC_6(VAR_2))
  FUNC_0("enabling port %s", VAR_0->name);

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1) {
  FUNC_8(VAR_2);
  FUNC_7(VAR_0);
 }

 FUNC_4(&VAR_2->port_lock);
 FUNC_10(&VAR_2->stats_work,
         FUNC_9(FUNC_2(1000)));

 return VAR_1;
}
